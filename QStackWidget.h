#pragma once

#include <QtWidgets/QDialog>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>
#include<QHBoxLayout>
#include "ui_QStackWidget.h"

class QStackWidget : public QDialog
{
    Q_OBJECT

public:
    QStackWidget(QWidget *parent = Q_NULLPTR);

private:
    Ui::QStackWidgetClass ui;
    QListWidget* qlist;
    QStackedWidget* qstack;
    QLabel* qlabel1, * qlabel2, * qlabel3;
};
