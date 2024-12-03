#include <iostream>
#include <cmath> 

void calcularAreaCirculo();
void calcularAreaRectangulo();
void calcularAreaTriangulo();

int main() {
    int opcion;

    do {
        std::cout << "========== Calculadora de Áreas ==========\n";
        std::cout << "1. Calcular área de un círculo\n";
        std::cout << "2. Calcular área de un rectángulo\n";
        std::cout << "3. Calcular área de un triángulo\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                calcularAreaCirculo();
                break;
            case 2:
                calcularAreaRectangulo();
                break;
            case 3:
                calcularAreaTriangulo();
                break;
            case 4:
                std::cout << "¡Gracias por usar la calculadora de áreas!\n";
                break;
            default:
                std::cout << "Opción no válida. Intente nuevamente.\n";
        }
        std::cout << "\n"; // Espacio entre iteraciones
    } while (opcion != 4);

}

//CALCULAR AREA DEL CIRCULO
void calcularAreaCirculo() {
    double radio, area;
    std::cout << "Ingrese el radio del círculo: ";
    std::cin >> radio;

    area = M_PI * std::pow(radio, 2); // Fórmula: π * radio^2
    std::cout << "El área del círculo es: " << area << "\n";
}

//CALCULAR AREA DEL RECTANGULO
void calcularAreaRectangulo() {
    double base, altura, area;
    std::cout << "Ingrese la base del rectángulo: ";
    std::cin >> base;
    std::cout << "Ingrese la altura del rectángulo: ";
    std::cin >> altura;

    area = base * altura; // Fórmula: base * altura
    std::cout << "El área del rectángulo es: " << area << "\n";
}

//CALCULAR AREA DEL TRIANGULO
void calcularAreaTriangulo() {
    double base, altura, area;
    std::cout << "Ingrese la base del triángulo: ";
    std::cin >> base;
    std::cout << "Ingrese la altura del triángulo: ";
    std::cin >> altura;

    area = (base * altura) / 2; // Fórmula: (base * altura) / 2
    std::cout << "El área del triángulo es: " << area << "\n";
}
