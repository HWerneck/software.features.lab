#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QMenuBar>

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
    QMessageBox msgBox;
    msgBox.setText("It's here! BLACK");
    msgBox.exec();
    menuBar()->setStyleSheet("background-color: rgb(250,0,0); color: rgb(0,250,0);");
}

void MainWindow::on_actionBlack_Piano_triggered()
{

}

void MainWindow::on_actionPokedex_Orange_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("It's here! ORANGE");
    msgBox.exec();

    ui->menuBar->setStyleSheet("background-color: rgb(250,120,15); color: rgb(10,10,10);");
}

void MainWindow::on_actionPokedex_Red_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("It's here! RED");
    msgBox.exec();

    menuBar()->setStyleSheet("background-color: rgb(255,0,0); color: rgb(10,10,10);");
}

void MainWindow::on_actionCustom_triggered()
{

}
