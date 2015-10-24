#ifndef DIALOG_MANAGER_H
#define DIALOG_MANAGER_H

#include <QDialog>

namespace Ui {
class Dialog_manager;
}

class Dialog_manager : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_manager(QWidget *parent = 0);
    ~Dialog_manager();

private:
    Ui::Dialog_manager *ui;
};

#endif // DIALOG_MANAGER_H
