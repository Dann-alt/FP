#include <iostream>
using namespace std;

//EJERCICIO 1

int main()
{
	int numeros[10];
	int num, i = 0;
	num = -1;
	while (num != 0)
	{
		cout << "Numero: ";
		cin >> num;
		if (num == 0 and i > 9)
		{
			break;
		}
		numeros[i] = num;
		i++;
	}
	for (int elemento : numeros)
	{
		cout << elemento << endl; 
	}
}

//EJERCICIO 2
{
	int numeros[10]
	{ 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };
	vector <int> vnum
	{ 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };
	int mayor = -1; 
	for (int i = 0; i <= 9; i++)
	{
		if (numeros[i] > mayor)
		{
			mayor = numeros[i];
		}
	}
	cout << "El mayor es: " << mayor << endl;
}
