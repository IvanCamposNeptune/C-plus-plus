/*Plantillas de Funcion
	Sacar el valor absoluto de un numero, los hace positivos
*/

#include<iostream>	
#include<conio.h>
using namespace std;

//Prototipo de Funcion

template <class TIPOD>//TIPOD engloba a cualquier tipo de datom "Prfijo de la plantilla"
void mostrarAbs(TIPOD numero);// Se declara la funcion y para numero se le declara de tipo de numero

int main(){
	system("color a");
	//num1 num2 y num3 serviran en la funcion sin tener que declarar como entero flotante o double
	int num1 = 4;
	float num2 = -56.67;
	double num3 = -123.5678;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	//Se engloba el tipo de dato en TIPOD
	
	getch();
	return 0;
}

//Definicion de Funcion

template <class TIPOD>//Lo mismo de arriba pero se abre limitador de ambito en vez de ;
void mostrarAbs(TIPOD numero){
	
	if(numero<0){
		numero = numero * -1;
	}
	
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
	
}

