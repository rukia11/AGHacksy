#include "mycircle.h"

MyCircle::MyCircle(QWidget *parent) : QWidget(parent){
    this->setText("+");
    this->setFixedHeight(60);
    this->setFixedWidth(60);
    this->setStyleSheet(QString::fromUtf8("QPushButton{background-color: red;"
                                                    "border-style: solid;"
                                                    "border-color: black;"
                                                    "border-width: 1px;"
                                                    "border-radius: 30px;}"));
}


