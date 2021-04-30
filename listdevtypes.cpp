#include "listdevtypes.h"

listDevTypes::listDevTypes(QWidget *parent) : QTableView(parent)
{
    listDevTypesModel *model = new listDevTypesModel(this);
    this->setModel(model);
}
