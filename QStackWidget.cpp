#include "QStackWidget.h"

QStackWidget::QStackWidget(QWidget *parent)
    : QDialog(parent)
{
    //ui.setupUi(this);
    setWindowTitle(tr("QStackedWidget"));
    qlist = new QListWidget(this);
    qlist->insertItem(0,"Window1");
    qlist->insertItem(1, "Window2");
    qlist->insertItem(2, "Window3");
    qlabel1 = new QLabel(tr("WindowTest1"));
    qlabel2 = new QLabel(tr("WindowTest2"));
    qlabel3 = new QLabel(tr("WindowTest3"));
    qstack = new QStackedWidget(this);
    qstack->addWidget(qlabel1);
    qstack->addWidget(qlabel2);
    qstack->addWidget(qlabel3);
    QHBoxLayout* mainLayout = new QHBoxLayout(this);
    mainLayout->setMargin(5);
    mainLayout->setSpacing(5);
    mainLayout->addWidget(qlist);
    mainLayout->addWidget(qstack, 0, Qt::AlignCenter);
    mainLayout->setStretchFactor(qlist, 1);
    mainLayout->setStretchFactor(qstack, 3);
    connect(qlist, SIGNAL(currentRowChanged(int)), qstack, SLOT(setCurrentIndex(int)));
}
