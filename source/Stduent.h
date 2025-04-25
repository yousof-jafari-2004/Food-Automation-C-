#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include "Meal.h"
#include "Reservation.h"

#pragma once

using namespace std;

class Student {
    // variables =================================
    private: 

        Reservation reserves[17];

        int userId;

        string name, email, studentId;

        float balance = 0;

        bool isActive;

    public:
    // CONSTRUCTOR ============================
        Student()
        {
            
        }

    // Methods =============================
        // reserve a new meal
        void reserveMeal(Meal newMeal)
        {

        }

        // cansel the reservedMeal
        void cancelReservation(Meal newMeal)
        {

        }

    // setters  =================================
        void setId(int id)
        {

            userId = id;

        }
        void setStudentId(string id)
        {

            studentId = id;

        }

        void setName(string txt)
        {

            name = txt;

        }

        void setEmail(string txt)
        {

            email = txt;

        }

        void setBalance(float bal)
        {

            balance += bal;
            
        }
        void decreaseBalance(float bal)
        {

            balance -= bal;
            
        }
        void setActive(bool val)
        {

            isActive = val;
        }

        void setReserves(int index, Reservation r)
        {
            reserves[index] = r;
        }
        // GETTERS  =================================
        int getId() const{

            return userId;

        }

        string getStudentId() const {

            return studentId;

        }

        string getName() const {
            
            return name;

        }

        string getEmail() const {

            return email;

        }

        float getBalance() {

            return balance;

        }

        bool getIsActive() const {
            return isActive;
        }

        int getReservationIndex()
        {
            int n;
            for (int i = 0; i <= 16; i++)
            {
                if(reserves[i].getReservationId() != 0)
                {
                    n++;
                }
            }   
            return n;
        }
};

