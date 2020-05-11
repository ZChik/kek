#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class year :public car {
	int ye;
public:
	year(const year &other);
	year();
	~year();
	void set();
	friend ofstream& operator << (ofstream &fout, year& obj);
	friend ifstream& operator >> (ifstream &fin, year& obj);

	friend ostream& operator << (ostream &out, year& obj);
	friend istream& operator >> (istream &in, year& obj);

	year& operator =(const year &other);
};