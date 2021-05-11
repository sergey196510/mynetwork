#include "editdevicetype.h"
#include "ui_editdevicetype.h"

editDeviceType::editDeviceType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editDeviceType)
{
    ui->setupUi(this);
}

editDeviceType::~editDeviceType()
{
    delete ui;
}
