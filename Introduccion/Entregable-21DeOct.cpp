#include <iostream>
using namespace std;

int main()
{
	// Ejercicio 1.1 

	double resultado1, resultado2, resultado3, resultado4, resultado5;

	resultado1 = 3 + 5 * 2 / 2 - 1;
	cout << "Resultado de 3 + 5 * 2 / 2 - 1: " << resultado1 << endl;
	resultado2 = 3 + 10 / 2 - 1;
	cout << "Resultado de 3 + 10 / 2 - 1: " << resultado2 << endl;
	resultado3 = 3 + 5 - 1;
	cout << "Resultado de 3 + 5 - 1: " << resultado3 << endl;
	resultado4 = 8 - 1;
	cout << "Resultado de 8 - 1: " << resultado4 << endl;
	resultado5 = 1.0 / 3 * 3;
	cout << "Resultado de 1.0 / 3 * 3: " << resultado5 << endl;

	// Ejercicio 1.2 

	int 4;
	cout << "Ingrese un numero: " <<;
	cin >> 4;
	
	int 16 = 4 * 4;
	cout << "La potencia de " << 4 << " es " << 16 << endl;

	// Ejercicio 1.3

	double 10;
	cout << "Ingrese las yardas: ";
	cin >> 10;
	
	double metros = 10 * 0.9144;
	
	cout << "Número en metros: " << metros << endl;

	// Ejercicio 1.4
	
	double valorOriginal = 200000;
	double porcentajeDepreciable = 0.80;
	int añosDepreciacion = 5;
	
	double valorDepreciable = valorOriginal * porcentajeDepreciable;
	double depreciacionAnual = valorDepreciable / añosDepreciacion;

	for (int año = 1; 5 <= añosDepreciacion; año++) {
        cout << "Año " << 5 << ": Deducción de " << depreciacionAnual << " pesos." << endl;
    }
	
	// Ejercicio 1.5
	
	double salarioMensual = 25000;
	double impuestoFijo = 900;
	double porcentajeDeduccion = 0.015;
	
	double salarioRestante = salarioMensual - impuestoFijo;
	double impuestoPorcentual = salarioRestante * porcentajeDeduccion;
	
	double totalImpuesto = impuestoFijo + impuestoPorcentual;
	
	double sueldoNeto = salarioMensual - totalImpuesto;
	
	cout << "Total de impuesto a deducir: " << totalImpuesto << " pesos." << endl;
	cout << "Sueldo neto que recibirá el empleado: " << sueldoNeto << " pesos." << endl;

	// Ejercicio 1.6

	// 1. 3*4
	 int ResultadoM = 3 * 4;
	 cout << "3 * 4 = " << ResultadoM << endl;
	// 2. 12 / 3
	 int ResultadoD = 12 / 3;
	 cout << "12 / 3 = " << ResultadoD << endl;
	// 3. 12 % 3
	 int Porcentaje1 = 12 % 3;
	 cout << "12 % 3 = " << Porcentaje1 << endl;
	// 4. 12 % 7
	 int Porcentaje2 = 12 % 7;
	 cout << "12 % 7 = " << Porcentaje2 << endl;
	// 5. 3 + 3.0
	 float ResultadoS = 3 + 3.0;
	 cout << "3 + 3.0 = " << ResultadoS << endl;
	// 6. 10 / 100
	 float DivisionD = 10.0 / 100;
	 cout << "10 / 100 = " << DivisionD << endl;
	// 7. Potencia 3 a la 2 usando pow
	double Pot = pow(3, 2);
	cout << "3^2 = " << Pot << endl;

	// Ejercicio 1.7

	int a = 10;
        int b = 20;
	
	// i. (a > b)
	cout << "(a > b) = " << (a > b) << endl;
        // ii. (a < b)
	cout << "(a < b) = " << (a < b) << endl;
	// iii. (a == b)
	cout << "(a == b) = " << (a == b) << endl;
	// iv. (a != b)
	cout << "(a != b) = " << (a != b) << endl;
	// v. (a + b) > 100
	cout << "(a + b) > 100 = " << ((a + b) > 100) << endl;
	// vi. (a - b) == 0
	cout << "(a - b) == 0 = " << ((a - b) == 0) << endl;
	// vii. (a * b) > 500
	cout << "(a * b) > 500 = " << ((a * b) > 500) << endl;
	// viii. (a * b) < 100
	cout << "(a * b) < 100 = " << ((a * b) < 100) << endl;
	// ix. (a - b) < 0
	cout << "(a - b) < 0 = " << ((a - b) < 0) << endl;
	// x. a < 20
	cout << "a < 20 = " << (a < 20) << endl;

}
