#include <iostream>
#include <stdlib.h> //para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h> //para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	

	setlocale(LC_CTYPE, "Spanish"); //Se manda llamar las funciones de la biblioteca locale, en español

	system("color a");
	
	cout<<"Mañana el camión de la basura pasará"<<endl;
		
		
	system("pause");	
	return 0;
		
}
