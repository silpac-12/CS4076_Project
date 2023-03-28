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

    QString type;
    QString name;
    QString calories;
    QString ingredients;

    recipe(){}

    recipe(QString t, QString x, QString y, QString z){
       this->type = t;
       this ->name = x;
       this ->calories = y;
       this ->ingredients =z;
    }

    virtual void addToArray(recipe a){

    }

    ~recipe(){

    }

};



class drink : public recipe{

public:
    drink(QString t, QString x, QString y, QString z){
        QString type = t;
        QString name = x;
        QString calories = y;
        QString ingredients = z;
    }

    virtual void addToArray(recipe &a){

    }

};

class foodDish : public recipe{

public:

    foodDish(QString t, QString x, QString y, QString z){
        QString type = t;
        QString name = x;
        QString calories = y;
        QString ingredients = z;
    }

    virtual void addToArray(recipe &a){

    }
};
#endif // RECIPE_H
