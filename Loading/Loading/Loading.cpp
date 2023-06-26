#include "Loading.h"
#include "code.h"

Loading::Loading(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    start();
}

Loading::~Loading()
{}
