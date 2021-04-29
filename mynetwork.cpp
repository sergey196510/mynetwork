#include "mynetwork.h"
#include "ui_mynetwork.h"

myNetwork::myNetwork(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myNetwork)
{
    ui->setupUi(this);

    QSettings st("lsi", "myNetwork");
    dbname = st.value("dbname").toString();

    dbname = "mynet.db";

    if (dbname != nullptr)
        openDb();

    listDevices *ld = new listDevices;
    this->setCentralWidget(ld);

    connect(ui->actionQuit, SIGNAL(triggered(bool)), qApp, SLOT(quit()));
    connect(ui->actionDevice_types, SIGNAL(triggered(bool)), SLOT(listdevtypes()));
}

myNetwork::~myNetwork()
{
    delete ui;
}

bool myNetwork::createDb()
{
    QSqlQuery q;

    q.exec("CREATE TABLE devices(id integer primary key autoincrement, name text, type int)");
    q.exec("CREATE TABLE ports(id integer primary key autoincrement, name text, type int)");

    return true;
}

bool myNetwork::openDb()
{
    bool flag = false;

    if (!QFile(dbname).exists())
        flag = true;

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbname);
    db.open();

    if (flag == true)
        createDb();

    return true;
}

void myNetwork::settings()
{
}

void myNetwork::listdevtypes()
{
    listDevTypes *ldt = new listDevTypes;
    this->setCentralWidget(ldt);
}
