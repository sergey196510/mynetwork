#ifndef LISTDEVTYPESMODEL_H
#define LISTDEVTYPESMODEL_H

#include <QAbstractTableModel>

class listDevTypesModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit listDevTypesModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

signals:

};

#endif // LISTDEVTYPESMODEL_H
