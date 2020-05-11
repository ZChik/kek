#include <iostream>
#include "seat.h"
using namespace std;
seat::seat() {
	se = "NoP";
}
seat::~seat() {}
seat::seat(const seat & other)
{
	*this = other;
}
void seat::set() {
	cin >> *this;
}
seat & seat::operator=(const seat & other) {
	this->se = other.se;
	return *this;
}
ofstream & operator<<(ofstream & fout, seat & obj) {
	fout << obj.se << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, seat & obj) {
	fin >> obj.se;
	return fin;
}
ostream & operator<<(ostream & out, seat & obj) {
	out << "Возможен ли подогрев сидений: " << obj.se << endl;
	return out;
}
istream & operator>>(istream & in, seat & obj) {
	while (1) {
		cout << "Возможен ли подогрев сидений (Да/Нет): ";
		getline(cin, obj.se);
		if (cin.fail() || obj.se != "Да" || obj.se != "Нет" || obj.se != "да" || obj.se != "нет") {
			cout << "Ошибка, повторите ввод еще раз" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
	}
	return in;
}