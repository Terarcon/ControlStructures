#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Hello Controls!" << endl;

	int t;
	cout << "Введите температуру воздуха: "; cin >> t;
	if (t > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
}