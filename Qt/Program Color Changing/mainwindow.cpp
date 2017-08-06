#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionBlack_triggered()
{
    //centralWidget()->styleSheet().background-color: rgb(78,78,78)
    //centralWidget()->setStyleSheet(notr = background-color: rgb(78, 78, 78));
    //centralWidget()->setProperty("styleSheet", notr = "background-color: rgb(78,78,78);")
    //centralWidget()->setProperty("styleSheet", std::string = "background-color: rgb(78, 78, 78);");
    //centralWidget()->setStyleSheet("{background-color: rgb(78,78,78);}");
    QMessageBox msgBox;
    msgBox.setText("It's here! BLACK");
    msgBox.exec();
    menuBar()->setStyleSheet("background-color: rgb(250,0,0); color: rgb (0,250,0);");
    menuBar()->setVisible(false);
    menuBar()->setVisible(true);
}

void MainWindow::on_actionBlack_Piano_triggered()
{
    //centralWidget()->styleSheet()
}

void MainWindow::on_actionPok_dex_Orange_triggered()
{
    //centralWidget()->styleSheet()
    //centralWidget()->setStyleSheet("background-color: rgb(250, 120, 15);");
    QMessageBox msgBox;
    msgBox.setText("It's here! ORANGE");
    msgBox.exec();
    menuBar()->setStyleSheet("background-color: rgb(250,120,15); color: rgb (10,10,10);");
    menuBar()->setVisible(false);
    menuBar()->setVisible(true);
}

void MainWindow::on_actionPok_dex_Red_triggered()
{
    //centralWidget()->styleSheet()
    //centralWidget()->setStyleSheet("background-color: rgb(255, 0, 0);");
    QMessageBox msgBox;
    msgBox.setText("It's here! RED");
    msgBox.exec();
    menuBar()->setStyleSheet("background-color: rgb(255,0,0); color: rgb (10,10,10);");
    menuBar()->setVisible(false);
    menuBar()->setVisible(true);
}

void MainWindow::on_actionCustom_triggered()
{
    //centralWidget()->styleSheet()
}
