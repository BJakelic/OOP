#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "mainwindow_novaigra.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_NovaIgra_clicked();

    void on_pushButton_Pravila_clicked();

    void on_pushButton_Zatvori_clicked();

private:
    Ui::MainWindow *ui;

    MainWindow_NovaIgra* NovaIgra;
};
#endif // MAINWINDOW_H
