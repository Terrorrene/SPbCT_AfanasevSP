#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, ".1251");
	FILE *file;
	char filnam[25] = "";
	char str[50] = "";
	cout << "Enter file name: "; cin >> filnam; //необходимо прописывать полный путь
	fopen_s(&file,filnam,"r");
	while ((fscanf_s(file, "%c", &str)) != EOF)
	{
		fgetwc(file);
		printf("%s ", str);
	}
	fclose(file);
	cout << endl;
	system("Pause");
}

