#include <iostream>
#include "lenght.h"
using namespace std;
lenght::lenght() {
	len = 0;
}
lenght::~lenght() {}
lenght::lenght(const lenght & other)
{
	*this = other;
}
void lenght::set() {
	cin >> *this;
}
lenght & lenght::operator=(const lenght & other) {
	this->len = other.len;
	return *this;
}
ofstream & operator<<(ofstream & fout, lenght & obj) {
	fout << obj.len << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, lenght & obj) {
	fin >> obj.len;
	return fin;
}
ostream & operator<<(ostream & out, lenght & obj) {
	out << "ƒлина: " << obj.len << endl;
	return out;
}
istream & operator>>(istream & in, lenght & obj) {
	while (1) {
		cout << "¬ведите длину машины (м): ";
		cin >> obj.len;
		if (cin.fail() || obj.len <= 0) {
			cout << "ќшибка, повторите ввод еще раз!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
	}
	return in;
}