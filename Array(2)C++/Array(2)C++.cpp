#include "stdafx.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	int a[5], min, max;
	string str;

	setlocale(LC_ALL,"RUS");

	for (int i = 0; i < 5; i++) {		
		cout << "Введите "<< i + 1 <<" элемент массива:";
		cin >> a[i];
	}
	char ch = str.c_str()[i];
	if(!isdigit(ch)) {
		cerr << "Некорректный ввод, повторите попытку:" << endl;                        
	} 
	a[i] = atoi(str.c_str());
	
	// четыре строки, что выше следует отправить в цикл for, который выше них. А всё, что в цикле сейчас убрать вообще.

	max = a[0];							
	for (int i = 1; i < 5; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}

	// перепутала максимальный и минимальный элементы. Там где ищется максимальный ищется минимальный и наоборот
	// а вроде правильно ищет...

	// не исправила комментарий, который выше написан

	min = a[0];
	for (int i = 1; i < 5; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}

	cout << "Минимальный элемент = "<< min << endl;
	cout << "Максимальный элемент = "<< max << endl;

	system ("PAUSE");
}