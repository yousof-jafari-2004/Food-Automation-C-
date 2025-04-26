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

        // cansel the reservedMeal
        void cancelReservation(Meal newMeal)
        {

        }

        void showAllReserves()
        {
            

            for (int i = 0; i <= 16; i++)
            {
                if(reserves[i].getReservationId() != 0)
                {

                    // get the meal data
                    Meal m;

                    string mealName;

                    for(int j = 0; j <= 2; j++){
                        for(int k = 0;k <= 1; k++)
                        {
                            for(int n = 0;n <= 2; n++)
                            {
                                if(m.getFoods().sunday[j][k][n] == reserves[i].getMealId())
                                {
                                    mealName = m.getFoods().sunday[j][k][1];
                                }
                                if(m.getFoods().saturday[j][k][n] == reserves[i].getMealId())
                                {
                                    mealName = m.getFoods().saturday[j][k][1];
                                }
                                if(m.getFoods().monday[j][k][n] == reserves[i].getMealId())
                                {
                                    mealName = m.getFoods().monday[j][k][1];
                                }
                                if(m.getFoods().Tuesday[j][k][n] == reserves[i].getMealId())
                                {
                                    mealName = m.getFoods().Tuesday[j][k][1];
                                }
                                if(m.getFoods().Wednesday[j][k][n] == reserves[i].getMealId())
                                {
                                    mealName = m.getFoods().Wednesday[j][k][1];
                                }
                                if(m.getFoods().Thursday[j][k][n] == reserves[i].getMealId())
                                {
                                    mealName = m.getFoods().Thursday[j][k][1];
                                }
                            }
                        }
                    }

                    cout << "------------------------------------------------" << endl;
                    cout << "|    id : " << reserves[i].getReservationId() << endl;
                    cout << "|    meal : " << mealName << endl;
                    cout << "|    dining Hall : " << reserves[i].getHall().getName() << endl;
                    cout << "|    Created at : " << reserves[i].getCreatedAt() << endl;
                    cout << "------------------------------------------------" << endl;
                }
            }      
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

