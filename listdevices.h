#ifndef LISTDEVICES_H
#define LISTDEVICES_H

#include <QTableView>
#include <QWidget>
#include "listdevicemodel.h"

class listDevices : public QTableView
{
    Q_OBJECT
public:
    listDevices(QWidget *parent = nullptr);
};

#endif // LISTDEVICES_H
