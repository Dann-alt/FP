#include <iostream>
using namespace std;

int main()
{
	// Operaciones Aritmeticas

	// Enteros
	int n1 = 10;
	int n2 = 20;
	int n3;

	// Floats
	float f1 = 1.5;
	float f2 = 5.2;
	float f3;

	// 1.Adicion
	n3 = n1 + n2;
	cout << "Resultados suma enteros: " << n3 << endl;
	f3 = f1 + f2;
	cout << "Resultado suma flotantes: " << f3 << endl;

	// 2.Sustraccion
	n3 = n1 - n2;
	cout << "Resutado resta enteros: " << n3 << endl;
	f3 = f1 - f2;
	cout << "Resultado resta flotantes: " << f3 << endl;

	// 3. Multiplicacion
	n3 = n1 * n2;
	cout << "Resultado multiplicacion enteros: " << n3 << endl;
	f3 = f1 * f2;
	cout << "Resultado multiplicacion flotantes: " << f3 << endl;

	// 4. Divison
	n3 = n2 / n1;
	cout << "Resultado division enteros: " << n3 << endl;
	f3 = f1 / f2;
	cout << "Resultado division flotantes: " << f3 << endl;

	// 5. Modulo (Residuo de la division)
	n3 = n2 % n1;
	cout << "Resultado modulo: " << n3 << endl;

	// 6. Operaciones Mixtas
	f3 = n1 + f1;
	cout << "Resultado suma mixta: " << f3 << endl;
	f3 = n2 - f2; 
	cout << "Resultado resta mixta: " << f3 << endl;
	f3 = n1 * f2;
	cout << "Resultado multiplicacion mixta: " << f3 << endl;
	f3 = n2 / f1;
	cout << "Resultado division mixta: " << f3 << endl;
	f3 = (n1 + n2) * f1 / f2;
	cout << "Resultado operacion mixta: " << f3 << endl;

	// 7. Mas ejemplos con floats
	f3 = f1 + 10.3;
	cout << "Resultado suma flotantes: " << f3 << endl;
	f3 = f2 * 2.5;
	cout << "Resultado multiplicacion flotantes: " << f3 << endl;
	f3 = f1 / 2.0;
	cout << "Resultado division flotantes: " << f3 << endl;
	f3 = f2 - 3.2;
	cout << "Resultado resta flotantes: " << f3 << endl;

	// 8. Combinacion de numeros enteros y flotantes
	f3 = n1 + f1 - n2 / 2.0 + f2 * 1.5;
	cout << "Resultado operacion mixta entero y flotantes: " << f3 << endl;

	// 9. Combinaciones mas complejas
	f3 = (n1 + f1) * (n2 - f2) / (n1 * f2);
	cout << "Resultado operacion compleja: " << f3 << endl; 

	// 10. Operaciones aritmeticas de tipo mixto
	// 11. Numeros negativos
	// 12. Incremento y decremento
}
