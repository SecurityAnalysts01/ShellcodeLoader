#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Loading.h"

class Loading : public QMainWindow
{
    Q_OBJECT

public:
    Loading(QWidget *parent = nullptr);
    ~Loading();

private:
    Ui::LoadingClass ui;
};
