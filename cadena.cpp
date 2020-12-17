#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();

using namespace std;

void menu(); //Prototipo

int main() {	
	system("color a");
		menu();//Llamada
		
	cout<<"\n";
	system("pause");	
	return 0;
		
}

void menu(){//Definicion
	cout<<"Hola mundo";
}
