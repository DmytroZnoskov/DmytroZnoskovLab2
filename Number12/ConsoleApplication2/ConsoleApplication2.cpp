#include <iostream>
#include <Windows.h>
using namespace std;

int main()

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Знайти площу прямокутника введіть 1" << endl;
	cout << "Знайти площу трикутника введіть 2" << endl;
	cout << "Знайти площу круга введіть 3" << endl;
	cout << "Число: ";
	int w{};
	cin >> w;
	switch (w)
	{
	case 1:
	{
		cout << "S = a*b" << endl;
		float a{};
		float b{};
		cout << "Введіть число a" << endl;
		cin >> a;
		cout << "Введіть число b" << endl;
		cin >> b;
		cout << "S=" << a * b << endl;
		break;
	}
	case 2:
	{
		cout << "S = 1/2 * a * b" << endl;
		float a{};
		float b{};
		cout << "Введіть число a" << endl;
		cin >> a;
		cout << "Введіть число b" << endl;
		cin >> b;
		double x = ((double)1.0 / 2.0);
		cout << "S=" << x * a * b << endl;
		break;
	}
	case 3:
	{
		cout << "S = pi * R^2" << endl;
		double pi = (3.14);
		float r{};
		cout << "Введіть довжину радіуса" << endl;
		cin >> r;
		cout << "S=" << pi * pow(r, 2) << endl;
		break;

	}
	}

	return 0;
}