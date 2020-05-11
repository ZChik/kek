#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class door :public car {
	int dor;
public:
	door(const door &other);
	door();
	~door();
	void set();
	friend ofstream& operator << (ofstream &fout, door& obj);
	friend ifstream& operator >> (ifstream &fin, door& obj);

	friend ostream& operator << (ostream &out, door& obj);
	friend istream& operator >> (istream &in, door& obj);

	door& operator =(const door &other);
};