#ifndef MYCOLUMN_H
#define MYCOLUMN_H

#include <QWidget>
#include <QTimer>
#include <QPainter>
#include <QRectF>

#include <QtUiPlugin/QDesignerExportWidget>


namespace Ui {
class MyColumn;
}

class QDESIGNER_WIDGET_EXPORT MyColumn : public QWidget
{
    Q_OBJECT

public:
    explicit MyColumn(QWidget *parent = nullptr);
    ~MyColumn();

    void Init();
    void CreateConnection();

    void DrawBackground(QPainter *painter);
    void DrawRuler(QPainter *painter);
    void DrawBarBackground(QPainter *painter);
    void DrawBar(QPainter *painter);

    void SetRange(double minValue, double maxValue);
    void SetRange(int minValue,int maxValue);
    void SetMaxValue(double maxValue);
    void SetMinVlaue(double minValue);
    void SetTargetValue(double targetValue);
    void SetTargetValue(int targetValue);
    void SetPercision(int percision);
    void SetLongStep(int longStep);
    void SetShortStep(int shortStep);
    void SetSpace(int space);
    void SetUseAnimation(bool animation);
    void SetAnimationStep(double animationStep);
    void SetBackgroundColorStart(const QColor &BgColorStart);
    void SetBackgroundColorEnd(const QColor &BgColorEnd);
    void SetLineColor(const QColor &lineColor);
    void SetBarBgColor(const QColor &barBgColor);
    void SetBarColor(const QColor &barColor);
    void SetCurrentValue(float value);

signals:
    void TargetValueChanged(double);

public slots:
    void SltUpdateValue();

private:
    Ui::MyColumn *ui;

    float m_dMinValue;
    float m_dMaxValue;
    float m_dTargetValue;
    int m_iPercision;
    int m_iLongStep;
    int m_iShortStep;
    int m_iSpace;
    bool m_bAnimation;
    float m_dAnimationStep;
    QColor m_BGColorStart;
    QColor m_BGColorEnd;

    QColor m_LineColor; //线条颜色
    QColor m_BarBGColor; //柱状图背景色
    QColor m_BarColor; //柱状图颜色

    bool m_bReverse;  //是否倒退
    float m_dCurrentValue;    //当前值

    QTimer* m_timer;

    QRectF m_barRect;

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // MYCOLUMN_H
