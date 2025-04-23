#include <iostream>

// including classes from source
#include "./source/Stduent.h"
#include "./source/Ui.h"
#include "./source/Meal.h"
#include "./source/Reservation.h"
#include "./source/DiningHall.h"

using namespace std;

int main()
{
    UIDesign ui;

    ui.runUI();

    return 0;   
}
