#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class weight :public car {
	int we;
public:
	weight(const weight &other);
	weight();
	~weight();
	void set();
	friend ofstream& operator << (ofstream &fout, weight& obj);
	friend ifstream& operator >> (ifstream &fin, weight& obj);

	friend ostream& operator << (ostream &out, weight& obj);
	friend istream& operator >> (istream &in, weight& obj);

	weight& operator =(const weight &other);
};