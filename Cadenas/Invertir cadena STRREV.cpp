#include<iostream>
#include<stdlib.h>
#include<string.h>//Para poder usar las cadenas

//Funcion strrev();   para invertir una cadena.

using namespace std;

int main(){
	
	system("color a");
	
	char cad[] = "Ivan"; //Cadena1

	
	strrev(cad);// Invierte lo que tiene la cadena cad
		
	cout<<cad<<endl;	
	
	
	system("pause");
	return 0;
	
}
