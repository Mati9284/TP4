#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	float vendedores=0, ventas=0;
	char nom [20];
	cout << "Este programa indica las ventas de personas" << endl;
	cout << "Ingrese la cantidad de vendedores" << endl;
	cin >> vendedores;
	for (int i=0; i<vendedores; i++)
	{
		cout << "Ingrese el nombre del vendedor" << endl;
		cin >> nom;
		cout << nom << " ingrese sus ventas" << endl;
		cin >> ventas;
		cout << nom << " tiene " << ventas << " ventas" << endl;
	}
	return 0;	
}
