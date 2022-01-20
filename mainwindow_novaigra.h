#ifndef MAINWINDOW_NOVAIGRA_H
#define MAINWINDOW_NOVAIGRA_H

#include <QMainWindow>

#include "mainwindow_novaigra2.h"

namespace Ui {
class MainWindow_NovaIgra;
}

class MainWindow_NovaIgra : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_NovaIgra(QWidget *parent = nullptr);
    ~MainWindow_NovaIgra();

private slots:
    void on_pushButton_ZavrsiPotez_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

private:
    Ui::MainWindow_NovaIgra *ui;

    MainWindow_NovaIgra2* NovaIgra2;
};

#endif // MAINWINDOW_NOVAIGRA_H
