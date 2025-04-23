#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#pragma once

using namespace std;

class Meal {

    private:
    // variables =================================
        int mealId;

        string name;

        float price;

        enum mealType {};

        vector<string> sideItem;
};
