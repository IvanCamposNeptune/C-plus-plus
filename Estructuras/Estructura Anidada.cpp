/*Estructuras anidadas
	
	En cada posicion guardamos una estructura completa
	
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

	//Creando estructura

	struct info_direccion{//Declarar los datos
		char direccion[30];
		char ciudad[20];
		char provincia[20];
	};//Punto y coma final para la estructura
	
	struct empleado{//Declarar los datos
		char nombre[20];
		struct info_direccion dir_empleado;
		double salario;
	}empleados[2];//Punto y coma final para la estructura, numero maximo de empleados
	

int main(){
	system("color a");
	
	//Almacenar valores 
	
	for(int i=0; i<2; i++){//Hasta 2 por que es el numero maximo de empleados
		//Pidiendo datos
		fflush(stdin);//Vaciar el buffer y permitir digitar los valores
		cout<<"Digite su Nombre: ";
		cin.getline(empleados[i].nombre,20,'\n');
		cout<<"Digite su Direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
		cout<<"Digite su Ciudad: ";
		cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
		cout<<"Digite su Provincia: ";
		cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
		cout<<"Digite su Salario: ";
		cin>>empleados[i].salario;	
		cout<<"\n";
	}
	
	//Imprimiendo datos
	
	for(int i=0; i<2; i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		cout<<"\n";
		
	}
	
	
	
	
	system("pause");
	return 0;
}
