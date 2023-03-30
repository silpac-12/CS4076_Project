#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "recipe.h"
#include <iostream>

bool vegan = true;
using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    //Hidden Widgets
    //Add recipe lables
    ui ->label -> setVisible(false);
    ui ->label_2 -> setVisible(false);
    ui ->label_3 -> setVisible(false);
    ui ->label_4 -> setVisible(false);

    //Add recipe textEdits
    ui ->textEdit -> setVisible(false);
    ui ->textEdit_2 -> setVisible(false);
    ui ->textEdit_3 -> setVisible(false);
    ui ->textEdit_4 -> setVisible(false);

    //Confirm recipe button
    ui -> pushButton_4 -> setVisible(false);

    //List Widget
    ui -> listWidget -> setVisible(false);

    //Edit recipe widget
    ui -> EditRecepie -> setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked(){}
void MainWindow::on_AddRecepie_clicked()
{
    //Hide widgets
    ui -> EditRecepie -> setVisible(false);
    ui -> listWidget -> setVisible(false);

    //Add recepie lables
    ui ->label -> setVisible(true);
    ui ->label_2 -> setVisible(true);
    ui ->label_3 -> setVisible(true);
    ui ->label_4 -> setVisible(true);

    //Add recepie textEdits
    ui ->textEdit -> setVisible(true);
    ui ->textEdit_2 -> setVisible(true);
    ui ->textEdit_3 -> setVisible(true);
    ui ->textEdit_4 -> setVisible(true);

    ui -> pushButton_4 -> setVisible(true);
}

void MainWindow::on_pushButton_4_clicked()
{

    QString name;
    QString calories;
    QString ingredients;
    QString type;
    bool vegan = false;

    name = ui -> textEdit -> toPlainText();
    calories = ui -> textEdit_2 -> toPlainText();
    ingredients = ui -> textEdit_3 -> toPlainText();
    type = ui -> textEdit_4 -> toPlainText();


    ui -> textEdit ->clear();
    ui -> textEdit_2 ->clear();
    ui -> textEdit_3 ->clear();
    ui -> textEdit_4 ->clear();

    recipe * a = new recipe(type, name, calories, ingredients, vegan);

    if((type == "drink" || type == "Drink") && vegan == true){
        drink * d = new drink(type, name, calories, ingredients, vegan);
        ui -> listWidget -> addItem("Drink , " + a->name + ", " + a->calories + ", " + a->ingredients + ", Vegan");
        d->addToArray(*a);
        *d;
    }else if((type == "drink" || type == "Drink") && vegan == false){
        drink * d = new drink(type, name, calories, ingredients, vegan);
        ui -> listWidget -> addItem("Drink , " + a->name + ", " + a->calories + ", " + a->ingredients);
        d->addToArray(*a);
        *d;
    }
    if((type == "food" || type == "Food") && vegan == true){
        foodDish * f = new foodDish(type, name, calories, ingredients, vegan);
        ui -> listWidget -> addItem("Food , " + a->name + ", " + a->calories + ", " + a->ingredients + ", Vegan");
        f->addToArray(*a);
        *f;
    }else if((type == "food" || type == "Food") && vegan == false){
        foodDish * f = new foodDish(type, name, calories, ingredients, vegan);
        ui -> listWidget -> addItem("Food , " + a->name + ", " + a->calories + ", " + a->ingredients);
        f->addToArray(*a);
        *f;
    }
    else{
        cout << "Invalid Input";
    }
}

void MainWindow::on_ShowRecepie_clicked()
{
    ui -> listWidget -> setVisible(true);
     ui -> EditRecepie -> setVisible(true);

    //Hide Add recipe widgets

    //Add recepie lables
    ui ->label -> setVisible(false);
    ui ->label_2 -> setVisible(false);
    ui ->label_3 -> setVisible(false);
    ui ->label_4 -> setVisible(false);

    //Add recepie textEdits
    ui ->textEdit -> setVisible(false);
    ui ->textEdit_2 -> setVisible(false);
    ui ->textEdit_3 -> setVisible(false);
    ui ->textEdit_4 -> setVisible(false);

    //Confirm recipe button
    ui -> pushButton_4 -> setVisible(false);
}

void MainWindow::on_EditRecepie_clicked()
{
    QListWidgetItem * itm = ui -> listWidget -> currentItem();
    itm ->setText("");
}


