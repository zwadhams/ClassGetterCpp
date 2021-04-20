#ifndef SEMESTER_H
#define SEMESTER_H

#include <iostream>
#include <vector>
using namespace std;

#include "Class.h"
#include "Egen.h"
#include "Csci.h"
#include "Biob.h"

class Semester {
public:
    void Read(ifstream&);
    void Print();
    void Type(string);
    void Number(string, string);
private: 
    vector<Class> ucs;
};

#endif
