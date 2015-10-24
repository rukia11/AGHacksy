#include "mainwindow_manager.h"
#include "ui_mainwindow_manager.h"

MainWindow_Manager::MainWindow_Manager(QWidget *parent) :
    QMainWindow(parent),
    ui_man(new Ui::MainWindow_Manager)
{
    ui_man->setupUi(this);
}

MainWindow_Manager::~MainWindow_Manager()
{
    delete ui_man;
}
