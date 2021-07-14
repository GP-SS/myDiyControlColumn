#ifndef COLUMNTEST_H
#define COLUMNTEST_H

#include <QWidget>
#include <QMessageBox>
#include <QTcpSocket>
#include <QHostAddress> //QHostAddress类提供一个IP地址。 这个类提供一种独立于平台和协议的方式来保存IPv4和IPv6地址

QT_BEGIN_NAMESPACE
namespace Ui { class ColumnTest; }
QT_END_NAMESPACE

class ColumnTest : public QWidget
{
    Q_OBJECT

public:
    ColumnTest(QWidget *parent = nullptr);
    ~ColumnTest();

private slots:
    void on_btn_connect_clicked();

    void on_btn_disconnect_clicked();

    void on_btn_clear_clicked();

    //接收区槽函数
    void ClientRecvData();

private:
    Ui::ColumnTest *ui;

    QTcpSocket *mp_clientSocket;
};
#endif // COLUMNTEST_H
