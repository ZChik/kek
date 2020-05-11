#pragma once
#include "keep.h"
#include"color.h"
#include"enginetype.h"
#include"enginevolume.h"
#include"lenght.h"
#include"weight.h"
#include "height.h"
#include "year.h"
#include "doors.h"
#include "model.h"
#include "tires.h"
#include "trunk.h"
#include "trunkonroof.h"
#include "mirrors.h"
#include "seat.h"
#include "akpp.h"
#include "VAZ.h"
#include "KIA.h"
#include "Nissan.h"
#include "Toyota.h"
#include <iostream>

using namespace std;

template <typename T>
void carsmenu(T &obj, string s) {
	int button;
	int id;
	bool flag = true;

	while (flag) {
		system("cls");
		cout << "Выберите действие: " << endl << endl;
		cout << "1 - Добавить новый элемент" << endl;
		cout << "2 - Удалить элемент" << endl;
		cout << "3 - Вывести список элементов на экран" << endl;
		cout << "4 - Редактировать элемент" << endl;
		cout << "5 - Записать элементы в файл" << endl;
		cout << "6 - Прочитать элементы из файла" << endl;
		cout << "0 - Вернуться в главное меню" << endl << endl;
		cout << "Введите соответствующую цифру: ";
		cin >> button;
		if (cin.fail()) {
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		system("cls");
		switch (button) {
		case 1: obj.push(); system("pause"); break;
		case 2: obj.print(); cout << "Выберите элемент, который хотите удалить: "; cin >> id; obj.del(id); system("pause"); break;
		case 3: obj.print(); system("pause"); break;
		case 4: obj.print(); cout << "Выберите элемент, который хотите редактировать: "; cin >> id; obj.record(id); system("pause"); break;
		case 5: obj.writefile(s); system("pause"); break;
		case 6: obj.readfile(s); system("pause"); break;
		case 0: flag = false; break;
		default: cout << "Элемент успешно создан!" << endl << endl; system("pause"); break;
		}
	}
}
