#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class roof :public car {
	string ro;
public:
	roof(const roof &other);
	roof();
	~roof();
	void set();
	friend ofstream& operator << (ofstream &fout, roof& obj);
	friend ifstream& operator >> (ifstream &fin, roof& obj);

	friend ostream& operator << (ostream &out, roof& obj);
	friend istream& operator >> (istream &in, roof& obj);

	roof& operator =(const roof &other);
};