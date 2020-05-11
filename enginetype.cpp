#include <iostream>
#include "enginetype.h"
using namespace std;
type::type() {
	typ = "NoP";
}
type::~type() {}
type::type(const type & other)
{
	*this = other;
}
void type::set() {
	cin >> *this;
}
type & type::operator=(const type & other) {
	this->typ = other.typ;
	return *this;
}
ofstream & operator<<(ofstream & fout, type & obj) {
	fout << obj.typ << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, type & obj) {
	fin >> obj.typ;
	return fin;
}
ostream & operator<<(ostream & out, type & obj) {
	out << "“ип двигател€: " << obj.typ << endl;
	return out;
}
istream & operator>>(istream & in, type & obj) {
	cin.ignore(1000, '\n');
	cout << "¬ведите тип машины: ";
	getline(cin, obj.typ);
	return in;
}