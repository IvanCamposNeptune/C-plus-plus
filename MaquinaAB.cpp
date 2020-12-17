#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

int main() {
	system("color a");
	for (;;) {
		char palabra[30];
		system("cls");
		cout << "Ingresa la palabra: ";
		cin >> palabra;
		int band = 0;
		int num = strlen(palabra);
		int estado = 0;
		for (int i = 0; i < num; i++)
		{
			switch (palabra[i]) {
			case 'a':
				if (estado == 0) {
					estado = 1;
				}
				if (estado == 1) {
					estado = 1;
				}
				if (estado == 2) {
					estado = 0;
				}
				break;
			case 'b':
				if (estado == 0) {
					estado = 2;
				}
				if (estado == 1) {
					estado = 1;
				}
				if (estado == 2) {
					estado = 2;
				}
				break;
			default:
				band++;
				break;
			}
		}
		if ((estado != 0) && (band==0)) {
			system("cls");
			cout << "La palabra "<< palabra << " es aceptada\n\n";
		}
		else {
			system("cls");
			cout << "La palabra " << palabra << " NO es aceptada\n\n";
		}
		system("pause");
	}
}
