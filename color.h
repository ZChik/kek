#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class color:public car {
	string col;
public:
	color(const color &other);
	color();
	~color();
	void set();
	friend ofstream& operator << (ofstream &fout, color& obj);
	friend ifstream& operator >> (ifstream &fin, color& obj);

	friend ostream& operator << (ostream &out, color& obj);
	friend istream& operator >> (istream &in, color& obj);

	color& operator =(const color &other);
};