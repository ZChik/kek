#include <iostream>
#include "trunkonroof.h"
using namespace std;
roof::roof() {
	ro = "NoP";
}
roof::~roof() {}
roof::roof(const roof & other)
{
	*this = other;
}
void roof::set() {
	cin >> *this;
}
roof & roof::operator=(const roof & other) {
	this->ro = other.ro;
	return *this;
}
ofstream & operator<<(ofstream & fout, roof & obj) {
	fout << obj.ro << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, roof & obj) {
	fin >> obj.ro;
	return fin;
}
ostream & operator<<(ostream & out, roof & obj) {
	out << "�������� �� ��������� ��������� �� �����: " << obj.ro << endl;
	return out;
}
istream & operator>>(istream & in, roof & obj) {
	while (1) {
		cout << "�������� �� ��������� ��������� �� ����� (��/���): ";
		getline(cin, obj.ro);
		if (cin.fail() || obj.ro != "��" || obj.ro != "���" || obj.ro != "��" || obj.ro != "���") {
			cout << "������, ��������� ���� ��� ���" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
	}
	return in;
}