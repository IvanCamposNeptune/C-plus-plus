#include<iostream>
#include<stdlib.h>
#include<string.h>//Para poder usar las cadenas

//Funcion strcat();   para concatenar una cadena con otra.

using namespace std;

int main(){
	
	system("color a");
	
	char cad1[] = "Esto es una cadena"; //Cadena1
	char cad2[] = " de ejemplo";//Cadena2
	char cad3[30];
	
	strcpy(cad3,cad1);// Copia lo que tiene cad1 con cad3, cad3 = "Esto es una cadena"
	
	strcat(cad3,cad2);// Concatena lo que tiene cad2 con cad3, cad3 = "Esto es una cadena de ejemplo"
	
	cout<<cad3<<endl;	
	
	
	system("pause");
	return 0;
	
}
