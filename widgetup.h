#ifndef WIDGETUP_H
#define WIDGETUP_H

#include <QWidget>

class WidgetUp : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetUp(QWidget *parent = 0);

signals:
    void sigShow();
    void sigHide();

public slots:

protected:
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);
};

#endif // WIDGETUP_H
