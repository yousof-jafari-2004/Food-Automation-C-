#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <windows.h>
#include "DiningHall.h"
#include "Reservation.h"
#include <ctime>
#pragma once

using namespace std;

class UIDesign{
    public:
        string command = "0";

        Student loginedUser;

        Meal food;

        string name, email, id;

        // move cursor to custom point
        void moveInput(int x, int y){
            COORD coord;
            coord.X = x;
            coord.Y = y;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }

        // check if the user email is correct or not
        bool checkForGmail(const string& email) {
            const string suffix = "@gmail.com";
            size_t pos = email.find(suffix);
            return (pos != string::npos) && (pos + suffix.length() == email.length());
        }

        // run the App
        void runUI()
        {
            if(command == "0"){
                showMainMenu();
            }else if(command == "1"){
                showLoginPage();
            }else if(command == "2"){
                showFoodProgram();
            }else if(command == "3"){
                if(name == "" || email == "" || id == "")
                {
                    show404();
                }else {
                    login(name, email, id);
                }
            }else if(command == "5"){
                command = "0";
                reserveMeal("0");
            }
            else if(command == "6"){
                chargeMeal();
            }else if(command == "7"){
                showReservations();
            }    
            else{
                show404();
            }
            cin >> command;
            runUI();
        }

        void showMainMenu()
        {
            system("CLS");
            cout << "------------------------------------------------" << endl;
            cout << "|                                              |" << endl;
            cout << "|          WELCOME TO MY AUTOMASION            |" << endl;
            cout << "|                                              |" << endl;
            cout << "|                                              |" << endl;
            cout << "|             CLICK '1' TO SIGN IN             |" << endl;
            cout << "|                                              |" << endl;
            cout << "|   CLICK '2' TO SEE FOOD LIST IN THIS WEEK    |" << endl;
            cout << "|                                              |" << endl;
            cout << "|                                              |" << endl;
            cout << "|                                              |" << endl;
            cout << "------------------------------------------------" << endl;
        }

        void showLoginPage()
        {
            system("CLS");
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                 |" << endl;
            cout << "|             WELCOME TO MY AUTOMASION            |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|   * name   |                        |           |" << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|     email  |                        |           |" << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|     id     |                        |           |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                CLICK '3' TO LOGIN               |" << endl;
            cout << "|                CLICK '4' TO BACK                |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "---------------------------------------------------" << endl;
            moveInput(14, 5);
            cin >> name;

            system("CLS");
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                 |" << endl;
            cout << "|             WELCOME TO MY AUTOMASION            |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|     name   | " << name << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|   * email  |                        |           |" << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|     id     |                        |           |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                CLICK '3' TO LOGIN               |" << endl;
            cout << "|                CLICK '4' TO BACK                |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "---------------------------------------------------" << endl;
            
            // get email and validate it
            moveInput(14, 7);
            cin >> email;
            if(!checkForGmail(email)){
                system("CLS");
                cout << "---------------------------------------------------" << endl;
                cout << "|                                                 |" << endl;
                cout << "|             WELCOME TO MY AUTOMASION            |" << endl;
                cout << "|                                                 |" << endl;
                cout << "|             ________________________            |" << endl;
                cout << "|     name   | " << name << endl;
                cout << "|             ________________________            |" << endl;
                cout << "|   * email  |                        |           |" << endl;
                cout << "|             ________________________            |" << endl;
                cout << "|     id     |                        |           |" << endl;
                cout << "|                                                 |" << endl;
                cout << "|                                                 |" << endl;
                cout << "|                CLICK '3' TO LOGIN               |" << endl;
                cout << "|                CLICK '4' TO BACK                |" << endl;
                cout << "|                                                 |" << endl;
                cout << "|                                                 |" << endl;
                cout << "---------------------------------------------------" << endl;
                cout << "!!!   this email is not valid                     |"<< endl;
                cout << "---------------------------------------------------" << endl;
            
                moveInput(14, 7);
                cin >> email;
                if(!checkForGmail(email)){
                    system("CLS");
                    cout << "---------------------------------------------------" << endl;
                    cout << "|                                                 |" << endl;
                    cout << "|             WELCOME TO MY AUTOMASION            |" << endl;
                    cout << "|                                                 |" << endl;
                    cout << "|             ________________________            |" << endl;
                    cout << "|     name   | " << name << endl;
                    cout << "|             ________________________            |" << endl;
                    cout << "|   * email  |                        |           |" << endl;
                    cout << "|             ________________________            |" << endl;
                    cout << "|     id     |                        |           |" << endl;
                    cout << "|                                                 |" << endl;
                    cout << "|                                                 |" << endl;
                    cout << "|                CLICK '3' TO LOGIN               |" << endl;
                    cout << "|                CLICK '4' TO BACK                |" << endl;
                    cout << "|                                                 |" << endl;
                    cout << "|                                                 |" << endl;
                    cout << "---------------------------------------------------" << endl;
                    cout << "!!!   this email is not valid                     |"<< endl;
                    cout << "---------------------------------------------------" << endl;
                    moveInput(14, 7);
                    cin >> email;
                    if(!checkForGmail(email)){
                        system("CLS");
                        cout << "---------------------------------------------------" << endl;
                        cout << "|                                                 |" << endl;
                        cout << "|             WELCOME TO MY AUTOMASION            |" << endl;
                        cout << "|                                                 |" << endl;
                        cout << "|             ________________________            |" << endl;
                        cout << "|     name   | " << name << endl;
                        cout << "|             ________________________            |" << endl;
                        cout << "|   * email  |                        |           |" << endl;
                        cout << "|             ________________________            |" << endl;
                        cout << "|     id     |                        |           |" << endl;
                        cout << "|                                                 |" << endl;
                        cout << "|                                                 |" << endl;
                        cout << "|                CLICK '3' TO LOGIN               |" << endl;
                        cout << "|                CLICK '4' TO BACK                |" << endl;
                        cout << "|                                                 |" << endl;
                        cout << "|                                                 |" << endl;
                        cout << "---------------------------------------------------" << endl;
                        cout << "!!!   this email is not valid                     |" << endl;
                        cout << "---------------------------------------------------" << endl;
                        moveInput(14, 7);
                        cin >> email;
                    }
                }
            }

            system("CLS");
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                 |" << endl;
            cout << "|             WELCOME TO MY AUTOMASION            |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|     name   | " << name << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|     email  | " << email << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|   * id     |                        |           |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                CLICK '3' TO LOGIN               |" << endl;
            cout << "|                CLICK '4' TO BACK                |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "---------------------------------------------------" << endl;

            moveInput(14, 9);
            cin >> id;

            system("CLS");
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                 |" << endl;
            cout << "|             WELCOME TO MY AUTOMASION            |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|     name   | " << name << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|     email  | " << email << endl;
            cout << "|             ________________________            |" << endl;
            cout << "|     id     | " << id << endl;
            cout << "|                                                 |" << endl;
            cout << "|             _________________________           |" << endl;
            cout << "|             | *  CLICK '3' TO LOGIN |           |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                CLICK '0' TO BACK                |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "---------------------------------------------------" << endl;
         
            command == "";
            cin >> command;

            runUI();
        }

        void show404()
        {
            system("CLS");
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                 |" << endl;
            cout << "|       |||   |||    |||||||||    |||   |||       |" << endl;
            cout << "|       |||   |||    |||   |||    |||   |||       |" << endl;
            cout << "|       |||||||||    |||   |||    |||||||||       |" << endl;
            cout << "|             |||    |||   |||          |||       |" << endl;
            cout << "|             |||    |||   |||          |||       |" << endl;
            cout << "|             |||    |||||||||          |||       |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                   PAGE NOT FOUND                |" << endl;
            cout << "|                                                 |" << endl;
            cout << "---------------------------------------------------" << endl;
        }

        void Dashboard(string message = ""){
            system("CLS");
            cout << "---------------------------------------------------" << endl;
            cout << "| " << loginedUser.getName() << " | " << loginedUser.getStudentId() << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "| " << "your balance --> " << fixed << setprecision(0) << loginedUser.getBalance() << " Toman" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                To See Food List (2)             |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                To Reserve Meal (5)              |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|             To charge your balance (6)          |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|               To See Reservations (7)           |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "---------------------------------------------------" << endl;

            if(message != "")
            {
                cout << "---------------------------------------------------" << endl;
                cout << "| " << message << endl;
                cout << "---------------------------------------------------" << endl;
            }

            cin >> command;
            runUI();
        }

        void showFoodProgram()
        {
            system("CLS");
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                  |" << endl;
            cout << "|   (SATURDAY)                                     |" << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Break Fast :                            |" << endl;
            cout << "|    |   (1) : " << food.getFoods().saturday[0][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().saturday[0][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Lunch :                                 |" << endl;
            cout << "|    |   (1) : " << food.getFoods().saturday[1][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().saturday[1][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Dinner :                                |" << endl;
            cout << "|    |   (1) : " << food.getFoods().saturday[2][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().saturday[2][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                  |" << endl;
            cout << "|   (Sunday)                                     |" << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Break Fast :                            |" << endl;
            cout << "|    |   (1) : " << food.getFoods().sunday[0][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().sunday[0][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Lunch :                                 |" << endl;
            cout << "|    |   (1) : " << food.getFoods().sunday[1][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().sunday[1][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Dinner :                                |" << endl;
            cout << "|    |   (1) : " << food.getFoods().sunday[2][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().sunday[2][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                  |" << endl;
            cout << "|   (Monday)                                     |" << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Break Fast :                            |" << endl;
            cout << "|    |   (1) : " << food.getFoods().monday[0][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().monday[0][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Lunch :                                 |" << endl;
            cout << "|    |   (1) : " << food.getFoods().monday[1][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().monday[1][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Dinner :                                |" << endl;
            cout << "|    |   (1) : " << food.getFoods().monday[2][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().monday[2][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                  |" << endl;
            cout << "|   (Tuesday)                                     |" << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Break Fast :                            |" << endl;
            cout << "|    |   (1) : " << food.getFoods().Tuesday[0][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().Tuesday[0][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Lunch :                                 |" << endl;
            cout << "|    |   (1) : " << food.getFoods().Tuesday[1][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().Tuesday[1][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Dinner :                                |" << endl;
            cout << "|    |   (1) : " << food.getFoods().Tuesday[2][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().Tuesday[2][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                  |" << endl;
            cout << "|   (Wednesday)                                     |" << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Break Fast :                            |" << endl;
            cout << "|    |   (1) : " << food.getFoods().Wednesday[0][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().Wednesday[0][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Lunch :                                 |" << endl;
            cout << "|    |   (1) : " << food.getFoods().Wednesday[1][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().Wednesday[1][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Dinner :                                |" << endl;
            cout << "|    |   (1) : " << food.getFoods().Wednesday[2][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().Wednesday[2][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                  |" << endl;
            cout << "|   (Thursday)                                     |" << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Break Fast :                            |" << endl;
            cout << "|    |   (1) : " << food.getFoods().Thursday[0][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().Thursday[0][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Lunch :                                 |" << endl;
            cout << "|    |   (1) : " << food.getFoods().Thursday[1][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().Thursday[1][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "|    |---- Dinner :                                |" << endl;
            cout << "|    |   (1) : " << food.getFoods().Thursday[2][0][0] << endl;
            cout << "|    |   (2) : " << food.getFoods().Thursday[2][1][0] << endl;
            cout << "|    |                                             |" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "| " << loginedUser.getName() << " | " << loginedUser.getStudentId() << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "| " << "your balance --> " << loginedUser.getBalance() << " Toman" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                To See Food List (2)             |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                To Reserve Meal (5)              |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|             To charge your balance (6)          |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "---------------------------------------------------" << endl;
        }

        // charge the user balance
        void chargeMeal(){
            system("CLS");
            cout << "___________________________________________________" << endl;
            cout << "|            |            |            |           |" << endl;
            cout << "|  200,000   |   500,000  |  700,000   | 1,000,000 |" << endl;
            cout << "|            |            |            |           |" << endl;
            cout << "| click(0)   |  click(1)  |  click(2)  | click(3)  |" << endl;
            cout << "|____________|____________|____________|___________|" << endl;
            cout << "|            |                                     |" << endl;
            cout << "| 1,500,000  |         To back click (5)           |" << endl;
            cout << "|            |                                     |" << endl;
            cout << "|  click(4)  |                                     |" << endl;
            cout << "|            |                                     |" << endl;
            cout << "---------------------------------------------------" << endl;
            cin >> command;
            if(command == "0")
            {
                loginedUser.setBalance(200000);
            }else if(command == "1")
            {
                loginedUser.setBalance(500000);
            }
            else if(command == "2")
            {
                loginedUser.setBalance(700000);
            }
            else if(command == "3")
            {
                loginedUser.setBalance(1000000);
            }
            else if(command == "4")
            {
                loginedUser.setBalance(1500000);
            }else if(command == "5")
            {
                Dashboard();
            }
            Dashboard();
        }

        void reserveMeal(string selectedD)
        {
            string selectedDay = selectedD;
            if(command == "0")
            {
                system("CLS");
                cout << "||||||||||||________________________________" << endl;
                cout << "||||||||||||          |          |          |" << endl;
                cout << "|*Saturday |  Sunday  |  monday  |  Tuesday |" << endl;
                cout << "| click(0) | click(1) | click(2) | click(3) |" << endl;
                cout << "||||||||||||__________|__________|__________|" << endl;
                cout << "||||||||||||________________________________" << endl;
                cout << "|          |          |                     |" << endl;
                cout << "| Wednesday| Thursday |                     |" << endl;
                cout << "| click(4) | click(5) |                     |" << endl;
                cout << "|__________|__________|_____________________|" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "| Breakfast  |     Lunch       |   Dinner   |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "|  click(6)  |    click(7)     |  click(8)  |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "--------------------------------------------" << endl;
                cout << "|      TO BACK CLICK (9)                    |" << endl;
                cout << "--------------------------------------------" << endl;
            }else if(command == "1")
            {
                system("CLS");
                cout << "___________||||||||||||______________________" << endl;
                cout << "|          ||||||||||||          |          |" << endl;
                cout << "| Saturday | *Sunday  |  monday  |  Tuesday |" << endl;
                cout << "| click(0) | click(1) | click(2) | click(3) |" << endl;
                cout << "|          ||||||||||||__________|__________|" << endl;
                cout << "|__________||||||||||||_____________________" << endl;
                cout << "|          |          |                     |" << endl;
                cout << "| Wednesday| Thursday |                     |" << endl;
                cout << "| click(4) | click(5) |                     |" << endl;
                cout << "|__________|__________|_____________________|" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "| Breakfast  |     Lunch       |   Dinner   |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "|  click(6)  |    click(7)     |  click(8)  |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "--------------------------------------------" << endl;
                cout << "|      TO BACK CLICK (9)                    |" << endl;
                cout << "--------------------------------------------" << endl;
            }else if(command == "2")
            {
                system("CLS");
                cout << "___________|__________||||||||||||__________" << endl;
                cout << "|          |          ||||||||||||          |" << endl;
                cout << "| Saturday |  Sunday  | *monday  |  Tuesday |" << endl;
                cout << "| click(0) | click(1) | click(2) | click(3) |" << endl;
                cout << "|          |          ||||||||||||__________|" << endl;
                cout << "|__________|__________||||||||||||__________" << endl;
                cout << "|          |          |                     |" << endl;
                cout << "| Wednesday| Thursday |                     |" << endl;
                cout << "| click(4) | click(5) |                     |" << endl;
                cout << "|__________|__________|_____________________|" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "| Breakfast  |     Lunch       |   Dinner   |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "|  click(6)  |    click(7)     |  click(8)  |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "--------------------------------------------" << endl;
                cout << "|      TO BACK CLICK (9)                    |" << endl;
                cout << "--------------------------------------------" << endl;
            }else if(command == "3")
            {
                system("CLS");
                cout << "_________________________________||||||||||||" << endl;
                cout << "|          |          |          ||||||||||||" << endl;
                cout << "| Saturday |  Sunday  |  monday  | *Tuesday |" << endl;
                cout << "| click(0) | click(1) | click(2) | click(3) |" << endl;
                cout << "|          |          |          ||||||||||||" << endl;
                cout << "|__________|__________|__________||||||||||||" << endl;
                cout << "|          |          |                     |" << endl;
                cout << "| Wednesday| Thursday |                     |" << endl;
                cout << "| click(4) | click(5) |                     |" << endl;
                cout << "|__________|__________|_____________________|" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "| Breakfast  |     Lunch       |   Dinner   |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "|  click(6)  |    click(7)     |  click(8)  |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "--------------------------------------------" << endl;
                cout << "|      TO BACK CLICK (9)                    |" << endl;
                cout << "--------------------------------------------" << endl;
            }else if(command == "4")
            {
                system("CLS");
                cout << "_____________________________________________" << endl;
                cout << "|          |          |          |          |" << endl;
                cout << "| Saturday |  Sunday  |  monday  |  Tuesday |" << endl;
                cout << "| click(0) | click(1) | click(2) | click(3) |" << endl;
                cout << "|          |          |          |          |" << endl;
                cout << "||||||||||||__________|__________|__________" << endl;
                cout << "||||||||||||          |                     |" << endl;
                cout << "|*Wednesday| Thursday |                     |" << endl;
                cout << "| click(4) | click(5) |                     |" << endl;
                cout << "||||||||||||__________|_____________________|" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "| Breakfast  |     Lunch       |   Dinner   |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "|  click(6)  |    click(7)     |  click(8)  |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "--------------------------------------------" << endl;
                cout << "|      TO BACK CLICK (9)                    |" << endl;
                cout << "--------------------------------------------" << endl;
            }else if(command == "5")
            {
                system("CLS");
                cout << "_____________________________________________" << endl;
                cout << "|          |          |          |          |" << endl;
                cout << "| Saturday |  Sunday  |  monday  |  Tuesday |" << endl;
                cout << "| click(0) | click(1) | click(2) | click(3) |" << endl;
                cout << "|          |          |          |          |" << endl;
                cout << "|__________||||||||||||__________|__________" << endl;
                cout << "|          ||||||||||||                     |" << endl;
                cout << "| Wednesday|*Thursday |                     |" << endl;
                cout << "| click(4) | click(5) |                     |" << endl;
                cout << "|__________||||||||||||_____________________|" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "| Breakfast  |     Lunch       |   Dinner   |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "|  click(6)  |    click(7)     |  click(8)  |" << endl;
                cout << "|            |                 |            |" << endl;
                cout << "--------------------------------------------" << endl;
                cout << "|      TO BACK CLICK (9)                    |" << endl;
                cout << "--------------------------------------------" << endl;
            }else if(command == "6" || command == "7" || command == "8")
            {
                // reserve the meal
                reserveTheMeal(selectedDay, command, "0", "0", false, false);
            }else {
                Dashboard();
            }
            cin >> command;
            if(command < "5")
            {
                selectedDay = command;
            }
            reserveMeal(selectedDay);
        }

        // reserve meal
        void reserveTheMeal(string day, string time, string selectedF, string selectedH, bool error, bool hasBalance){
            system("CLS");

            string food1, food2, price1, price2, foodId1, foodId2;

            if(day == "0" and time == "6")
            {
                food1 = food.getFoods().saturday[0][0][0];
                food2 = food.getFoods().saturday[0][1][0];
                price1 = food.getFoods().saturday[0][0][1];
                price2 = food.getFoods().saturday[0][1][1];
                foodId1 = food.getFoods().saturday[0][0][2];
                foodId2 = food.getFoods().saturday[0][1][2];
            }else if(day == "0" and time == "7"){
                food1 = food.getFoods().saturday[1][0][0];
                food2 = food.getFoods().saturday[1][1][0];
                price1 = food.getFoods().saturday[1][0][1];
                price2 = food.getFoods().saturday[1][1][1];
                foodId1 = food.getFoods().saturday[1][0][2];
                foodId2 = food.getFoods().saturday[1][1][2];
            }else if(day == "0" and time == "8"){
                food1 = food.getFoods().saturday[2][0][0];
                food2 = food.getFoods().saturday[2][1][0];
                price1 = food.getFoods().saturday[2][0][1];
                price2 = food.getFoods().saturday[2][1][1];
                foodId1 = food.getFoods().saturday[2][0][2];
                foodId2 = food.getFoods().saturday[2][1][2];
            }else if(day == "1" and time == "6")
            {
                food1 = food.getFoods().sunday[0][0][0];
                food2 = food.getFoods().sunday[0][1][0];
                price1 = food.getFoods().sunday[0][0][1];
                price2 = food.getFoods().sunday[0][1][1];
                foodId1 = food.getFoods().sunday[0][0][2];
                foodId2 = food.getFoods().sunday[0][1][2];
            }else if(day == "1" and time == "7"){
                food1 = food.getFoods().sunday[1][0][0];
                food2 = food.getFoods().sunday[1][1][0];
                price1 = food.getFoods().sunday[1][0][1];
                price2 = food.getFoods().sunday[1][1][1];
                foodId1 = food.getFoods().sunday[1][0][2];
                foodId2 = food.getFoods().sunday[1][1][2];
            }else if(day == "1" and time == "8"){
                food1 = food.getFoods().sunday[2][0][0];
                food2 = food.getFoods().sunday[2][1][0];
                price1 = food.getFoods().sunday[2][0][1];
                price2 = food.getFoods().sunday[2][1][1];
                foodId1 = food.getFoods().sunday[2][0][2];
                foodId2 = food.getFoods().sunday[2][1][2];
            }else if(day == "2" and time == "6")
            {
                food1 = food.getFoods().monday[0][0][0];
                food2 = food.getFoods().monday[0][1][0];
                price1 = food.getFoods().monday[0][0][1];
                price2 = food.getFoods().monday[0][1][1];
                foodId1 = food.getFoods().monday[0][0][2];
                foodId2 = food.getFoods().monday[0][1][2];
            }else if(day == "2" and time == "7"){
                food1 = food.getFoods().monday[1][0][0];
                food2 = food.getFoods().monday[1][1][0];
                price1 = food.getFoods().monday[1][0][1];
                price2 = food.getFoods().monday[1][1][1];
                foodId1 = food.getFoods().monday[1][0][2];
                foodId2 = food.getFoods().monday[1][1][2];
            }else if(day == "2" and time == "8"){
                food1 = food.getFoods().monday[2][0][0];
                food2 = food.getFoods().monday[2][1][0];
                price1 = food.getFoods().monday[2][0][1];
                price2 = food.getFoods().monday[2][1][1];
                foodId1 = food.getFoods().monday[2][0][2];
                foodId2 = food.getFoods().monday[2][1][2];
            }
            else if(day == "3" and time == "6")
            {
                food1 = food.getFoods().Tuesday[0][0][0];
                food2 = food.getFoods().Tuesday[0][1][0];
                price1 = food.getFoods().Tuesday[0][0][1];
                price2 = food.getFoods().Tuesday[0][1][1];
                foodId1 = food.getFoods().Tuesday[0][0][2];
                foodId2 = food.getFoods().Tuesday[0][1][2];
            }else if(day == "3" and time == "7"){
                food1 = food.getFoods().Tuesday[1][0][0];
                food2 = food.getFoods().Tuesday[1][1][0];
                price1 = food.getFoods().Tuesday[1][0][1];
                price2 = food.getFoods().Tuesday[1][1][1];
                foodId1 = food.getFoods().Tuesday[1][0][2];
                foodId2 = food.getFoods().Tuesday[1][1][2];
            }else if(day == "3" and time == "8"){
                food1 = food.getFoods().Tuesday[2][0][0];
                food2 = food.getFoods().Tuesday[2][1][0];
                price1 = food.getFoods().Tuesday[2][0][1];
                price2 = food.getFoods().Tuesday[2][1][1];
                foodId1 = food.getFoods().Tuesday[2][0][2];
                foodId2 = food.getFoods().Tuesday[2][1][2];
            }else if(day == "4" and time == "6")
            {
                food1 = food.getFoods().Wednesday[0][0][0];
                food2 = food.getFoods().Wednesday[0][1][0];
                price1 = food.getFoods().Wednesday[0][0][1];
                price2 = food.getFoods().Wednesday[0][1][1];
                foodId1 = food.getFoods().Wednesday[0][0][2];
                foodId2 = food.getFoods().Wednesday[0][1][2];
            }else if(day == "4" and time == "7"){
                food1 = food.getFoods().Wednesday[1][0][0];
                food2 = food.getFoods().Wednesday[1][1][0];
                price1 = food.getFoods().Wednesday[1][0][1];
                price2 = food.getFoods().Wednesday[1][1][1];
                foodId1 = food.getFoods().Wednesday[1][0][2];
                foodId2 = food.getFoods().Wednesday[1][1][2];
            }else if(day == "4" and time == "8"){
                food1 = food.getFoods().Wednesday[2][0][0];
                food2 = food.getFoods().Wednesday[2][1][0];
                price1 = food.getFoods().Wednesday[2][0][1];
                price2 = food.getFoods().Wednesday[2][1][1];
                foodId1 = food.getFoods().Wednesday[2][0][2];
                foodId2 = food.getFoods().Wednesday[2][1][2];
            }else if(day == "5" and time == "6")
            {
                food1 = food.getFoods().Thursday[0][0][0];
                food2 = food.getFoods().Thursday[0][1][0];
                price1 = food.getFoods().Thursday[0][0][1];
                price2 = food.getFoods().Thursday[0][1][1];
                foodId1 = food.getFoods().Thursday[0][0][2];
                foodId2 = food.getFoods().Thursday[0][1][2];
            }else if(day == "5" and time == "7"){
                food1 = food.getFoods().Thursday[1][0][0];
                food2 = food.getFoods().Thursday[1][1][0];
                price1 = food.getFoods().Thursday[1][0][1];
                price2 = food.getFoods().Thursday[1][1][1];
                foodId1 = food.getFoods().Thursday[1][0][2];
                foodId2 = food.getFoods().Thursday[1][1][2];
            }else if(day == "5" and time == "8"){
                food1 = food.getFoods().Thursday[2][0][0];
                food2 = food.getFoods().Thursday[2][1][0];
                price1 = food.getFoods().Thursday[2][0][1];
                price2 = food.getFoods().Thursday[2][1][1];
                foodId1 = food.getFoods().Thursday[2][0][2];
                foodId2 = food.getFoods().Thursday[2][1][2];
            }

            // defining dining hall
            DiningHall hall1;
            hall1.setHallId(1);
            hall1.setName("self 3 keshavarzi");
            hall1.setAddress("baradaran, amir abad");
            hall1.setCapacity(450);
            DiningHall hall2;
            hall2.setHallId(2);
            hall2.setName("self 5 Pardis");
            hall2.setAddress("baradaran, Pardis Shokat Abad");
            hall2.setCapacity(790);
            DiningHall hall3;
            hall3.setHallId(3);
            hall3.setName("Self 6 Abozar");
            hall3.setAddress("Modaress 2");
            hall3.setCapacity(350);

            string selectedFood = selectedF;
            string selectedHall = selectedH;

            cout << "---------------------------------------------" << endl;
            cout << "|      balace : " << fixed << setprecision(0) << loginedUser.getBalance() << endl;
            cout << "---------------------------------------------" << endl;
            cout << "|  |                                         |" << endl;
            cout << "|  |---> Food:                               |" << endl;
            if(selectedFood == "0"){
                cout << "|  |       1 () _ " << food1 << endl;
            }else if(selectedFood == "1")
            {
                cout << "|  |       1 (*) _ " << food1 << endl;
            }else {
                cout << "|  |       1 () _ " << food1 << endl;
            }
            cout << "|  |               price : "<< price1 << endl;
            if(selectedFood == "0"){
                cout << "|  |       2 () _ " << food2 << endl;
            }else if(selectedFood == "2")
            {
                cout << "|  |       2 (*) _ " << food2 << endl;
            }else {
                cout << "|  |       2 () _ " << food2 << endl;
            }
            cout << "|  |               price : "<< price2 << endl;
            cout << "|  |                                         |" << endl;
            cout << "|  |---> Dining Hall:                        |" << endl;
            if(selectedHall == "0"){
                cout << "|  |       3 () _ " << hall1.getName() << " " << hall1.getAddress() << endl;
            }else if(selectedHall == "3")
            {
                cout << "|  |       3 (*) _ " << hall1.getName() << " " << hall1.getAddress() << endl;
            }else {
                cout << "|  |       3 () _ " << hall1.getName() << " " << hall1.getAddress() << endl;
            }
            if(selectedHall == "0"){
                cout << "|  |       4 () _ " << hall2.getName() << " " << hall1.getAddress() << endl;

            }else if(selectedHall == "4")
            {
                cout << "|  |       4 (*) _ " << hall2.getName() << " " << hall1.getAddress() << endl;
            }else {
                cout << "|  |       4 () _ " << hall2.getName() << " " << hall1.getAddress() << endl;
            }
            if(selectedHall == "0"){
                cout << "|  |       5 () _ " << hall3.getName() << " " << hall1.getAddress() << endl;


            }else if(selectedHall == "5")
            {
                cout << "|  |       5 (*) _ " << hall3.getName() << " " << hall1.getAddress() << endl;
            }else {
                cout << "|  |       5 () _ " << hall3.getName() << " " << hall1.getAddress() << endl;
            }
            cout << "|  |                                         |" << endl;
            cout << "|  |                                         |" << endl;
            if(error)
            {
                cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
                cout << "|      Please Fill All THE FORM              |" << endl;
                cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;   
            }
            if(hasBalance)
            {
                cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
                cout << "|Your Balance is Not enough, increase your balance by (8)|" << endl;
                cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;   
            }
            cout << "----------------------------------------------" << endl;
            cout << "|      To Reserve Click (6)                  |" << endl;
            cout << "----------------------------------------------" << endl;   
            cout << "----------------------------------------------" << endl;
            cout << "|      TO BACK CLICK (9)                     |" << endl;
            cout << "----------------------------------------------" << endl;   
            cin >> command;
            if(command == "1" || command == "2")
            {
                reserveTheMeal(day, time, command, selectedHall, false, false);   
            }else if(command == "3" || command == "4" || command == "5")
            {
                reserveTheMeal(day, time, selectedFood, command, false, false);   
            }else if(command == "6")
            {
                if(selectedFood == "1")
                {
                    if(to_string(loginedUser.getBalance()) > price1)
                    {
                        if(selectedHall == "1")
                        {
                            sendReservingRequest(loginedUser.getId(), foodId1,price1 , hall1);   
                        }else if(selectedHall == "2")
                        {
                            sendReservingRequest(loginedUser.getId(), foodId1,price1 , hall2);   
                        }else if(selectedHall == "3")
                        {
                            sendReservingRequest(loginedUser.getId(), foodId1,price1 , hall3);   
                        }
                    }else {
                        reserveTheMeal(day, time, selectedFood, selectedHall, false, true);   
                    }
                }else if(selectedFood == "2")
                {
                    if(to_string(loginedUser.getBalance()) > price1)
                    {
                        if(selectedHall == "1")
                        {
                            sendReservingRequest(loginedUser.getId(), foodId2,price2 , hall1); 
                        }else if(selectedHall == "2")
                        {  
                            sendReservingRequest(loginedUser.getId(), foodId2,price2 , hall2);
                        }else if(selectedHall == "3")
                        { 
                            sendReservingRequest(loginedUser.getId(), foodId2,price2 , hall3);
                        }
                    }else {
                        reserveTheMeal(day, time, selectedFood, selectedHall, false, true);   
                    }
                }
            }else if(command == "8"){
                chargeMeal();
            } else {
                Dashboard();
            }
        }

        void sendReservingRequest(int studentId, string mealId, string price,DiningHall hall)
        {
            system("CLS");
            // create reserve
            time_t created_at;
            Reservation reserve;
            reserve.setMealId(mealId);
            reserve.setDHall(hall);
            reserve.setStudentId(studentId);
            reserve.setReservationId(loginedUser.getReservationIndex() + 1);
            reserve.setCreatedAt(time(&created_at));


            // decrease user balance
            loginedUser.decreaseBalance(stof(price));

            // sava reseve in student
            loginedUser.setReserves(loginedUser.getReservationIndex(), reserve);
            
            // return back
            Dashboard();
        }

        // show reservation
        void showReservations()
        {
            system("CLS");
            loginedUser.showAllReserves();
            cout << "----------------------------------------------" << endl;
            cout << "|      To BACK Click (6)                     |" << endl;
            cout << "----------------------------------------------" << endl;
            cin >> command;
            Dashboard();
        }

        // login user
        void login(string name, string email, string id)
        {
            // set user data
            loginedUser.setName(name);
            loginedUser.setEmail(email);
            loginedUser.setStudentId(id);
            loginedUser.setBalance(0);
            loginedUser.setId(1);
            loginedUser.setActive(true);

            Dashboard("Meal reserved successfully");            
        }

};