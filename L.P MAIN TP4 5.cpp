#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	float saldo=1000,saldi=0,retiro=0;
	int op=0;
	cout << "Este programa es un cajero automático con las siguientes opciones: " << endl;
	cout << "Consultar saldo 1" << endl;	
	cout << "Depositar dinero 2" << endl;
	cout << "Retirar dinero 3" << endl;
	cout << "Salir 4" << endl;
	cin >> op;
	while (op<4)
	{
	switch (op)
	{
		case 1:
			cout << "Este es tu saldo actual:" << saldo << endl;
			cout << "Consultar saldo 1" << endl;	
		cout << "Depositar dinero 2" << endl;
		cout << "Retirar dinero 3" << endl;
		cout << "Salir 4" << endl;
		cin >> op;
		break;
		case 2:
			cout << "Ingrese dinero" << endl;
			cin >> saldi;
			saldo=saldo+saldi;
		cout << "Consultar saldo 1" << endl;	
		cout << "Depositar dinero 2" << endl;
		cout << "Retirar dinero 3" << endl;
		cout << "Salir 4" << endl;
		cin >> op;
		break;
		case 3:
			cout << "Retire dinero" << endl;
			cin >> retiro;
			saldo=saldo-retiro;
		cout << "Consultar saldo 1" << endl;	
		cout << "Depositar dinero 2" << endl;
		cout << "Retirar dinero 3" << endl;
		cout << "Salir 4" << endl;
		cin >> op;
		break;
		case 4:
			return 0;
		break;
		default:
		cout << "No juegues con migo" << endl;
		cout << "Consultar saldo 1" << endl;	
		cout << "Depositar dinero 2" << endl;
		cout << "Retirar dinero 3" << endl;
		cout << "Salir 4" << endl;
		cin >> op;
	}
}
}
