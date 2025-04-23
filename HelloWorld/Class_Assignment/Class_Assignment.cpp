
#include <iostream>
#include "DataBase.h"



int main()
{
	Database database;
    string name;
    bool quit = false;
    while (!quit)
    {
        cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1: // Create object by type break;
            cout << "Enter type (0 for TYPE1, 1 for TYPE2): ";
            int t;
            cin >> t;
            database.Create(static_cast<Pokemon::eType>(t)); 
            break;
        case 2:
            database.DisplayAll(); 
            break; 
        case 3:// Ask for name, then call database.Display(name) break;
            cin >> name;
            database.Display(name);
            break;
        case 4:
        {
            cout << "Enter type (0 for TYPE1, 1 for TYPE2): ";
            int t;
            cin >> t;
            database.Display(static_cast<Pokemon::eType>(t)); break;
        }
        case 5:
            quit = true;
            break;
        }
    }
}

