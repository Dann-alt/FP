#include <iostream>
using namespace std;

int main()
{

	// EJERICIO 1

{
	for (int i = 0; i <= 9; i++)
	{
		cout << i << ", ";
	}
	cout << endl;

	for (int i = 9; i >= 0; i--)
	{
		cout << i << ", ";
	}
	cout << endl;
}

	// EJERCICIO 2

{
	for (int i = 1; i <= 99; i++)
	{
		cout << i << ", ";
	}
	cout << endl;
}

	// EJERCICIO 3

{
	for (int i = 2; i <= 100; i++)
		if (i % 2 == 0)
		{
			cout << i << ", ";
		}
	cout << endl;
}

	// EJERCICIO 4

{
	int minimo, maximo;
	cout << "Dame el minimo: ";
	cin >> minimo;

	cout << "Dame el maximo: ";
	cin >> maximo;
	for (int i = minimo; i <= maximo; i++)
	{
		cout << i << ",";
	}
	cout << endl;
}

	// EJERCICIO 5

{
  int minimo, maximo;
	cout << "Dame el minimo: ";
	cin >> minimo;

	cout << "Dame el maximo: ";
	cin >> maximo;
	for (int i = maximo; i >= minimo; i--)
	{
		cout << i << ",";
	}
	cout << endl;
}