#include "AVTO.h"
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

Avto::Avto() {
    marka = new char[1];
    marka[0] = '\0';
    potuzhnist = 0;
    cina = 0.0f;
}
Avto::Avto(char* m, int p, float c) {
    if (m != nullptr) {
        int len = strlen(m);
        marka = new char[len + 1];
        strcpy_s(marka, len + 1, m);
    }
    else {
        marka = new char[1];
        marka[0] = '\0';
    }
    potuzhnist = p;
	cina = c;
}
Avto::Avto(const Avto& a) {
    int len = strlen(a.marka);
    marka = new char[len + 1];
    strcpy_s(marka, len + 1, a.marka);
    potuzhnist = a.potuzhnist;
    cina = a.cina;
}  
Avto::~Avto(void) {
	delete[] marka;
}
char* Avto::getMarka() {
	return marka;
}
int Avto::getPotuzhnist() {
	return potuzhnist;
}
float Avto::getCina() {
	return cina;
}
void Avto::setAVTO(char* m, int p, float cent) {
	setMarka(m);
	setPotuzhnist(p);
    setCina(cent);
}
void Avto::setMarka(char* m) {
	if (marka != nullptr) {
		delete[] marka;
	}
	if (m != nullptr) {
		int len = strlen(m);
		marka = new char[len + 1];
		strcpy_s(marka, len + 1, m);
	}
	else {
		marka = new char[1];
		marka[0] = '\0';
	}
}
void Avto::setPotuzhnist(int p) {
	potuzhnist = p;
}
void Avto::setCina(float cent) {
	cina = cent;
}
void Avto::printAVTO() {
	cout << "Marka: " << marka << endl;
	cout << "Potuzhnist: " << potuzhnist << " HP" << endl;
	cout << "Cena: " << cina << " $" << endl;
}