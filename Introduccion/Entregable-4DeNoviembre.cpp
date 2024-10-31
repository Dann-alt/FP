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

    int Hour, Minutes, Seg;

    cout << "Ingrese la hora: ";
    cin >> Hour;
    cout << "Ingrese los minutos: ";
    cin >> Minutes;
    cout << "Ingrese los segundos: ";
    cin >> Seg;

    if (Hour < 0 || Hour > 23) 
    {
        cout << "Hora inválida. Debe estar entre 0 y 23" << endl;
        return 1;
    }
    if (Minutes < 0 || Minutes > 59) 
    {
        cout << "Minutos inválidos. Deben estar entre 0 y 59" << endl;
        return 1;
    }
    if (Seg < 0 || Seg > 59) 
    {
        cout << "Segundos inválidos. Deben estar entre 0 y 59." << endl;
        return 1;
    }
    
    Seg++;
    if (Seg == 60) {
        Seg = 0;

    Minutes++;
    if (Minutes == 60) {
        Minutes = 0;

    Hour++;
    if (Hour == 24) {
        Hour = 0;
                }
             }
          }

    cout << "La hora un segundo más tarde es: ";
    cout << (Hour < 10 ? "0" : "") << Hour << ":"
        << (Minutes < 10 ? "0" : "") << Minutes << ":"
        << (Seg < 10 ? "0" : "") << Seg << endl;

}

  //EJERCICIO 1.19

    //EJERCICIO 1.19 

    double Distancia;
    int Estancia;
    double PrecioKm = 2.5;
    double PrecioOriginal;
    double PrecioFinal;

    cout << "Ingrese la distancia a recorrer: ";
    cin >> Distancia;
    cout << "Ingrese el número de días de estancia: ";
    cin >> Estancia;

    PrecioOriginal = Distancia * PrecioKm * 2;

    if (Estancia > 7 && Distancia > 800)
    {
        PrecioFinal = PrecioOriginal * 0.7;
    }
    else
    {
        PrecioFinal = PrecioOriginal;
    }

    cout << "El precio del boleto de ida y vuelta es: $" << PrecioFinal << endl;

  //EJERCICIO 1.20

}
