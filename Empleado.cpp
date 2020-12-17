/*Estructura basica

	Sirve para almacenar varios campos en una variable

*/

#include<iostream>
#include<stdlib.h>

using namespace std;
	//Creando estructura

	struct empleado{//Declarar los datos
		char nombre[20];
		string rfc;
		int tel;
	};//Punto y coma final para la estructura



int main(){
	system("color a");
	
	empleado x[5];
		
	cout<<"Introduzca los datos: "<<endl;//variable.dato a obtener
	
	for(int i=0; i<5; i++)
	{
		cout<<"\tEmpleado: "<<i+1<<endl;
		cout<<"Nombre: ";
		cin.getline(x[i].nombre,20);
		cout<<"Rfc: ";
		cin>>x[i].rfc;
		cout<<"Telefono: ";
		cin>>x[i].tel;
		fflush(stdin);
	}
	
	
	system("pause");
	return 0;
}
