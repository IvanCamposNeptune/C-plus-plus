/*Estructura basica

	Sirve para almacenar varios campos en una variable

*/

#include<iostream>
#include<stdlib.h>

using namespace std;
	//Creando estructura

	struct Persona{//Declarar los datos
		char nombre[20];
		int edad;
	}//Rellenar los datos, conforme el orden en que fueron declarados {nombre,edad}
	persona1={"Ivan",18},// la coma es para separar la variable persona1 con la variable persona2
	persona2={"Lucy",18};// punto y compa para terminar con las variables
	;//Punto y coma final para la estructura



int main(){
	system("color a");
	
	cout<<"Nombre1: "<<persona1.nombre<<endl;//variable.dato a obtener
	cout<<"Edad1: "<<persona1.edad<<endl;
	
	cout<<"\n";
	
	cout<<"Nombre2: "<<persona2.nombre<<endl;//variable.dato a obtener
	cout<<"Edad2: "<<persona2.edad<<endl;
	cout<<"\n";
	

	
	
	system("pause");
	return 0;
}
