#ifndef EDITDEVICETYPE_H
#define EDITDEVICETYPE_H

#include <QDialog>

namespace Ui {
class editDeviceType;
}

class editDeviceType : public QDialog
{
    Q_OBJECT

public:
    explicit editDeviceType(QWidget *parent = nullptr);
    ~editDeviceType();

private:
    Ui::editDeviceType *ui;
};

#endif // EDITDEVICETYPE_H
