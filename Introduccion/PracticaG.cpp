#include <iostream>
using namespace std;

int main()
{
	int naturales[10]{ 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i <= 10; i++)
	{
		cout << naturales[10] << ", ";
	}
	cout << endl; 
}

	// EJERCICIO 1. MESES DEL AÑO
{
	string nombreMeses[12]{ "ene", "feb", "mar", "abr", "may", "jun", "jul", "ago", "sep", "oct", "nov", "dic" };
	for (int i = 0; i < 12; i++) 
    {
        cout << nombreMeses[i] << ",";
    }
    cout << endl;
}

	//EJERCICIO 2. PLANETAS DEL SISTEMA SOLAR
{
	string nombrePlanetas[8]{ "mercurio", "venus", "tierra", "marte", "jupiter", "saturno", "urano", "neptuno" };
	for (int i = 0; i < 8; i++) 
	{
		cout << nombrePlanetas[i] << ",";
	}
	cout << endl;
}
 
}
