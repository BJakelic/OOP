#ifndef MAINWINDOW_NOVAIGRA2_H
#define MAINWINDOW_NOVAIGRA2_H

#include <QMainWindow>

namespace Ui {
class MainWindow_NovaIgra2;
}

class MainWindow_NovaIgra2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_NovaIgra2(QWidget *parent = nullptr);
    ~MainWindow_NovaIgra2();

private slots:
    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_comboBox_i1_currentIndexChanged(int index);

    void on_comboBox_i2_currentIndexChanged(int index);

    void on_actionSpremi_rezultat_triggered();

    void on_actionPovratak_na_pocetak_triggered();

private:
    Ui::MainWindow_NovaIgra2 *ui;
};

#endif // MAINWINDOW_NOVAIGRA2_H
