#pragma once
class Avto
{
public:
	char *marka;
	int potuzhnist;
	float cina;
public:
	Avto();
	Avto(char *marka, int potuzhnist, float cina);
	Avto(const Avto& a);
	~Avto(void);
	char* getMarka();
	int getPotuzhnist();
	float getCina();
	void setAVTO(char* marka, int potuzhnist, float cina);
	void setMarka(char *m);
	void setPotuzhnist(int p);
	void setCina(float c);
	void printAVTO();
};

