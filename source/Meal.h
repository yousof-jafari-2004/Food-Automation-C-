#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#pragma once

using namespace std;

struct WeekendFoods {
    string saturday[3][2][2], sunday[3][2][2], monday[3][2][2], Tuesday[3][2][2], Wednesday[3][2][2], Thursday[3][2][2]; 
};

class Meal {

    private:
    // variables =================================
        int mealId;

        string name;

        WeekendFoods foodList;

        string AllFoods[6][3][2][2] = {
            { 
                { {"two Boiled egg", "75000" }, {"Honey with butter",  "75000"} },
                { {"Barberry with chicken and yogurt", "150000"}, {"Stambouli with meat, yogurt", "120000"}},
                { {"Salad dressing (prepared), fruit", "150000"}, {"Pasta with meat, sauce, pickles, fruit", "150000"} },
            },
            { 
                { {"Butter, jam, tea, bread", "75000"}, {"Omelette, tea, bread", "75000"} },
                { {"Chopped kebab, grilled tomato, buttermilk", "150000"}, {"Chelokhorsht with minced meat, potatoes", "120000"} },
                { {"Curd and eggplant dish", "120000"}, {"Lentils, yogurt", "120000"} },
            },
            { 
                { {"Lentil food, tea, bread", "95000"}, {"Omelette, tea, bread", "75000"} },
                { {"Cholukhorsht Ghormeh", "150000"}, {"Meatball with yogurt", "150000" }},
                { {"_Chicken schnitzel, sauce, barley soup", "120000"}, {"Food: Pasta salad (prepared), barley soup", "120000"} },
            },
            { 
                { {"Cheese, eggs, tea,", "75000"}, {"Sugar halva, milk, tea, bread", "75000"} },
                { {"Shuvid pilaf with tuna, pickles, dates", "150000"}, {"Fesanjan chalukhorsht with chicken", "120000"}},
                { {"Fried chicken, sauce", "120000"}, {"Celery stew, pickles", "150000"}},
            },
            { 
                { {"_Cheese, dates, walnuts, tea, bread", "75000"}, {"Butter, jam, tea, bread", "75000"} },
                { {"_Grilled chicken breast, grilled tomato, buttermilk", "120000" }, {"Chelo okra stew, yogurt" , "150000"}},
                { {"Baklaplo with chicken slices, yogurt, fruit", "120000"}, {"Tabrizi meatballs, fruit", "150000" }},
            },

            { 
                { {"_Nimro, tea, bread", "75000"}, {"Halva Shukari, cocoa milk, tea, bread", "75000"} },
                { {" _Chicken breast, butter, yogurt", "150000"}, {"_Lobbiadew with meat, yogurt", "120000"} },
                { "", "" },
            },
        };

        float price;

        

    public:
        // Constructor ======================
        Meal(){
            // cout << AllFoods[5][1][1];
            // set foods
            for(int i = 0; i <= 5; i++)
            {
                for(int j = 0; j <= 2; j++)
                {
                    for(int k = 0;k <= 1; k++)
                    {
                        for(int n = 0;n <= 1; n++)
                        {
                            switch (i)
                            {
                            case 0:
                                foodList.saturday[j][k][n] = AllFoods[i][j][k][n];
                                break;
                            case 1:
                                foodList.sunday[j][k][n] = AllFoods[i][j][k][n];
                                break;
                            case 2:
                                foodList.monday[j][k][n] = AllFoods[i][j][k][n];
                                break;
                            case 3:
                                foodList.Tuesday[j][k][n] = AllFoods[i][j][k][n];
                                break;
                            case 4:
                                foodList.Wednesday[j][k][n] = AllFoods[i][j][k][n];
                                break;
                            case 5:
                                foodList.Thursday[j][k][n] = AllFoods[i][j][k][n];
                                break;
                            }
                        }
                    }
                }
            }
        }
        WeekendFoods getFoods()
        {
            return foodList;
        }

};
