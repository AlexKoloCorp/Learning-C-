#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

void switch_lesson();
void while_lesson();
void for_lesson();

 int GetSum(int a, int b)
	{
		//int [] rangeArr = new int[];
		int sum = 0;
		if (a == b)
		{
			cout<<"both variables are same";
		}
		else if (a < b) {
			for (int i = a; i <= b; i++) {
				sum += i;
			}
		}
		else if (a > b) {
			for (int i = a; i >= b; i--) {
				sum += i;
			}
		}
		cout<<"sum is equal: "<<sum;
		return sum;
	}


int main()
{
	setlocale(LC_ALL, "");
	

	//GetSum(-4, 5);
	//for_lesson();
	//while_lesson();
	//switch_lesson();
	system("pause");
}
void for_lesson() {
	int width, height;
	cout << "enter width and height of phigura" << endl;
	cin >> width >> height;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void while_lesson() {
	cout << "введите диапазон" << endl;
	int start, end, sum = 0;
	cin >> start >> end;
	while (start < end)
	{
		if (start % 2 != 0) {
			sum += start;
		}
		start++;
	}
	cout << "sum is equal:" << sum;
	/////////////////////////////////////////////////////////////////
	int amounth, viewType, i = 0;
	char symbol;
	cout << "Введите количество выводимых символов" << endl;
	cin >> amounth;
	cout << "Введите символ для вывода" << endl;
	cin >> symbol;
	cout << "Введите введите тип вывода (строка или столбик)" << endl;
	cout << "\t1. строка" << endl;
	cout << "\t2. столбик" << endl;
	cin >> viewType;
	while (i < amounth)
	{
		if (viewType == 1) {
			cout << symbol;
		}
		else if (viewType == 2)
		{
			cout << symbol << endl;
		}
		i++;
	}
}
void switch_lesson() {
	int a, b, switcher;
	cout << "Вас приветствует калькулятор, введите выбирите операцию!" << endl;
	cout << "\t(1) сложение" << endl;
	cout << "\t(2) вычитание" << endl;
	cout << "\t(3) умножение" << endl;
	cout << "\t(4) деление" << endl;
	cout << "\t(5) возведение в степень" << endl;
	cin >> switcher;
	switch (switcher)
	{
	case 1:
		cout << "Вы выбрали " << switcher << " операцию" << endl;
		cout << "Введите числа" << endl;
		cin >> a >> b;
		cout << a + b;
		break;
	case 2:
		cout << "Вы выбрали " << switcher << " операцию" << endl;
		cout << "Введите числа" << endl;
		cin >> a >> b;
		cout << a - b;
		break;
	case 3:
		cout << "Вы выбрали " << switcher << " операцию" << endl;
		cout << "Введите числа" << endl;
		cin >> a >> b;
		cout << a * b;
		break;
	case 4:
		cout << "Вы выбрали " << switcher << " операцию" << endl;
		cout << "Введите числа" << endl;
		cin >> a >> b;
		if (a == 0 || b == 0) {
			cout << "Нельзя делить на 0!" << endl;
		}
		else
		{
			cout << (float)a / b;
		}
		break;
	case 5:
		cout << "Вы выбрали " << switcher << " операцию" << endl;
		cout << "Введите числа" << endl;
		cin >> a >> b;
		break;
	}
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
