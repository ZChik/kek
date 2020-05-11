#include <iostream>
#include "doors.h"
using namespace std;
door::door() {
	dor = 0;
}
door::~door() {}
door::door(const door & other)
{
	*this = other;
}
void door::set() {
	cin >> *this;
}
door & door::operator=(const door & other) {
	this->dor = other.dor;
	return *this;
}
ofstream & operator<<(ofstream & fout, door & obj) {
	fout << obj.dor << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, door & obj) {
	fin >> obj.dor;
	return fin;
}
ostream & operator<<(ostream & out, door & obj) {
	out << "Количество дверей: " << obj.dor << endl;
	return out;
}
istream & operator>>(istream & in, door & obj) {
	while (1) {
		cout << "Введите количество дверей машины: ";
		cin >> obj.dor;
		if (cin.fail() || obj.dor < 1) {
			cout << "Ошибка, в машине не может быть меньше одной двери, повторите ввод еще раз!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
	}
	return in;
}