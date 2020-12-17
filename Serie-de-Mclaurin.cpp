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
	for ( ; ; ) {
		char res;
		int n;
		double x;
		long double resultado, temp, tot = 1;
		system("cls");
		printf("Ingresa el valor para 'x': ");
		cin >> x;
		printf("Ingresa el numero de iteraciones: ");
		cin >> n;
		cout << "1";
		for (int i = 1; i <= n; i++)
		{
			resultado = (pow(x, i)) / (fac(i));
			cout<<" + "<<resultado;
			tot = tot + resultado;
		}
		cout<<" = "<<tot;
		cout << endl << "Desea realizar otra operacion? S/N: "; cin >> res;
		if (toupper(res) == 'N'){ break; }
	}
	system("pause>null");
	return 0;
}
