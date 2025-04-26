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
        int reservationId = 0;

        int studentId;

        DiningHall dHallId;

        string mealId;

        enum status {
            reserved,
            canceled,
        };

        time_t created_at;

    public:
    // Constructor ============================
        // Reservation()
        // {

        // }

    // Functions ==========================


    // Setters ===========================
    
        void setCreatedAt(time_t t)
        {  
            created_at = t;
        }

        void setReservationId(int id)
        {

            reservationId = id;

        }
        
        void setStudentId(int id)
        {

            studentId = id;

        }

        void setDHall(DiningHall dHall)
        {

            dHallId = dHall;

        }

        void setMealId(string m) {
            mealId = m;
        }





    // Getters ===========================
    int getReservationId()
    {
        return reservationId;      
    }

    string getMealId()
    {
        return mealId;
    }

    DiningHall getHall()
    {
        return dHallId;
    }

    time_t getCreatedAt()
    {
        return created_at;
    }
};

