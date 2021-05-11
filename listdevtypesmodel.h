#ifndef LISTDEVTYPESMODEL_H
#define LISTDEVTYPESMODEL_H

#include <QAbstractTableModel>

class portType {
    int id;
    QString name;
    int type;
    int speed;

public:
    portType() {
        id = 0;
        type = 0;
        speed = 0;
    }
};

class dataDeviceTypes {
    int id;
    QString name;
    QString description;
    QVector<portType> ports;

public:
    dataDeviceTypes() {
        id = 0;
    }
};

class listDevTypesModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit listDevTypesModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

private:
    QStringList headers;
    QVector<dataDeviceTypes> list;

signals:

};

#endif // LISTDEVTYPESMODEL_H
