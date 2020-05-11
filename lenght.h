#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class lenght :public car {
	int len;
public:
	lenght(const lenght &other);
	lenght();
	~lenght();
	void set();
	friend ofstream& operator << (ofstream &fout, lenght& obj);
	friend ifstream& operator >> (ifstream &fin, lenght& obj);

	friend ostream& operator << (ostream &out, lenght& obj);
	friend istream& operator >> (istream &in, lenght& obj);

	lenght& operator =(const lenght &other);
};