#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#pragma once

using namespace std;

struct WeekendFoods {
    string saturday[3][2][3], sunday[3][2][3], monday[3][2][3], Tuesday[3][2][3], Wednesday[3][2][3], Thursday[3][2][3]; 
};

class Meal {

    private:
    // variables =================================
        int mealId;

        string name;

        WeekendFoods foodList;

        string AllFoods[6][3][2][3] = {
            { 
                { {"two Boiled egg", "75000", "1" }, {"Honey with butter",  "75000", "2"} },
                { {"Barberry with chicken and yogurt", "150000", "3"}, {"Stambouli with meat, yogurt", "120000", "4"}},
                { {"Salad dressing (prepared), fruit", "150000", "5"}, {"Pasta with meat, sauce, pickles, fruit", "150000", "6"} },
            },
            { 
                { {"Butter, jam, tea, bread", "75000" , "7"}, {"Omelette, tea, bread", "75000", "8"} },
                { {"Chopped kebab, grilled tomato, buttermilk", "150000", "9"}, {"Chelokhorsht with minced meat, potatoes", "120000", "10"} },
                { {"Curd and eggplant dish", "120000", "11"}, {"Lentils, yogurt", "120000", "12"} },
            },
            { 
                { {"Lentil food, tea, bread", "95000", "13"}, {"Omelette, tea, bread", "75000", "14"} },
                { {"Cholukhorsht Ghormeh", "150000", "15"}, {"Meatball with yogurt", "150000", "16"}},
                { {"_Chicken schnitzel, sauce, barley soup", "120000", "17"}, {"Food: Pasta salad (prepared), barley soup", "120000", "18"} },
            },
            { 
                { {"Cheese, eggs, tea,", "75000", "19"}, {"Sugar halva, milk, tea, bread", "75000", "20"} },
                { {"Shuvid pilaf with tuna, pickles, dates", "150000", "21"}, {"Fesanjan chalukhorsht with chicken", "120000", "22"}},
                { {"Fried chicken, sauce", "120000", "23"}, {"Celery stew, pickles", "150000", "24"}},
            },
            { 
                { {"_Cheese, dates, walnuts, tea, bread", "75000", "25"}, {"Butter, jam, tea, bread", "75000", "26"} },
                { {"_Grilled chicken breast, grilled tomato, buttermilk", "120000" }, {"Chelo okra stew, yogurt" , "150000"}},
                { {"Baklaplo with chicken slices, yogurt, fruit", "120000", "27"}, {"Tabrizi meatballs, fruit", "150000", "28"}},
            },

            { 
                { {"_Nimro, tea, bread", "75000", "29"}, {"Halva Shukari, cocoa milk, tea, bread", "75000", "30"} },
                { {" _Chicken breast, butter, yogurt", "150000", "31"}, {"_Lobbiadew with meat, yogurt", "120000", "32"} },
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
                        for(int n = 0;n <= 2; n++)
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
