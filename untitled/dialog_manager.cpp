#include "dialog_manager.h"
#include "ui_dialog_manager.h"

Dialog_manager::Dialog_manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_manager)
{
    ui->setupUi(this);
}

Dialog_manager::~Dialog_manager()
{
    delete ui;
}
