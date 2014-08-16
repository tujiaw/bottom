#ifndef WIDGETDOWN_H
#define WIDGETDOWN_H

#include <QWidget>

class WidgetDown : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetDown(QWidget *parent = 0);

signals:
    void sigShow();
    void sigHide();

protected:
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);
};

#endif // WIDGETDOWN_H
