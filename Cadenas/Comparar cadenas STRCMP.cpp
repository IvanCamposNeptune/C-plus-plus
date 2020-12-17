#include<iostream>
#include<stdlib.h>
#include<string.h>//Para poder usar las cadenas

//Funcion strcpm();   para comparar una cadena con otra, se usa en condicionales.

using namespace std;

int main(){
	
	system("color a");
	
	char palabra1[] = "Ivan"; //Cadena1
	char palabra2[] = "Ivan";//Cadena2
	
	if(strcmp(palabra1,palabra2)==0){//compara si la cadena palabra1 es igual a la cadena palaba2
		cout<<"Ambas cadenas son iguales\n";
	}

	

	
	
	
	system("pause");
	return 0;
	
}
