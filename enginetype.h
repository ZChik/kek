#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class type :public car {
	string typ;
public:
	type(const type &other);
	type();
	~type();
	void set();
	friend ofstream& operator << (ofstream &fout, type& obj);
	friend ifstream& operator >> (ifstream &fin, type& obj);

	friend ostream& operator << (ostream &out, type& obj);
	friend istream& operator >> (istream &in, type& obj);

	type& operator =(const type &other);
};