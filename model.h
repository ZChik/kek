#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class model :public car {
	string mod;
public:
	model(const model &other);
	model();
	~model();
	void set();
	friend ofstream& operator << (ofstream &fout, model& obj);
	friend ifstream& operator >> (ifstream &fin, model& obj);

	friend ostream& operator << (ostream &out, model& obj);
	friend istream& operator >> (istream &in, model& obj);

	model& operator =(const model &other);
};