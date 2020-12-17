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
		bool band = false;
		int num = strlen(palabra);
		int estado = 0;
		for (int i = 0; i < num; i++) {
			switch (palabra[i])
			{
			case '0':
				if (estado == 0) {
					estado = 1;
				}
				else if (estado == 1) {
					estado = 2;
				}
				else if (estado == 2) {
					estado = 2;
				}
				break;
			case '1':
				if (estado == 0) {
					estado = 3;
				}
				else if (estado == 1) {
					estado = 3;
				}else if (estado == 3) {
					estado = 3;
				}
				break;
			default:
				band = true;
				break;
			}
		}

		if ((estado == 2) && (band == false)) {
			cout << "---PALABRA ACEPTADA---";

		}
		else {
			cout << "---PALABRA NO ACEPTADA---";
		}
		system("pause>null");

	}


}
