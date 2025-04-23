#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

class Student {
    // variables =================================
    private: 

        int userId, studentId;

        string name, email;

        float balance;

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
        void setStudentId(int id)
        {

            studentId = id;

        }

        void setName(string txt)
        {

            name = txt;

        }

        void setEmail(string txt)
        {

            name = txt;

        }

        void setBalance(float bal)
        {

            balance = bal;
            
        }
        void setActive(bool val)
        {

            isActive = val;

        }
    // getters  =================================
        int getId() const{

            return userId;

        }

        int getStudentId() const {

            return studentId;

        }

        string getName() const {
            
            return name;

        }

        string getEmail() const {

            return email;

        }

        float getBalance() const {

            return balance;

        }

        bool getIsActive() const {
            return isActive;
        }
};

