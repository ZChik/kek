#include <iostream>
#include "tires.h"
using namespace std;
tires::tires() {
	tir = "NoP";
}
tires::~tires() {}
tires::tires(const tires & other)
{
	*this = other;
}
void tires::set() {
	cin >> *this;
}
tires & tires::operator=(const tires & other) {
	this->tir = other.tir;
	return *this;
}
ofstream & operator<<(ofstream & fout, tires & obj) {
	fout << obj.tir << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, tires & obj) {
	fin >> obj.tir;
	return fin;
}
ostream & operator<<(ostream & out, tires & obj) {
	out << "Марка шин: " << obj.tir << endl;
	return out;
}
istream & operator>>(istream & in, tires & obj) {
	cin.ignore(1000, '\n');
	cout << "Введите марку шин: ";
	getline(cin, obj.tir);
	return in;
}