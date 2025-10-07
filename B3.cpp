#include "B3.h"
#include <iostream>
using namespace std;

B3::B3() {
    cout << "Class B3, predkiv nema" << endl;
}

B3::~B3() {
    cout << "Destructor B3" << endl;
}

void B3::set_name(string _name) {
    name = _name;
}

void B3::print() {
    cout << "Class B3, name = " << name << endl;
}