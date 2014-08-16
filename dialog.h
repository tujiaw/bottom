#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();


public slots:
    void slotShow();
    void slotHide();

private:
    Ui::Dialog *ui;
    bool isWidgetDownShow_;
    bool isWidgetUpShow_;
};

#endif // DIALOG_H
