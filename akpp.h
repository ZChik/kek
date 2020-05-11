#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class akpp :public car {
	string ak;
public:
	akpp(const akpp &other);
	akpp();
	~akpp();
	void set();
	friend ofstream& operator << (ofstream &fout, akpp& obj);
	friend ifstream& operator >> (ifstream &fin, akpp& obj);

	friend ostream& operator << (ostream &out, akpp& obj);
	friend istream& operator >> (istream &in, akpp& obj);

	akpp& operator =(const akpp &other);
};