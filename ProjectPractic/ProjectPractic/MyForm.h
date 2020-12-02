#pragma once
#include <ctime>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <fstream>
#include "SorrDLL.h"
//#include <thread>

int q=0, ch[100];
//Абстрактный вектрор
struct vector
{
public:
	int size;
	int index;
	int** chislo;
	int& operator[](const int&);
};
void vectorf(vector* a, int n, int** m, int p)
{
	//srand(time(0));
	q = p;
	a->size = n;
	a->chislo = m;
	for (int i = 0; i < n; i++)
	{
		m[q][i] = rand() % 10;
	}
	//a->chislo = m;
};
int& vector::operator[](const int& i)
{
	index = q;
	return chislo[index][i];
};
vector stroka1, stroka2, stroka3, stroka4, stroka5;
////////////////////////////////////
//Потоки для сортировки векторов
DWORD WINAPI thread1(LPVOID lpParam)
{
	int fuka[20];
	q = 0;
	int j = 0;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 0; i < 20; i++)
	{
		q = 0;
		stroka1[i] = ch[j];
		j++;
	}
	return 0;
}

DWORD WINAPI thread2(LPVOID lpParam)
{
	int fuka[20];
	q = 1;
	int j = 20;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 0; i < 20; i++)
	{
		q = 1;
		stroka2[i] = ch[j];
		j++;
	}
	return 0;
}

DWORD WINAPI thread3(LPVOID lpParam)
{
	int fuka[20];
	q = 2;
	int j = 40;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 0; i < 20; i++)
	{
		q = 2;
		stroka3[i] = ch[j];
		j++;
	}
	return 0;
}

DWORD WINAPI thread4(LPVOID lpParam)
{
	int fuka[20];
	q = 3;
	int j = 60;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 0; i < 20; i++)
	{
		q = 3;
		stroka4[i] = ch[j];
		j++;
	}
	return 0;
}

DWORD WINAPI thread5(LPVOID lpParam)
{
	int fuka[20];
	q = 4;
	int j = 80;
	int Data = 0;
	Data = *((int*)lpParam);
	for (int i = 0; i < 20; i++)
	{
		q = 4;
		stroka5[i] = ch[j];
		j++;
	}
	return 0;
}
//////////////////////////////////////////////////////////
namespace ProjectPractic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// —водка дл¤ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  DataTime;
	private: System::Windows::Forms::DataGridView^  table1;
	private: System::Windows::Forms::DataGridView^  table2;
	private: System::Windows::Forms::Button^  button1;









	protected:

	private:
		/// <summary>
		/// ќб¤зательна¤ переменна¤ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл¤ поддержки конструктора Ч не измен¤йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DataTime = (gcnew System::Windows::Forms::Label());
			this->table1 = (gcnew System::Windows::Forms::DataGridView());
			this->table2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Афанасьев Сергей";
			// 
			// DataTime
			// 
			this->DataTime->AutoSize = true;
			this->DataTime->Location = System::Drawing::Point(18, 34);
			this->DataTime->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DataTime->Name = L"DataTime";
			this->DataTime->Size = System::Drawing::Size(0, 20);
			this->DataTime->TabIndex = 1;
			// 
			// table1
			// 
			this->table1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table1->ColumnHeadersVisible = false;
			this->table1->EnableHeadersVisualStyles = false;
			this->table1->Location = System::Drawing::Point(22, 88);
			this->table1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->table1->Name = L"table1";
			this->table1->RowHeadersVisible = false;
			this->table1->RowTemplate->ReadOnly = true;
			this->table1->Size = System::Drawing::Size(360, 354);
			this->table1->TabIndex = 2;
			// 
			// table2
			// 
			this->table2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table2->ColumnHeadersVisible = false;
			this->table2->EnableHeadersVisualStyles = false;
			this->table2->Location = System::Drawing::Point(440, 88);
			this->table2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->table2->Name = L"table2";
			this->table2->RowHeadersVisible = false;
			this->table2->RowTemplate->ReadOnly = true;
			this->table2->Size = System::Drawing::Size(360, 354);
			this->table2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(850, 406);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Сортировка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1018, 497);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->table2);
			this->Controls->Add(this->table1);
			this->Controls->Add(this->DataTime);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//srand(time(0));
		//вывод даты
		time_t now = time(0);
		tm *ltm = localtime(&now);
		int year = 1900 + ltm->tm_year, month = 1 + ltm->tm_mon, day = ltm->tm_mday, time = ltm->tm_hour,
			min = ltm->tm_min, sec = ltm->tm_sec;
		DataTime->Text += " ";
		DataTime->Text += day.ToString();
		DataTime->Text += ".";
		DataTime->Text += month.ToString();
		DataTime->Text += ".";
		DataTime->Text += year.ToString();
		DataTime->Text += " ";
		if (time < 10)
		{
			DataTime->Text += "0";
			DataTime->Text += time.ToString();
		}
		else
			DataTime->Text += time.ToString();
		DataTime->Text += ":";
		if (min < 10)
		{
			DataTime->Text += "0";
			DataTime->Text += min.ToString();
		}
		else
			DataTime->Text += min.ToString();
		DataTime->Text += ":";
		if (sec < 10)
		{
			DataTime->Text += "0";
			DataTime->Text += sec.ToString();
		}
		else
			DataTime->Text += sec.ToString();
		////////////////////////////////////////////////
		//Создание первой таблицы
		table1->Columns->Clear();
		table1->ColumnCount = 20;
		table1->RowCount = 5;
		/////////////////////////////////////////////////
		//Создание и открытие файла csv
		HANDLE F = CreateFile(L"file1.csv", GENERIC_READ | GENERIC_WRITE, 0, 0, CREATE_ALWAYS,
			FILE_ATTRIBUTE_NORMAL, 0);
		CloseHandle(F);
		ofstream csv("file1.csv");
		////////////////////////////////////////////////
		//Заполнние вектров строк, csv файла, и таблицы.
		//1
		int n = 20;
		int**m = new int* [20];
		for (int i = 0; i < n; i++)
			m[i]=new int[20];
		//vector stroka1;
		vectorf(&stroka1, n, &m[0], 0);
		for (int i = 0; i <= n; i++)
		{
			if (i == n)
				csv << endl;
			else
				csv << stroka1[i] << ";";
		}
		for (int j = 0; j < n; j++)
		{
			this->table1->Rows[0]->Cells[j]->Value = stroka1[j].ToString();

			table1->Columns[j]->Width = 20;
		}
		//2
		//vector stroka2;
		vectorf(&stroka2, n, &m[0], 1);
		for (int i = 0; i <= n; i++)
		{
			if (i == n)
				csv << endl;
			else
				csv << stroka2[i] << ";";
		}
		for (int j = 0; j < n; j++) 
			this->table1->Rows[1]->Cells[j]->Value = stroka2[j].ToString();
		//3
		//vector stroka3;
		vectorf(&stroka3, n, &m[0], 2);
		for (int i = 0; i <= n; i++)
		{
			if (i == n)
				csv << endl;
			else
				csv << stroka3[i] << ";";
		}
		for (int j = 0; j < n; j++)
			this->table1->Rows[2]->Cells[j]->Value = stroka3[j].ToString();
		//4
		//vector stroka4;
		vectorf(&stroka4, n, &m[0], 3);
		for (int i = 0; i <= n; i++)
		{
			if (i == n)
				csv << endl;
			else
				csv << stroka4[i] << ";";
		}
		for (int j = 0; j < n; j++)
			this->table1->Rows[3]->Cells[j]->Value = stroka4[j].ToString();
		//5
		//vector stroka5;
		vectorf(&stroka5, n, &m[0], 4);
		for (int i = 0; i <= n; i++)
		{
			if (i == n)
				csv << endl;
			else
				csv << stroka5[i] << ";";
		}
		for (int j = 0; j < n; j++)
			this->table1->Rows[4]->Cells[j]->Value = stroka5[j].ToString();
		/////////////////////////////////////////////////
		csv.close();
		////////////////////////////////////////////////
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		/////////////////////////////////////////////////////////////////////////////////////////////////////
		//Сохздание именногово канала для передачи сожержимого файла csv
		char buffer[1024] = { 0 }, bufer[1024];
		DWORD nCount;
		HANDLE F = CreateFile(L"file1.csv", GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL, 0);
		ReadFile(F,buffer,sizeof(buffer), &nCount,0);
		HANDLE hPipe = CreateNamedPipe(L"\\.\\pipe\pipename", PIPE_ACCESS_OUTBOUND, PIPE_TYPE_BYTE | PIPE_READMODE_BYTE,
			PIPE_UNLIMITED_INSTANCES, 1024, 1024, INFINITE, 0);
		WriteFile(hPipe, buffer, sizeof(buffer), 0, 0);
		CloseHandle(hPipe);
		CloseHandle(F);
		ch[100] = sort(&ch[0]);	
		/////////////////////////////////////////////////////////////////////////////////////////////////
		//Создание потоков
		int nt1 = 1, nt2 = 2, nt3 = 3, nt4 = 4, nt5 = 5;
		HANDLE potok1 = CreateThread(0,0, thread1, &nt1, 0, 0);
		HANDLE potok2 = CreateThread(0, 0, thread2, &nt2, 0, 0);
		HANDLE potok3 = CreateThread(0, 0, thread3, &nt3, 0, 0);
		HANDLE potok4 = CreateThread(0, 0, thread4, &nt4, 0, 0);
		HANDLE potok5 = CreateThread(0, 0, thread5, &nt5, 0, 0);
		HANDLE sppot[5];//Массив потоков
		sppot[0] = potok1;
		sppot[1] = potok2;
		sppot[2] = potok3;
		sppot[3] = potok4;
		sppot[4] = potok5;
		WaitForMultipleObjects(5, sppot,TRUE, INFINITE);//Ждём выполение всех потоков
		CloseHandle(potok1);
		CloseHandle(potok2);
		CloseHandle(potok3);
		CloseHandle(potok4);
		CloseHandle(potok5);
		////////////////////////////////////////////////////////////////////////
		//Создание второй таблицы и txt файла
		table2->Columns->Clear();
		table2->ColumnCount = 20;
		table2->RowCount = 5;
		HANDLE TXT = CreateFile(L"res.txt", GENERIC_WRITE, 0, 0, CREATE_ALWAYS,
			FILE_ATTRIBUTE_NORMAL, 0);
		CloseHandle(TXT);
		ofstream txt("res.txt");
		////////////////////////////////////////////////////////////////////////
		//Заполнение таблицы и txt файла
		for (int j = 0; j < 20; j++)
		{
			q = 0;
			this->table2->Rows[0]->Cells[j]->Value = stroka1[j].ToString();
			table2->Columns[j]->Width = 20;
			txt << stroka1[j];
		}
		txt << endl;
		for (int j = 0; j < 20; j++)
		{
			q = 1;
			this->table2->Rows[1]->Cells[j]->Value = stroka2[j].ToString();
			table2->Columns[j]->Width = 20;
			txt << stroka2[j];
		}
		txt << endl;
		for (int j = 0; j < 20; j++)
		{
			q = 2;
			this->table2->Rows[2]->Cells[j]->Value = stroka3[j].ToString();
			table2->Columns[j]->Width = 20;
			txt << stroka3[j];
		}
		txt << endl;
		for (int j = 0; j < 20; j++)
		{
			q = 3;
			this->table2->Rows[3]->Cells[j]->Value = stroka4[j].ToString();
			table2->Columns[j]->Width = 20;	
			txt << stroka4[j];
		}
		txt << endl;
		for (int j = 0; j < 20; j++)
		{
			q = 4;
			this->table2->Rows[4]->Cells[j]->Value = stroka5[j].ToString();
			table2->Columns[j]->Width = 20;
			txt << stroka5[j];
		}
		txt << endl;
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}

