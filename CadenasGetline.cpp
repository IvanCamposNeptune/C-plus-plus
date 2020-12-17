#include <iostream>
#include "stdio.h"
#include <string.h>


using namespace std;

const unsigned MAX1=40;
const unsigned MAX2=80;


int main() {	
	
	char cadCorta [MAX1+1];
	char cadLarga [MAX2+1];
	char buscarCar,rempCar;
	
	cout<<"Ingresa la primera cadena: "<<endl;
	cin.getline(cadLarga,MAX2);//Get line almacena datos
	cout<<"Ingresa la segunda cadena: "<<endl;
	cin.getline(cadCorta,MAX1);
	
	cout<<"Cadena 1 tiene: "<<strlen(cadLarga)<<" caracteres"<<endl;// Strlen cuenta los caracteres incluyendo espacios
	cout<<"Cadena 2 tiene: "<<strlen(cadCorta)<<" caracteres"<<endl;
	
	strcat(cadLarga,cadCorta);// Junta lo de cadena larga y lo de cadena corta y se almacena en cadena larga 
	cout<<"Las cadenas concatenadas son: "<<endl<<cadLarga<<endl;//aqui solo se improme cadena larga que es la concatenacion de cadena larga y cadena corta
	cout<<"La cadena nueva tiene "<<strlen(cadLarga)<<" caracteres"<<endl;	 
	
	
	
	cout<<"Ingresa el caracter a buscar: "; cin>>buscarCar;
	cout<<"Ingresa el caracter a remplazar: "; cin>>rempCar;
	
	for(int i=0; i<strlen(cadLarga); i++)
	if(cadLarga[i]==buscarCar)
	cadLarga[i]=rempCar;
	
	cout<<"La cadena nueva es: "<<endl<<cadLarga;
	

	
		
		
	system("pause");
		
	return 0;
	
	
}
