#include <sstream>
#include <iostream>

using namespace std;

#include "Biob.h"

void Biob::Print(string type, string prof, string title, string num) {
    cout << type << "-" << num << "-" << title << "-" << prof << endl;
}
