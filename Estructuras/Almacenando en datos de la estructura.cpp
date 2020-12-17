/*Estructura basica

	Sirve para almacenar varios campos en una variable

*/

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;
	//Creando estructura

	struct Persona{//Declarar los datos
		char nombre[20];
		int edad;
		float estatura, peso, imc;
		char apellidoP[20];
		char apellidoM[20];
	}persona1;//Punto y coma final para la estructura, dentro de }; se declaran las variables que tendran los campos nombre y edad



int main(){ 
	system("color a");
		
	cout<<"Nombre: \n";
	cin.getline(persona1.nombre,20); //getline para almacenar cadena, (variable donde se almacena, tamaño limite, cuando termina);
	cout<<"Apellido Paterno:\n";
	cin.getline(persona1.apellidoP,20);
	cout<<"Apellido Materno\n";
	cin.getline(persona1.apellidoM,20);
	cout<<"Edad:\n";
	cin>>persona1.edad;
	cout<<"Estatura(m):\n";
	cin>>persona1.estatura;
	cout<<"Peso(Kg):\n";
	cin>>persona1.peso;
	
	persona1.imc=persona1.peso/pow(persona1.estatura,2);
	
	cout<<"----------------------------------------------"<<endl;
	
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Apellido Paterno: "<<persona1.apellidoP<<endl;
	cout<<"Apellido Materno:"<<persona1.apellidoM<<endl;	
	cout<<"Edad: "<<persona1.edad<<endl;
	cout<<"Estatura: "<<persona1.estatura<<endl;
	cout<<"Peso:   "<<persona1.peso<<endl;
	cout<<"IMC= "<<persona1.imc<<endl;
	
	system("pause");
	return 0;
}
