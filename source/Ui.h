#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#pragma once

using namespace std;

class UIDesign{
    public:
        string command;

        // move cursor to custom point
        void moveInput(int x, int y){
            COORD coord;
            coord.X = x;
            coord.Y = y;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }

        // check if the user added "@gmail.com" 
        // bool validateEmail(string email){
        //     // transform
        // };

        // run the App
        void runUI()
        {
            if(command == "")
            {
                showMainMenu();
            }else if(command == "1")
            {
                showLoginPage();
            }else if(command == "3")
            {
                login();
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

            string name, email, id;
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
            
            moveInput(14, 7);
            cin >> email;

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

        void login()
        {

        }

};