#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class height :public car {
	int he;
public:
	height(const height &other);
	height();
	~height();
	void set();
	friend ofstream& operator << (ofstream &fout, height& obj);
	friend ifstream& operator >> (ifstream &fin, height& obj);

	friend ostream& operator << (ostream &out, height& obj);
	friend istream& operator >> (istream &in, height& obj);

	height& operator =(const height &other);
};