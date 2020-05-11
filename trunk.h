#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class trunk :public car {
	int tru;
public:
	trunk(const trunk &other);
	trunk();
	~trunk();
	void set();
	friend ofstream& operator << (ofstream &fout, trunk& obj);
	friend ifstream& operator >> (ifstream &fin, trunk& obj);

	friend ostream& operator << (ostream &out, trunk& obj);
	friend istream& operator >> (istream &in, trunk& obj);

	trunk& operator =(const trunk &other);
};