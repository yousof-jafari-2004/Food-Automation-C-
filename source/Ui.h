#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#pragma once

using namespace std;

class UIDesign{
    public:
        string command = "0";

        string loginedUser[3];

        string name, email, id;

        float balance = 0;

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
            if(command == "0")
            {
                showMainMenu();
            }else if(command == "1")
            {
                showLoginPage();
            }else if(command == "3")
            {
                if(name == "" || email == "" || id == "")
                {
                    show404();
                }else {
                    login(name, email, id);
                }
            }
            else
            {
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

        void Dashboard(){
            system("CLS");
            cout << "---------------------------------------------------" << endl;
            cout << "| " << loginedUser[0] << " | " << loginedUser[2] << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "| " << "your balance -->" << balance << " Toman" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|             To charge your balance (6)          |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                To Reserve Meal (5)              |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "|                                                 |" << endl;
            cout << "---------------------------------------------------" << endl;

            cin >> command;
            runUI();
        }

        // login user
        void login(string name, string email, string id)
        {
            loginedUser[0] = name;
            loginedUser[1] = email;
            loginedUser[2] = id;

            Dashboard();            
        }

};