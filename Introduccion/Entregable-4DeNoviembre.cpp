#include <iostream>
using namespace std; 

int main()
{
    //EJERCICIO 1.16

    int A, B, C;

    cout << "Ingresa el primer número: ";
    cin >> A;
    cout << "Ingresa el segundo número: ";
    cin >> B;
    cout << "Ingresa el tercer número: ";
    cin >> C;

    int mayor;

    if (A >= B && A >= C)
    {
        mayor = A;
    }
    else if (B >= A && B >= C)
    {
        mayor = B;
    }
    else
    {
        mayor = C;
    }

    cout << "El número más grande es: " << mayor << endl;

  //EJERCICIO 1.17

  //EJERCICIO 1.18

  //EJERCICIO 1.19

  //EJERCICIO 1.20

}
