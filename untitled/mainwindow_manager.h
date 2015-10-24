#ifndef MAINWINDOW_MANAGER_H
#define MAINWINDOW_MANAGER_H

#include <QMainWindow>

namespace Ui {
class MainWindow_Manager;
}

class MainWindow_Manager : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_Manager(QWidget *parent = 0);
    ~MainWindow_Manager();
    Ui::MainWindow_Manager *ui_man;

private:

};

#endif // MAINWINDOW_MANAGER_H
