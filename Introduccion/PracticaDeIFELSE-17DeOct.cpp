#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cout << "Dame un valor ";
	cin >> num; 
	cout << endl;
	if (num % 2 == 0) // nunca poner punto y coma o ; 
	{
		cout << "par " << endl;
	}
	else // nunca lleva condicion
	{
		cout << "impar " << endl; 
	}

}
