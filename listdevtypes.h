#ifndef LISTDEVTYPES_H
#define LISTDEVTYPES_H

#include <QWidget>
#include <QTableView>
#include "listdevtypesmodel.h"

class listDevTypes : public QTableView
{
    Q_OBJECT
public:
    listDevTypes(QWidget *parent = nullptr);
};

#endif // LISTDEVTYPES_H
