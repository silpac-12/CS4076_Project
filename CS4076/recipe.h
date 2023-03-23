#ifndef RECIPE_H
#define RECIPE_H
#include <string>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
using namespace std;

class recipe
{
public:

    QString name;
    QString calories;
    QString ingredients;

    recipe(){}

    recipe(QString x, QString y, QString z){
        this ->name = x;
        this ->calories = y;
        this ->ingredients =z;
    }

    void addToArray(recipe &a){

    }

};

class drink : public recipe{



};

class foodDish : public recipe{

public:

    foodDish(QString x, QString y, QString z){
        QString name = x;
        QString calories = y;
        QString ingredients = z;
    }
};
#endif // RECIPE_H
