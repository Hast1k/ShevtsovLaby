#pragma once
#include "D1.h"
#include "B2.h"
#include "B3.h"
#include <iostream>
using namespace std;

class D2 : public D1, public B2, private B3 {
public:
    string name;

    D2();
    ~D2();

    void input();
    void output();
    void set_name(string _name);
    void print();
};