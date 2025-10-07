#pragma once
#include "B1.h"
#include <iostream>
using namespace std;

class D1 : public B1 {
public:
    string name;

    D1();
    ~D1();

    void set_name(string _name);
    void print();
};