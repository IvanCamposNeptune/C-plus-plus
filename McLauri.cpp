/*Serie de McLauri*/
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

double fac(double n)
{
	double fact = 1;
	for (int i = 1; i <= n ; i++)
	{
		fact = fact*i;
	}
	return (fact);
}

int main() {
	
	system("color a");
	
	for ( ; ; ) {
		char res;
		int n;
		double x;
		long double resultado, temp, tot = 1;
		system("cls");
		cout<<"Ingresa el valor para 'x': ";
		cin >> x;
		cout<<"Ingresa el numero de iteraciones: ";
		cin >> n;
		cout << "1";
		for (int i = 1; i <= n; i++)
		{
			resultado = (pow(x, i)) / (fac(i));
			printf(" + %lf", resultado);
			tot = tot + resultado;
		}
		cout<<" = %lf", tot;
		cout << endl << "Desea realizar otra operacion? S/N: "; cin >> res;
		if (toupper(res) == 'N'){ break; }
	}
	system("pause");
	return 0;
}
