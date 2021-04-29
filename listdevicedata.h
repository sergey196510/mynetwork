#ifndef LISTDEVICEDATA_H
#define LISTDEVICEDATA_H

#include <QObject>
#include <QtSql>


struct deviceData {
    int id;
    int type;
    QString name;
};

class listDeviceData
{
public:
    listDeviceData();
    void Read();
    int size() const { return list.size(); }

private:
    QVector<deviceData> list;
};

#endif // LISTDEVICEDATA_H
