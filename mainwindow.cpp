#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("C:/Bere/OOP-seminarski/Slike/japaneza");
    ui->slika->setPixmap(pix.scaled(100, 100, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_NovaIgra_clicked()
{
    NovaIgra = new MainWindow_NovaIgra(this);
    NovaIgra->show();
}


void MainWindow::on_pushButton_Pravila_clicked()
{
    QMessageBox::information(this, "Pravila", "Igra Japaneza igra je predvidanja. Dva igraca biraju broj kamencica koje ce drzati u ruci (0-3) i pogadaju ukupan zbroj tih kamencica (0-6). "
                                              "Pobjednik je onaj koji pogodi tocan zbroj, a moguc je i ishod bez pobjednika ako nijedan od igraca ne pogodi zbroj.");
}


void MainWindow::on_pushButton_Zatvori_clicked()
{
    QApplication::quit();
}

