#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class seat :public car {
	string se;
public:
	seat(const seat &other);
	seat();
	~seat();
	void set();
	friend ofstream& operator << (ofstream &fout, seat& obj);
	friend ifstream& operator >> (ifstream &fin, seat& obj);

	friend ostream& operator << (ostream &out, seat& obj);
	friend istream& operator >> (istream &in, seat& obj);

	seat& operator =(const seat &other);
};
