#include <iostream>
#include <stdlib.h> //para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h> //para usar el idioma espa�ol "caracteres especiales"

using namespace std;


int main() {	

	setlocale(LC_CTYPE, "Spanish"); //Se manda llamar las funciones de la biblioteca locale, en espa�ol

	system("color a");
	
	cout<<"Ma�ana el cami�n de la basura pasar�"<<endl;
		
		
	system("pause");	
	return 0;
		
}
