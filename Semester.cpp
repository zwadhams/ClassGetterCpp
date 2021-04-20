#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Semester.h"

void Semester::Read(ifstream& ifs) {
    string line;
    while (getline(ifs, line)) {
        Class one_class;
        one_class.SetFromCsvLine(line);
        ucs.push_back(one_class);
    }
    Class uc;   ;
}

void Semester::Print() {
    for (Class uc : ucs) {
        uc.Print();
    }
    return;
}

void Semester::Type(string t) {
    Egen en;
    Csci cs;
    Biob bi;

    for (Class uc : ucs) {
        if (t.compare("EGEN") == 0) {
            if (uc.Type().compare(t) == 0) {
                en.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());
            }
        } else if (t.compare("CSCI") == 0) {
            if (uc.Type().compare(t) == 0) {
                cs.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());   
            }
        } else if (t.compare("BIOB") == 0) {
            if (uc.Type().compare(t) == 0) {
                bi.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());
            }
        }
    }
}

void Semester::Number(string t, string n) {
    
    Egen en;
    Csci cs;
    Biob bi;

    for (Class uc : ucs) {
        if (t.compare("EGEN") == 0) {
            if ((uc.Type().compare(t) == 0) && (uc.Number().compare(n) == 0)) {
                en.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());
            }
        } else if (t.compare("CSCI") == 0) {
            if ((uc.Type().compare(t) == 0) && (uc.Number().compare(n) == 0)) {
                cs.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());
            }
        } else if (t.compare("BIOB") == 0) {
            if ((uc.Type().compare(t) == 0) && (uc.Number().compare(n) == 0)) {
                bi.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());
            }
        }
    }
}
