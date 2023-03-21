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
    QString description;

    recipe(){


    }

    void make(QString x, QString y, QString z){

        this->name = x;
        this->calories = y;
        this->description = z;

    };
};

#endif // RECIPE_H
