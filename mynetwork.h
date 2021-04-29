#ifndef MYNETWORK_H
#define MYNETWORK_H

#include <QMainWindow>
#include <QSettings>
#include <QtSql>
#include "listdevices.h"
#include "listdevtypes.h"

QT_BEGIN_NAMESPACE
namespace Ui { class myNetwork; }
QT_END_NAMESPACE

class myNetwork : public QMainWindow
{
    Q_OBJECT

public:
    myNetwork(QWidget *parent = nullptr);
    ~myNetwork();
    bool createDb();
    bool openDb();

public slots:
    void settings();
    void listdevtypes();

private:
    Ui::myNetwork *ui;
    QSqlDatabase db;
    QString dbname;
    QSettings st;
};
#endif // MYNETWORK_H
