#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	
	//Desarrolla un diagrama de flujo y programa que permita convertir grados Farenheit a Celsius y viceversa.
	
	int Celsius, Farenheit, ConverFC, ConverCF;
	
	cout<<"\tconvertir grados Farenheit a Celsius y viceversa"<<endl;
	
	cout<<"\nIngresa grados Farenheit: "; cin>>Farenheit;
	
	cout<<"\nIngresa grados Celsius: "; cin>>Celsius;
	
	
	//Operacion de conversion de Farenheit a Celsius
	
	ConverFC = (Farenheit-32)/1.8;
	
	//Operacion de conversion de Celsius a Farenheit
	
	ConverCF = (Celsius*1.8)+32;
	
	//Impresion de resultados
	
	cout<<"\n\nLa conversion de Farenheit a Celsius es: "<<ConverFC<<endl;
	
	cout<<"\nLa conversion de Celsius a Farenheit es: "<<ConverCF<<endl;
	
	
		
		
	system("pause");	
	return 0;
		
}
