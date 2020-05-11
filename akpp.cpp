#include <iostream>
#include "akpp.h"
using namespace std;
akpp::akpp() {
	ak = "NoP";
}
akpp::~akpp() {}
akpp::akpp(const akpp & other)
{
	*this = other;
}
void akpp::set() {
	cin >> *this;
}
akpp & akpp::operator=(const akpp & other) {
	this->ak = other.ak;
	return *this;
}
ofstream & operator<<(ofstream & fout, akpp & obj) {
	fout << obj.ak << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, akpp & obj) {
	fin >> obj.ak;
	return fin;
}
ostream & operator<<(ostream & out, akpp & obj) {
	out << "Возможна ли установка АКПП: " << obj.ak << endl;
	return out;
}
istream & operator>>(istream & in, akpp & obj) {
	while (1) {
		cout << "Возможна ли установка АКПП (Да/Нет): ";
		getline(cin, obj.ak);
		if (cin.fail() || obj.ak != "Да" || obj.ak != "Нет" || obj.ak != "да" || obj.ak != "нет") {
			cout << "Ошибка, повторите ввод еще раз" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
	}
	return in;
}