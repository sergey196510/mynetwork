#ifndef LISTDEVTYPES_H
#define LISTDEVTYPES_H

#include <QWidget>
#include <QTableView>

class listDevTypes : public QTableView
{
    Q_OBJECT
public:
    listDevTypes(QWidget *parent = nullptr);
};

#endif // LISTDEVTYPES_H
