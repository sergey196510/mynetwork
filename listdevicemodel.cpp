#include "listdevicemodel.h"

listDeviceModel::listDeviceModel(QObject *parent) : QAbstractTableModel(parent)
{
    headers << "Type" << "Name";
}

int listDeviceModel::rowCount(const QModelIndex &parent) const
{
    return list.size();
}

int listDeviceModel::columnCount(const QModelIndex &) const
{
    return headers.size();
}

QVariant listDeviceModel::data(const QModelIndex &index, int role) const
{
    return QVariant();
}

QVariant listDeviceModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
        return headers[section];
    return QVariant();
}
