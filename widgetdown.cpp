#include "widgetdown.h"
#include <QtWidgets>

WidgetDown::WidgetDown(QWidget *parent) :
    QWidget(parent)
{
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QColor(255, 0, 0)));
    this->setPalette(palette);
    this->setAutoFillBackground(true);

    this->setMouseTracking(true);
}

void WidgetDown::enterEvent(QEvent *event)
{
    emit sigShow();
    QWidget::enterEvent(event);
}

void WidgetDown::leaveEvent(QEvent *event)
{
    emit sigHide();
    QWidget::leaveEvent(event);
}
