#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	int num1, fac=1;
	cout << "Este programa indica el valor factorial del n�mero que me va a indicar" << endl;
	cout << "Ingrese n�mero positivo" << endl;
	cin >> num1;
	for (int i=1;i<=num1;i++)
	{
		fac=fac*i;
	}
	cout << "El factorial ser�a:" << fac << endl;
}
