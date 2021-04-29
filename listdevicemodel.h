#ifndef LISTDEVICEMODEL_H
#define LISTDEVICEMODEL_H

#include <QObject>
#include <QAbstractTableModel>
#include "listdevicedata.h"

class listDeviceModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    listDeviceModel(QObject *parent);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

private:
    QStringList headers;
    listDeviceData list;
};

#endif // LISTDEVICEMODEL_H
