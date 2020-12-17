/*Estructura basica

	Sirve para almacenar varios campos en una variable

*/

#include<iostream>
#include<stdlib.h>

using namespace std;
	//Creando estructura

	struct direccion{//Declarar los datos
		string calle;
		int cp;
		int numero;
	};//Punto y coma final para la estructura

	struct persona{//Declarar los datos
		string nombre;
		direccion d;
	};//Punto y coma final para la estructura


int main(){
	system("color a");
	

	
	
	
	system("pause");
	return 0;
}
