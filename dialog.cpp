#include "dialog.h"
#include "ui_dialog.h"
#include <QtWidgets>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->widgetDown, SIGNAL(sigShow()), this, SLOT(slotShow()));
    connect(ui->widgetDown, SIGNAL(sigHide()), this, SLOT(slotHide()));
    connect(ui->widgetUp, SIGNAL(sigShow()), this, SLOT(slotShow()));
    connect(ui->widgetUp, SIGNAL(sigHide()), this, SLOT(slotHide()));

    ui->widgetUp->hide();
    isWidgetDownShow_ = true;
    isWidgetUpShow_ = false;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::slotShow()
{
    if (this->sender() == ui->widgetDown) {
        isWidgetDownShow_ = true;
    } else if (this->sender() == ui->widgetUp) {
        isWidgetUpShow_ = true;
    }

    ui->widgetUp->show();
}

void Dialog::slotHide()
{
    if (this->sender() == ui->widgetDown) {
        isWidgetDownShow_ = false;
    } else if (this->sender() == ui->widgetUp) {
        isWidgetUpShow_ = false;
    }

    if (!isWidgetDownShow_ && !isWidgetUpShow_) {
        ui->widgetUp->hide();
    }
}
