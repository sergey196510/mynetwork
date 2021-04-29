#include "listdevicedata.h"

listDeviceData::listDeviceData()
{

}

void listDeviceData::Read()
{
    QSqlQuery q;

    list.clear();

    if (q.exec("SELECT type, name FROM devices ORDER BY name")) {
        qDebug() << q.lastError();
        return;
    }
    while (q.next()) {
        deviceData d;
        d.type = q.value(0).toInt();
        d.name = q.value(1).toString();
        list.push_back(d);
    }
}
