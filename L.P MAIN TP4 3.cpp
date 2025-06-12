#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	float num1=1, numeronormal=0,multi=1, t=0;
	int retornar=0;
	cout << "Este programa indica " << endl;
	cout << "Ingrese un número positivo" << endl;
	cin >> num1;
	numeronormal=num1;
	for (int i=1; i<=num1; i++)
	{
		t=numeronormal*i;
		cout << numeronormal << "x"<< i << "=" << t << endl;
	}
	return 0;
}
