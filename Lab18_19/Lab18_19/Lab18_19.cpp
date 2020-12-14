﻿#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstdalign>
#include <ctime>
#include <random>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	//Создание файла
	string file_in, word_in, word_fn;
	ofstream file;
	file.open("test.txt", ios::out | ios::app);
	if (!file) 
	{
		cout << "Oшибка файла - невозможно открыть для записи данных!";
		cin.sync(); cin.get(); return 1;
	}
	// Ввод слов в файл
	file << "kot" << endl << "toss" << endl << "man" << endl << "dude" << endl << "lol" << endl;
	file.close();
	ifstream file2;
	file2.open("test.txt", ios::in);
	if (!file2) {
		cout << "Oшибка файла - невозможно открыть для записи данных!";
		cin.sync(); cin.get(); return 2;
	}
	// Ввод слова пользователем и поиск его в файле
	cout << "Введите слово: ";
	cin >> word_fn;
	while (file2 >> word_in)
		if (word_in == word_fn)
		{
			cout << "Слово '" << word_in << "' найдено.\n";
			system("PAUSE");
			file2.close();
			return 0;
		}
	if (word_in != word_fn)
	{
		cout << "Слово '" << word_fn << "' не найдено\n";
		system("PAUSE");
		file2.close();
		return 0;
	}
}