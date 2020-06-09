#include "QStackWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStackWidget w;
    w.show();
    return a.exec();
}
