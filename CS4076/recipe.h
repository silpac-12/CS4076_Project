#ifndef RECIPE_H
#define RECIPE_H
#include <string>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <vector>
#include <iostream>
#define vectorSpace 50
using namespace std;



class recipe
{
public:

    QString type;
    QString name;
    QString calories;
    QString ingredients;
    bool vegan;

    recipe(){

    }

    recipe(QString t, QString x, QString y, QString z, bool b){
       this->type = t;
       this ->name = x;
       this ->calories = y;
       this ->ingredients =z;
       this->vegan = b;
    }

    virtual void addToArray(recipe &a){
        recipeList.push_back(a.type + ", " + a.name + ", " + a.calories + ", " + a.ingredients);
    }

    ~recipe(){

    }

    friend class MainWindow;

private:
    vector <QString> recipeList;
};



class drink : public recipe{

public:
    drink(QString t, QString x, QString y, QString z, bool b){
        QString type = t;
        QString name = x;
        QString calories = y;
        QString ingredients = z;
        bool vegan = b;
    }

    virtual void addToArray(recipe a){
        drinkList.push_back(a.type + ", " + a.name + ", " + a.calories + ", " + a.ingredients);
    }

    ~drink(){

    }

private:
    vector <QString> drinkList;
};

class foodDish : public recipe{

public:

    foodDish(QString t, QString x, QString y, QString z, bool b){
        QString type = t;
        QString name = x;
        QString calories = y;
        QString ingredients = z;
        bool vegan = b;
    }

    virtual void addToArray(recipe a){
        foodList.push_back(a.type + ", " + a.name + ", " + a.calories + ", " + a.ingredients);
    }

    ~foodDish(){

    }

private:
    vector <QString> foodList;
};
#endif // RECIPE_H
