#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>
using namespace std;

class Class {
public:
    void SetFromCsvLine(string);
    void Print();
    string Type() const {return type;}
    string Title() const {return ctitle;}
    string Professor() const {return prof;}
    string Number() const {return cnum;}
protected:
    string type;
    string cnum;
    string ctitle;
    string prof;
};

#endif

