#include <iostream>
#include "weight.h"
using namespace std;
weight::weight() {
	we = 0;
}
weight::~weight() {}
weight::weight(const weight & other)
{
	*this = other;
}
void weight::set() {
	cin >> *this;
}
weight & weight::operator=(const weight & other) {
	this->we = other.we;
	return *this;
}
ofstream & operator<<(ofstream & fout, weight & obj) {
	fout << obj.we << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, weight & obj) {
	fin >> obj.we;
	return fin;
}
ostream & operator<<(ostream & out, weight & obj) {
	out << "Ўирина: " << obj.we << endl;
	return out;
}
istream & operator>>(istream & in, weight & obj) {
	while (1) {
		cout << "¬ведите ширину машины (м): ";
		cin >> obj.we;
		if (cin.fail() || obj.we <= 0) {
			cout << "ќшибка, повторите ввод еще раз!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
	}
	return in;
}