#include "mainwindow_novaigra2.h"
#include "ui_mainwindow_novaigra2.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>

int i = 0;

int zbroj1 = 0;
int zbroj2 = 0;

extern int tocanZbroj;
extern int broj1;
extern int broj2;

QString text = "";

MainWindow_NovaIgra2::MainWindow_NovaIgra2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_NovaIgra2)
{
    ui->setupUi(this);

    for(i = 0; i <=6 ; i++)
    {
        ui->comboBox_i1->addItem(QString::number(i));
    }

    for(i = 0; i <=6 ; i++)
    {
        ui->comboBox_i2->addItem(QString::number(i));
    }
}

MainWindow_NovaIgra2::~MainWindow_NovaIgra2()
{
    delete ui;
}


void MainWindow_NovaIgra2::on_comboBox_i1_currentIndexChanged(int index)
{
    zbroj1 = index;

    ui->comboBox_i2->removeItem(zbroj1);
}


void MainWindow_NovaIgra2::on_comboBox_i2_currentIndexChanged(int index)
{
    zbroj2 = index;
    if(zbroj1 <= zbroj2)
        zbroj2++;
}


void MainWindow_NovaIgra2::on_pushButton1_clicked()
{
    if(zbroj1 == tocanZbroj)
    {
        QMessageBox::about(this, "Rezultat", "Pobjednik je igrac 1!");
        text = "Pobjednik je igrac 1!";
    }
    else if(zbroj2 == tocanZbroj)
    {
        QMessageBox::about(this, "Rezultat", "Pobjednik je igrac 2!");
        text = "Pobjednik je igrac 2!";
    }
    else
    {
        QMessageBox::about(this, "Rezultat", "Nitko nije pogodio tocan zbroj kamencica!");
        text = "Nitko nije pogodio tocan zbroj kamencica!";
    }
}


void MainWindow_NovaIgra2::on_pushButton2_clicked()
{
    QApplication::quit();
}


void MainWindow_NovaIgra2::on_actionSpremi_rezultat_triggered()
{
    QFile file("C:/Bere/OOP-seminarski/rezultat.txt");

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Greska", "Datoteka nije otvorena");
    }
    else
    {
        QTextStream out(&file);
        out << text << ". ";
        out << "Igrac 1: " << broj1 << ". ";
        out << "Igrac 2: " << broj2 << ". ";
        out << "Zbroj je bio " << tocanZbroj << ".";
        file.flush();
        file.close();
    }
}


void MainWindow_NovaIgra2::on_actionPovratak_na_pocetak_triggered()
{
    this->hide();
}

