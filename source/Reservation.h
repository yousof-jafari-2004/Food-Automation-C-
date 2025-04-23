#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include "DiningHall.h"
#pragma once

using namespace std;

class Reservation {
    private:
    // variables =================================
        int reservationId;

        Student student;

        DiningHall dHall;

        Meal meal;

        enum status {};

        time_t createed_at;

    public:
    // Constructor ============================
        Reservation()
        {

        };

    // Functions ==========================


    // Setters ===========================
    
        void setReservationId(int id)
        {

            reservationId = id;

        }
        
        void setStudent(Student stu)
        {

            student = stu;

        }

        void setDHall(DiningHall dh)
        {

            dHall = dh;

        }

        void setMeal(Meal m) {
            meal = m;
        }




    // Getters ===========================
};

