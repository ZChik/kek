#include <iostream>
#include "year.h"
using namespace std;
year::year() {
	ye = 0;
}
year::~year() {}
year::year(const year & other)
{
	*this = other;
}
void year::set() {
	cin >> *this;
}
year & year::operator=(const year & other) {
	this->ye = other.ye;
	return *this;
}
ofstream & operator<<(ofstream & fout, year & obj) {
	fout << obj.ye << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, year & obj) {
	fin >> obj.ye;
	return fin;
}
ostream & operator<<(ostream & out, year & obj) {
	out << "Год выпуска: " << obj.ye << endl;
	return out;
}
istream & operator>>(istream & in, year & obj) {
	while (1) {
		cout << "Введите год выпуска машины: ";
		cin >> obj.ye;
		if (cin.fail() || obj.ye < 1768) {
			cout << "Ошибка, в этом году машин не существовало, повторите ввод еще раз!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
	}
	return in;
}