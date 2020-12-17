#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"
#include <math.h>

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	//Desarrolle un programa para calcular y visualizar la longitud de la circunferencia y el área de un círculo solicitar el radio al usuario.
	
	cout<<"\tLongitud de la circunferencia y area de un circulo"<<endl;
	
	int radio, LC, A;
	
	cout<<"\nIngresa el valor del radio: "; cin>>radio;
	
	//Longitud de la circunferencia
	
	LC = (2*3.1416*radio);
	
	A = 3.1416*(radio*radio);
	
	cout<<"La longitud es: "<<LC<<endl;
	cout<<"El area del circulo es: "<<A<<endl;
	
		
		
	system("pause");	
	return 0;
		
}
