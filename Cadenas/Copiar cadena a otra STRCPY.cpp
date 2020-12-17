#include<iostream>
#include<stdlib.h>
#include<string.h>//Para poder usar las cadenas

//Funcion strcpy();   para copiar caracteres de una cadena a otra

using namespace std;

int main(){
	
	system("color a");
	
	char nombre[] = "Ivan"; //Cadena1
	char nombre2[20]; //Cadena2
	
	strcpy(nombre2,nombre);//cadena vacia, cadena que quieres copiar a la vacia
	
	cout<<"Cadena copiada: "<<nombre2<<endl;
	
	
	
	
	system("pause");
	return 0;
	
}
