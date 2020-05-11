#pragma once
#include <iostream>
#include <string>
#include <exception>

using namespace std;

template <class T>
class Keeper {
	T *ptr;						
	int size;				
public:
	Keeper();
	~Keeper();

	void push();				
	void del(int);				

	void writefile(string);		
	void readfile(string);		

	void print();				
	void record(int);		
};

template<class T>
Keeper<T>::Keeper() {
	cout << "" << endl << endl;
	ptr = nullptr;
	size = 0;
}

template<class T>
Keeper<T>::~Keeper() {
	cout << "" << endl << endl;
	delete[] ptr;
}

template<class T>
void Keeper<T>::push() {
	T *tmp = new T[size + 1];			

	for (int i = 0; i < size; ++i) {	
		tmp[i] = ptr[i];
	}

	delete[] ptr;						
	ptr = tmp;							
	cin >> ptr[size];					
	++size;								
	cout << endl << endl << "" << endl << endl;
}

template<class T>
void Keeper<T>::del(int id) {
	try {
		if (size == 0) {						
			exception ex("!");
			throw ex;
		}
		if (id < 0 || id >= size) {				
			exception ex("");
			throw ex;
		}

		T *tmp = new T[size - 1];				

		ptr[id] = ptr[size - 1];				
		for (int i = 0; i < size - 1; ++i) {	
			tmp[i] = ptr[i];
		}
		delete[] ptr;							
		ptr = tmp;								
		--size;									
		cout << endl << endl << "" << endl << endl;
	}
	catch (exception &ex) {
		cout << ex.what() << endl << endl;		
	}
}

template<class T>
void Keeper<T>::writefile(string s) {
	ofstream fout(s, ios::out);

	try {
		if (size == 0) {
			exception ex("");
			throw ex;
		}

		fout << size << endl;						
		for (int i = 0; i < size; ++i) {			
			fout << ptr[i] << endl;
		}
		fout.close();

		cout << "" << endl << endl;
	}
	catch (exception &ex) {
		cout << ex.what() << endl;
	}


}

template<class T>
void Keeper<T>::readfile(string s) {
	delete[] ptr;								

	ifstream fin(s, ios::in);

	fin >> size;								
	ptr = new T[size];							

	for (int i = 0; i < size; ++i) {			
		fin >> ptr[i];
	}

	fin.close();

	cout << "" << endl << endl;
}

template<class T>
void Keeper<T>::print() {

	if (size == 0) {							
		cout << "!" << endl << endl;
	}
	else {
		for (int i = 0; i < size; ++i) {		
			cout << ptr[i] << endl;
		}
	}
}

template<class T>
void Keeper<T>::record(int id) {
	try {
		if (size == 0) {						
			exception ex("");
			throw ex;
		}
		if (id < 0 || id >= size) {				
			exception ex("");
			throw ex;
		}
		cin >> ptr[id];							
	}
	catch (exception &ex) {
		cout << ex.what() << endl << endl;		
	}
}