#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class mirror :public car {
	string mir;
public:
	mirror(const mirror &other);
	mirror();
	~mirror();
	void set();
	friend ofstream& operator << (ofstream &fout, mirror& obj);
	friend ifstream& operator >> (ifstream &fin, mirror& obj);

	friend ostream& operator << (ostream &out, mirror& obj);
	friend istream& operator >> (istream &in, mirror& obj);

	mirror& operator =(const mirror &other);
};