#include <iostream>
#include "height.h"
using namespace std;
height::height() {
	he = 0;
}
height::~height() {}
height::height(const height & other)
{
	*this = other;
}
void height::set() {
	cin >> *this;
}
height & height::operator=(const height & other) {
	this->he = other.he;
	return *this;
}
ofstream & operator<<(ofstream & fout, height & obj) {
	fout << obj.he << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, height & obj) {
	fin >> obj.he;
	return fin;
}
ostream & operator<<(ostream & out, height & obj) {
	out << "Высота: " << obj.he << endl;
	return out;
}
istream & operator>>(istream & in, height & obj) {
	while (1) {
		cout << "Введите высоту машины (м): ";
		cin >> obj.he;
		if (cin.fail() || obj.he <= 0) {
			cout << "Ошибка, повторите ввод еще раз!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
	}
	return in;
}