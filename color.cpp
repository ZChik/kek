#include <iostream>
#include "color.h"
using namespace std;
color::color() {
	col = "NoP";
}
color::~color() {}
color::color(const color & other)
{
	*this = other;
}
void color::set() {
	cin >> *this;
}
color & color::operator=(const color & other) {
	this->col = other.col;
	return *this;
}
ofstream & operator<<(ofstream & fout, color & obj) {
	fout << obj.col << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, color & obj) {
	fin >> obj.col;
	return fin;
}
ostream & operator<<(ostream & out, color & obj) {
	out << "÷вет: " << obj.col << endl;
	return out;
}
istream & operator>>(istream & in, color & obj) {
	cin.ignore(1000, '\n');
	cout << "¬ведите цвет машины: ";
	getline(cin, obj.col);
	return in;
}