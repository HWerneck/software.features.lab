#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionBlack_triggered();

    void on_actionBlack_Piano_triggered();

    void on_actionPok_dex_Orange_triggered();

    void on_actionPok_dex_Red_triggered();

    void on_actionCustom_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
