#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
using namespace std;

int main() {
	system("color a");

	while (true) {
		char palabra[20];
		system("cls");
		cout << "ingrese una palabra: ";
		cin >> palabra;
		int num = strlen(palabra);
		int estado = 0;
		bool band=false;
		for (int i = 0; i < num; i++) {
			switch (palabra[i])
			{
			case 'a':
				if (estado == 0) {
					estado = 1;
				}
				else if (estado == 1) {
					estado = 2;
				}
				else if (estado == 2) {
					estado = 1;
				}
				break;
			case 'b':
				if (estado == 0) {
					estado = 2;
				}
				else if (estado == 1) {
					estado = 1;
				}
				else if (estado == 2) {
					estado = 2;
				}
				break;
			default:
				band = true;
				break;
			}
		}

		if ((estado == 2) && (band==false) ){
			cout << "LA PALABRA ES CORRECTA";

		}
		else {
			cout << "LA PALABRA NO ES CORRECTA";
		}
		system("pause>null");

	}


}

