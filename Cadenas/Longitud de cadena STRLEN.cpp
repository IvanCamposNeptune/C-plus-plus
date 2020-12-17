#include<iostream>
#include<stdlib.h>
#include<string.h>//Para poder usar las cadenas

//Funcion strlen();   para contar caracteres de una cadena

using namespace std;

int main(){
	
	system("color a");
	
	char palabra[] = "Ivan"; //Cadena con 4 caracteres
	
	int longitud=0;//Se inicializa la longitud en 0
	
	longitud = strlen(palabra);
	
	cout<<"Numero de elementos de la cadena: "<<longitud<<endl;
	
	
	
	
	system("pause");
	return 0;
	
}
