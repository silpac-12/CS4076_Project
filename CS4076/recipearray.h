#ifndef RECIPEARRAY_H
#define RECIPEARRAY_H
#define arraySize 50
#include <string>
#include <vector>
#include "recipe.h"
using namespace std;


class recipeArray
{
public:

    vector<QString> recipeList;
    recipe *a;

    recipeArray(){
       vector<string> recipeList;
    };

    void addRecipe(QString x, QString y, QString z, QString v){


        recipeList.push_back(a->type + ", " + a->name + ", " + a->calories + ", "+ a->ingredients);

    }

    QString getRecipe(int i){
        return recipeList[i];
    }

};

#endif // RECIPEARRAY_H
