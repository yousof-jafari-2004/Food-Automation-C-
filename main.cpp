#include <iostream>

// including classes from source
#include "./source/Stduent.h"
#include "./source/Ui.h"
#include "./source/Meal.h"
#include "./source/Reservation.h"
// #include "./source/DiningHall.h"

// RUN ALL CLASSES 
Student student;
Meal meal;
Reservation reservation;
// DiningHall diningHall;

using namespace std;

int main()
{
    UIDesign ui;

    // run the program
    ui.runUI();

    return 0;   
}