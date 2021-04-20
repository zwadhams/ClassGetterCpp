#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
using namespace std;
#include "Semester.h"

void userIn(Semester);

int main(void) {

    //need to create classes for egen, csci, and biob that 
    Semester s;
    //inherit from university class
    //makefile to link files together
    ifstream ifs { "/public/pgm3/classes.csv" };

    s.Read(ifs);
    userIn(s); 
    
    return 0;
}
