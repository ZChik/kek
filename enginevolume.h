#pragma once
#include <fstream>
#include "car.h";

using namespace std;

class volume :public car {
	int vol;
public:
	volume(const volume &other);
	volume();
	~volume();
	void set();
	friend ofstream& operator << (ofstream &fout, volume& obj);
	friend ifstream& operator >> (ifstream &fin, volume& obj);

	friend ostream& operator << (ostream &out, volume& obj);
	friend istream& operator >> (istream &in, volume& obj);

	volume& operator =(const volume &other);
};