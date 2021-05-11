#include "listdevtypesmodel.h"

listDevTypesModel::listDevTypesModel(QObject *parent) : QAbstractTableModel(parent)
{
    headers << "Name" << "Description";
}

int listDevTypesModel::rowCount(const QModelIndex &) const
{
    return list.size();
}

int listDevTypesModel::columnCount(const QModelIndex &) const
{
    return headers.size();
}

QVariant listDevTypesModel::data(const QModelIndex &index, int role) const
{
    return QVariant();
}

QVariant listDevTypesModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    return QVariant();
}
