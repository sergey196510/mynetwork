#include "listdevices.h"

listDevices::listDevices(QWidget *parent) : QTableView(parent)
{
    listDeviceModel *model = new listDeviceModel(this);
    this->setModel(model);
}
