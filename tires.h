#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class tires :public car {
	string tir;
public:
	tires(const tires &other);
	tires();
	~tires();
	void set();
	friend ofstream& operator << (ofstream &fout, tires& obj);
	friend ifstream& operator >> (ifstream &fin, tires& obj);

	friend ostream& operator << (ostream &out, tires& obj);
	friend istream& operator >> (istream &in, tires& obj);

	tires& operator =(const tires &other);
};