#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{
    ui->setupUi(this);

    //Add recepie lables
    ui ->label -> setVisible(false);
    ui ->label_2 -> setVisible(false);
    ui ->label_3 -> setVisible(false);

    //Add recepie textEdits
    ui ->textEdit -> setVisible(false);
    ui ->textEdit_2 -> setVisible(false);
    ui ->textEdit_3 -> setVisible(false);

    ui -> pushButton_4 -> setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked(){}

void MainWindow::on_AddRecepie_clicked()
{
    //Add recepie lables
    ui ->label -> setVisible(true);
    ui ->label_2 -> setVisible(true);
    ui ->label_3 -> setVisible(true);

    //Add recepie textEdits
    ui ->textEdit -> setVisible(true);
    ui ->textEdit_2 -> setVisible(true);
    ui ->textEdit_3 -> setVisible(true);

    ui -> pushButton_4 -> setVisible(true);
}

