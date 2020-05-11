#include <iostream>
#include "trunk.h"
using namespace std;
trunk::trunk() {
	tru = 0;
}
trunk::~trunk() {}
trunk::trunk(const trunk & other)
{
	*this = other;
}
void trunk::set() {
	cin >> *this;
}
trunk & trunk::operator=(const trunk & other) {
	this->tru = other.tru;
	return *this;
}
ofstream & operator<<(ofstream & fout, trunk & obj) {
	fout << obj.tru << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, trunk & obj) {
	fin >> obj.tru;
	return fin;
}
ostream & operator<<(ostream & out, trunk & obj) {
	out << "Количество дверей: " << obj.tru << endl;
	return out;
}
istream & operator>>(istream & in, trunk & obj) {
	while (1) {
		cout << "Введите объем багажника машины: ";
		cin >> obj.tru;
		if (cin.fail() || obj.tru < 0) {
			cout << "Ошибка, повторите ввод еще раз!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
	}
	return in;
}