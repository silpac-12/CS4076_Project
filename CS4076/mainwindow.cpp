#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "recipe.h"
#include <iostream>
using namespace std;

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

    //Confirm recipe button
    ui -> pushButton_4 -> setVisible(false);

    //ListView hidden
    ui -> listView -> setVisible(false);

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

    //ListView hidden
    ui -> listView -> setVisible(false);

}

void MainWindow::on_pushButton_4_clicked()
{
    QString name;
    QString calories;
    QString description;

    name = ui -> textEdit -> toPlainText();
    calories = ui -> textEdit -> toPlainText();
    description = ui -> textEdit -> toPlainText();

    recipe * a;
    a = new recipe();
    a->make(name, calories, description);
}

void MainWindow::on_ShowRecepie_clicked()
{

    ui -> listView -> setVisible(true);

    //Hide Add recipe widgets

    //Add recepie lables
    ui ->label -> setVisible(false);
    ui ->label_2 -> setVisible(false);
    ui ->label_3 -> setVisible(false);

    //Add recepie textEdits
    ui ->textEdit -> setVisible(false);
    ui ->textEdit_2 -> setVisible(false);
    ui ->textEdit_3 -> setVisible(false);

    //Confirm recipe button
    ui -> pushButton_4 -> setVisible(false);



}

