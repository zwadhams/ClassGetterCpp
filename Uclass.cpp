#include <iostream>
#include <sstream>
using namespace std;
#include "Class.h"

void Class::SetFromCsvLine(string inp1) {

    istringstream line(inp1);

    //get the type
    getline(line, type, ' ');

    //get class number
    getline(line, cnum, ',');

    //get title of class
    getline(line, ctitle, ',');

    //get professor's name
    getline(line, prof, ',');

    return;
}

void Class::Print() {
    cout << type << "-" << cnum << "-" << ctitle << "-" << prof << endl;

    return;
}
