#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	//Datos de un alumno
	int edad;
	string nombre;
	string apellido;
	string rfc;
	
	cout<<"Digita tu edad: "<<endl; cin>>edad;
	cout<<"Digita tu nombre: "<<endl; cin>>nombre;
	cout<<"Digita tu apellido: "<<endl; cin>>apellido;
	cout<<"Digita tu rfc: "<<endl; cin>>rfc;
	
	cout<<"\nTu edad es: "<<edad<<endl;
	cout<<"Tu nombre es: "<<nombre<<endl;
	cout<<"Tu apellido es: "<<apellido<<endl;
	cout<<"Tu rfc es: "<<rfc<<endl;	
		
	system("pause");	
	return 0;
		
}
