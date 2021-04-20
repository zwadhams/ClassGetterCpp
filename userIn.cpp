#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

using namespace std;

#include "Semester.h"
#include "Class.h"

void userIn(Semester s) {
    char choice;
    string num;
    string type;

    //char n = 'n';
    //char q = 'q';
    //char t = 't';

    while (choice != 'q') {
        
        cout << "Choices:" << endl;
        cout << "n - print class given number" << endl;
        cout << "t - print all classes for a given type" << endl;
        cout << "q - quit" << endl;

        cin >> choice;

        if (choice == 'n') {
            cout << "Enter class type and class number: " << endl;
            cin >> type;
            cin >> num;
            s.Number(type, num);
        } else if (choice == 't') {
            cout << "Enter type (EGEN, CSCI, BIOB): " << endl;
            cin >> type;
            s.Type(type);
        } else if (choice == 'q') {
            cout << "exiting program...." << endl;
        } else {
            cout << "invalid input, exiting program...." << endl;
        }
    }
}
