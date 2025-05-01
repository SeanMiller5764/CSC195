
#include <iostream>
#include "DataBase.h"
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>



int main()
{
    Database* database = new Database;
    string name;
    int t = 0;
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
            cin >> t;
            database->Create(static_cast<Pokemon::eType>(t)); 
            break;
        case 2:
            database->DisplayAll(); 
            break; 
        case 3:// Ask for name, then call database.Display(name) break;
            cin >> name;
            database->Display(name);
            break;
        case 4:
            cout << "Enter type (0 for TYPE1, 1 for TYPE2): ";
            cin >> t;
            database->Display(static_cast<Pokemon::eType>(t)); 
            break;
        case 5:
            cout << "enter filename: ";
            cin >> name;
            database->Load(name); // or database.Save(name);
            break;
        
        case 6:
            cout << "enter filename: ";
            cin >> name;
            database->Save(name);
            break;
        case 7:
            quit = true;
           
            break;
        }
    }
     delete database;
     _CrtDumpMemoryLeaks();

}

