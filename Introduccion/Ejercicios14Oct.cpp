#include <iostream>
using namespace std;

int main()
{
	cout << boolalpha;
	bool bb = True;
	cout << bb << endl;

	char opcion1 = 'a';
	cout << opcion1 << endl;

	// Enteros
	int n1 = 10;
	int n2 = 20;

	// Floats
	float f1 = 1.5;
	float f2 = 5.2;

	cout << boolalpha; // Imprime true en lugar de 1

	// Operaciones con desigualdad, comparaciones, magnitud

	// 1. Igualdad
	cout << "(n1 == n2): " << (n1 == n2) << endl;
	cout << "(f1 == f2): " << (f1 == f2) << endl;

	// 2. Desigualdad
	cout << "(n1 != n2): " << (n1 != n2) << endl;
	cout << "(f1 != f2): " << (f1 != f2) << endl;

	// 3. Mayor que
	cout << "(n1 > n2): " << (n1 > n2) << endl;
	cout << "(f1 > n2): " << (f1 > f2) << endl;

	// 4. Menor que
	cout << "(n1 < n2): " << (n1 < n2) << endl;
	cout << "(f1 < f2): " << (f1 < f2) << endl;

	// 5. Mayor o igual que
	cout << "(n1 >= n2): " << (n1 >= n2) << endl;
	cout << "(f1 >= f2): " << (f1 >= f2) << endl;

	// 6. Menor o igual que
	cout << "(n1 <= n2): " << (n1 <= n2) << endl;
	cout << "(f1 <= f2): " << (f1 <= f2) << endl;

	// 7. Comparaciones de tipo mixto
	cout << "(n1 > f2): " << (n1 > f2) << endl;
	cout << "(f1 < n2): " << (f1 < n2) << endl;

	// 8. Valores negativos
	cout << "(n1 > -n2): " << (n1 > -n2) << endl;
	cout << "(f1 < -f2): " << (f1 < -f2) << endl;

	// 9. Combinacion de comparaciones
	// Tambien se puede ocupar la palabra and en lugar de && 
	// Tambien se puede usar la palabra or en lugar de || 
	cout << "((n1 < n2) && (f1 > f2)): " << ((n1 < n2) && (f1 > f2)) << endl;
	cout << "((n1 == 10) || (f1 == 5.2)): " << ((n1 == 10) || (f1 == 5.2)) << endl;

	// 10. Comparaciones anidadas
	cout << "(n1 > n2 - 10): " << (n1 > n2 - 10) << endl;
	cout << "(f1 <= f2 + 10.5): " << (f1 <= f2 + 10.5) << endl;

	// 11. Comparacion con constantes 
	cout << "(n1 == 10): " << (n1 == 10) << endl;
	cout << "(f1 == 5.2): " << (f1 == 5.2) << endl;

	// 12. Comparacion con los resultados de las operaciones aritmeticas
	cout << "((n1 + n2) < (f1 * f2)): " << ((n1 + n2) < (f1 * f2)) << endl;
	cout << "((n1 + n2) >= (f1 / f2)): " << ((n1 + n2) >= (f1 / f2)) << endl;

	// 13. Comparaciones de resultados negativos y positivos 
	cout << "((-n1) < n2): " << ((-n1) < n2) << endl;
	cout << "((-f1) < f2): " << ((-f1) < f2) << endl;

	// 14. Combinacion de aritmeticas y comparacion
	cout << "((n1 * n2) > (f1 - f2)): " << ((n1 * n2) > (f1 - f2)) << endl;
	cout << "((n2 / n1) <= (f1 + f2)): " << ((n2 / n1) <= (f1 + f2)) << endl;

	// 15. Comparaciones encadenadas
	cout << "(n1 < n2 and n2 < f1): " << (n1 < n2 and n2 < f1) << endl;
	cout << "(f2 > f1 and f1 < n1): " << (f2 > f1 and f1 < n1) << endl;

	// 16. Comparacion de modulos
	cout << "((n2 % n1) == 0): " << ((n2 % n1) == 0) << endl; 

	// Operadores logicos
	bool p = true, q = false; 

	// 17. Logico AND
	cout << "(p and q): " << (p and q) << endl;

	// 18. OR logico 
	cout << "(p or q): " << (p or q) << endl; 

	// 19. Logico NOT 
	// Puedes usar la palabra not en lugar de !
	cout << "(!p): " << (not (p)) << endl;

	// 20. Combinacion de AND y NOT 
	cout << "(p and not(q)): " << (p and not(q)) << endl; 

	// 21. Doble NOT
	cout << "(not(not(q))): " << (not(not(q))) endl; 

	// 22. Operaciones mixtas
	cout << "(not(p and q) or (p or not (q))): " << (not(p and q) or (p or not (q))) << endl; 

	// 23. Asignacion de variables con operadores logicos

	// 24. 
}
