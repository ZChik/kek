#include <iostream>
#include "model.h"
using namespace std;
model::model() {
	mod = "NoP";
}
model::~model() {}
model::model(const model & other)
{
	*this = other;
}
void model::set() {
	cin >> *this;
}
model & model::operator=(const model & other) {
	this->mod = other.mod;
	return *this;
}
ofstream & operator<<(ofstream & fout, model & obj) {
	fout << obj.mod << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, model & obj) {
	fin >> obj.mod;
	return fin;
}
ostream & operator<<(ostream & out, model & obj) {
	out << "Модель машины: " << obj.mod << endl;
	return out;
}
istream & operator>>(istream & in, model & obj) {
	cin.ignore(1000, '\n');
	cout << "Введите модель машины: ";
	getline(cin, obj.mod);
	return in;
}