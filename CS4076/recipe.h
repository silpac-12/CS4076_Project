#ifndef RECIPE_H
#define RECIPE_H
#include <string>
using namespace std;

class recipe
{
public:

    string name;
    int calories;

    recipe(string x, int y){

        name = x;
        calories = y;

    };
};

int main(){

    recipe r1("Salad", 200);

    return 0;
}
#endif // RECIPE_H
