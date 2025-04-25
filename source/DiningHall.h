#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

#pragma once

using namespace std;

class DiningHall {
    private:
        int hallId;
        string name, address;
        int capacity;

    public:
    // CONSTRUCTOR ====================================
        DiningHall()
        {   

        }

    // SETTERS ========================================
        void setHallId(int id){
            hallId = id;
        }   

        void setName(string n)
        {
            name = n;
        }

        void setAddress(string a)
        {
            address = a;
        }

        void setCapacity(int n)
        {
            capacity = n;
        }


    // GETTERS ========================================
        string getName(){
            return name;
        }
        string getAddress(){
            return address;
        }
        int getCapacity(){
            return capacity;
        }

};