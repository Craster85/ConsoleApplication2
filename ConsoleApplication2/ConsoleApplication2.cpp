#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	//Задание 1
	int t;
	cout << "Введите количество в секундах: ";
	cin >> t;
	int h = t / 3600;
	int min = t / 60 - h * 60;
	int sec = t - min * 60 - h *3600;
	cout << h << " часов " << min << " минут " << sec << " секунд" << endl;
	//Задание 3
	int day;
	cout << "Введите количество дней: ";
	cin >> day;
	if (day >= 7)
	{
		int week = day / 7;
		day %= 7;
		cout << week << " недель " << day << " дней" << endl;
	}
	else
	{
		cout << day << " дней" << endl;
	}
	//Задание 3
	double b, m;
	int a;
	cout << "Введите денежную еденицу в виде дробного числа: ";
	cin >> m;
	a = m;
	b = (m - a) * 100;
	cout << a << " рублей  " << b << "  копеек" << endl;

	return 0;
}
