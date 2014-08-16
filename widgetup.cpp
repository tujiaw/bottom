#include "widgetup.h"
#include <QtWidgets>

WidgetUp::WidgetUp(QWidget *parent) :
    QWidget(parent)
{ 
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QColor(0, 255, 0)));
    this->setPalette(palette);
    this->setAutoFillBackground(true);

    this->setMouseTracking(true);
}

void WidgetUp::enterEvent(QEvent *event)
{
    emit sigShow();
    QWidget::enterEvent(event);
}

void WidgetUp::leaveEvent(QEvent *event)
{
    emit sigHide();
    QWidget::leaveEvent(event);
}
