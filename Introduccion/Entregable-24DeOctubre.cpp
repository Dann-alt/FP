#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// EJERCICIO 1.1

	int numero;
	cout << "Ingrese un numero: ";
	cin >> numero; 
	int resultado = numero * numero;
	cout << "El resultado es: " << resultado << endl; 

	// EJERCICIO 1.2
	
	int x;
	cout << "Ingresa un número entero: ";
	cin >> x;
	cout << "Resultados:" << endl;
	cout << "x = " << x << endl;
	cout << "2x = " << 2 * x << endl;
	cout << "3x = " << 3 * x << endl;
	cout << "4x = " << 4 * x << endl;
	cout << "5x = " << 5 * x << endl;

	// EJERCICIO 1.3

	float pesoKg, pesoLb;
	const float conversion = 2.2;
	
	cout << "Ingresa tu peso en kilogramos: ";
	cin >> pesoKg;
	
	pesoLb = pesoKg * conversion; 
	cout << "Tu peso en libras es: " << pesoLb << " lb" << endl;

	// EJERCICIO 1.4

	float coso1, coso2, coso3; 
	float Total, Promedio;
	
	cout << "Ingrese el primer número: ";
	cin >> coso1;
	
	cout << "Ingrese el segundo número: ";
	cin >> coso2;
	
	cout << "Ingrese el tercer número: ";
	cin >> coso3; 
	
	Total = coso1 + coso2 + coso3; 
	Promedio = Total / 3;
	
	cout << "La suma de los tres números es: " << Total << endl;
	cout << "El promedio de los tres números es: " << Promedio << endl;

	// EJERCICIO 1.5
	
	float cuentaPorfavor, porcentaje, propina;
	
	cout << "Ingresa el total de la cuenta: ";
	cin >> cuentaPorfavor;
	
	cout << "Ingresa el porcentaje de propina que gustes dar: ";
	cin >> porcentaje;
	
	propina = cuentaPorfavor * (porcentaje / 100); 
	cout << "La cantidad de propina que deseas dar es: " << propina << endl;
	
	// EJERCICIO 1.6
	


	// EJERCICIO 1.7
	


	// EJERCICIO 1.8
	


	// EJERCICIO 1.9
	


	// EJERCICIO 1.10


}

