#include <iostream>
using namespace std; 

int main()
{

  //EJERCICIO 1.21
  
  std::string respuesta;
  
  do {
    std::cout << "¿Quieres salir del ciclo?: ";
    std::cin >> respuesta;
    
    if (respuesta != "SI" && respuesta != "NO") 
    {
      std::cout << "Respuesta inválida. Por favor, contesta con 'SI' o 'NO'." << std::endl;
    }
  
  } while (respuesta != "SI");
  std::cout << "Has salido del ciclo." << std::endl;
  

  //EJERCICIO 1.22
  
  char opcion;
  int numero1, numero2, total;

    do {
        std::cout << "\nSeleccione una operacion:\n";
        std::cout << "(+) Suma\n";
        std::cout << "(-) Resta\n";
        std::cout << "(*) Multiplicacion\n";
        std::cout << "(/) Division\n";
        std::cout << "(%) Residuo\n";
        std::cout << "(s) Salir del menu\n";
        std::cout << "Opcion: ";
        std::cin >> opcion;

        if (opcion == 's') {
            break;
        }

        std::cout << "Ingrese el primer numero: ";
        std::cin >> numero1;
        std::cout << "Ingrese el segundo numero: ";
        std::cin >> numero2;

        total = 0;

        switch (opcion) {
        case '+':
            total = numero1 + numero2;
            std::cout << "Resultado de esta suma: " << total << std::endl;
            break;
        case '-':
            total = numero1 - numero2;
            std::cout << "Resultado de esta resta: " << total << std::endl;
            break;
        case '*':
            total = numero1 * numero2;
            std::cout << "Resultado de esta multiplicacion: " << total << std::endl;
            break;
        case '/':
            if (numero2 != 0) {
                total = numero1 / numero2;
                std::cout << "Resultado de esta division: " << total << std::endl;
            }
            else {
                std::cout << "Error: Division por cero lamentablemente no permitida." << std::endl;
            }
            break;
        case '%':
            if (numero2 != 0) {
                total = numero1 % numero2;
                std::cout << "Resultado de este residuo: " << total << std::endl;
            }
            else {
                std::cout << "Error: Division por cero lamentablemente no permitida." << std::endl;
            }
            break;
        default:
            std::cout << "Opcion invalida, por favor seleccione una opcion valida." << std::endl;
            break;
        }

        numero1 = 0;
        numero2 = 0;
        total = 0;

    } while (opcion != 's');

  
  //EJERCICIO 1.23
  
  std::string tarjeta, pin;
  double saldo = 3450.00;
  char opcion;
  
  std::cout << "Inserte la tarjeta: ";
  std::cin >> tarjeta;
  
  if (tarjeta != "banda" && tarjeta != "chip") 
  {
    std::cout << "Tarjeta invalida. Proceso finalizado." << std::endl;
  }
  
  std::cout << "Ingrese su PIN de 4 digitos: ";
  std::cin >> pin;
  
  if (pin.length() != 4 || pin != "1234") 
  {
    std::cout << "PIN invalido. Proceso finalizado." << std::endl;
  }
  
  do {
    std::cout << "\n--- Menu de Operaciones ---\n";
    std::cout << "1. Consultar saldo\n";
    std::cout << "2. Retirar efectivo\n";
    std::cout << "3. Cancelar\n";
    std::cout << "Seleccione una opcion: ";
    std::cin >> opcion;
    
    switch (opcion) {
      case '1': 
        std::cout << "Su saldo actual es de: $" << saldo << " pesos" << std::endl;
        break;
      
      case '2': {
        double monto;
        std::cout << "Ingrese la cantidad a retirar: ";
        std::cin >> monto;
        
        if (monto > saldo) {
          std::cout << "Fondos insuficientes ni modo. Proceso terminado." << std::endl;
          break;
        }
        else 
        {
          saldo -= monto;
          std::cout << "Retiro exitoso. Su saldo restante es: $" << saldo << " pesos" << std::endl;
        }
        break;
      }
      
      case '3':
        std::cout << "Operacion cancelada. Gracias por usar el cajero." << std::endl;
        break;
      
      default:
        std::cout << "Opcion invalida. Por favor, seleccione una opción valida." << std::endl;
        break;
    }
  
  } while (opcion != '3');
  std::cout << "Gracias por usar el cajero. Hasta pronto UwU." << std::endl;

  //EJERCICIO 1.24
  
}
