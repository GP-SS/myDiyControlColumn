#include "columntest.h"
#include "ui_columntest.h"

ColumnTest::ColumnTest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ColumnTest)
{
    ui->setupUi(this);

    ui->edt_ipaddress->setText("127.0.0.1");
    ui->edt_port->setText("5550");
}

ColumnTest::~ColumnTest()
{
    delete ui;
}

//开始连接按钮槽函数
void ColumnTest::on_btn_connect_clicked()
{
    mp_clientSocket = new QTcpSocket();//建立TCP类的对象

    QString ip = ui->edt_ipaddress->text();
    int port = ui->edt_port->text().toInt();

    mp_clientSocket->connectToHost(ip, port);

    if(!mp_clientSocket->waitForConnected(3000))
    {
        QMessageBox::information(this, "QT网络通信", "连接服务端失败！");
        return;
    }
    //该按钮失能
    ui->btn_connect->setEnabled(false);
    ui->btn_disconnect->setEnabled(true);

    connect(mp_clientSocket, SIGNAL(readyRead()), this, SLOT(ClientRecvData()));
}

//断开连接按钮槽函数
void ColumnTest::on_btn_disconnect_clicked()
{
    ui->btn_connect->setEnabled(true);
    ui->btn_disconnect->setEnabled(false);

    mp_clientSocket->disconnectFromHost();//断开连接

}

//清除窗口按钮槽函数
void ColumnTest::on_btn_clear_clicked()
{
    ui->textBrowser->clear();
}


void ColumnTest::ClientRecvData()
{
    //将接收内容存储到字符串中
    char recvMsg[1024] = {0};
    int recvRe = mp_clientSocket->read(recvMsg, 1024);

    if(recvRe == -1)
    {
        QMessageBox::information(this, "QT网络通信", "接收服务端数据失败！");
        return;
    }
    QString showQstr = recvMsg;
    ui->textBrowser->append(showQstr);

    QVector<double> data;//用于存储接收的数据的double格式

    //需要将字符串形式的数据转换成double类型
    auto list = showQstr.split(",");//list是字符串数组类型QStringList，showStr调用split函数将原始长的字符串数据根据逗号“,”进行分割，并将分割后的单独字符串依次存储在字符串数组中
    int len = list.size();
    for(int i = 0; i < len; ++i)
    {
        data.push_back(list[i].toDouble());//将字符串数据转换成double数据类型
    }

    ui->myColumn_1->SetCurrentValue(data[0]);
    ui->myColumn_2->SetCurrentValue(data[1]);
    ui->myColumn_3->SetCurrentValue(data[2]);
    ui->myColumn_4->SetCurrentValue(data[3]);
    ui->myColumn_5->SetCurrentValue(data[4]);
    ui->myColumn_6->SetCurrentValue(data[5]);
    ui->myColumn_7->SetCurrentValue(data[6]);
    ui->myColumn_8->SetCurrentValue(data[7]);
    ui->myColumn_9->SetCurrentValue(data[8]);
    ui->myColumn_10->SetCurrentValue(data[9]);
    ui->myColumn_11->SetCurrentValue(data[10]);
    ui->myColumn_12->SetCurrentValue(data[11]);
    ui->myColumn_13->SetCurrentValue(data[12]);
    ui->myColumn_14->SetCurrentValue(data[13]);
    ui->myColumn_15->SetCurrentValue(data[14]);
    ui->myColumn_16->SetCurrentValue(data[15]);
    ui->myColumn_17->SetCurrentValue(data[16]);
    ui->myColumn_18->SetCurrentValue(data[17]);
}

