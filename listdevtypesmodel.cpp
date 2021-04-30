#include "listdevtypesmodel.h"

listDevTypesModel::listDevTypesModel(QObject *parent) : QAbstractTableModel(parent)
{

}

int listDevTypesModel::rowCount(const QModelIndex &parent) const
{
    return 0;
}

int listDevTypesModel::columnCount(const QModelIndex &) const
{
    return 0;
}

QVariant listDevTypesModel::data(const QModelIndex &index, int role) const
{
    return QVariant();
}

QVariant listDevTypesModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    return QVariant();
}
