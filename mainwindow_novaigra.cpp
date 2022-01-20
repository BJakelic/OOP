#include "mainwindow_novaigra.h"
#include "ui_mainwindow_novaigra.h"

#include <QMessageBox>

int broj1 = 0;
int broj2 = 0;

int tocanZbroj = 0;

MainWindow_NovaIgra::MainWindow_NovaIgra(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_NovaIgra)
{
    ui->setupUi(this);
}

MainWindow_NovaIgra::~MainWindow_NovaIgra()
{
    delete ui;
}

void MainWindow_NovaIgra::on_pushButton_ZavrsiPotez_clicked()
{

    tocanZbroj = broj1 + broj2;

    NovaIgra2 = new MainWindow_NovaIgra2(this);
    NovaIgra2->show();
}


void MainWindow_NovaIgra::on_spinBox_valueChanged(int arg1)
{
    broj1 = arg1;
}


void MainWindow_NovaIgra::on_spinBox_2_valueChanged(int arg1)
{
    broj2 = arg1;
}

