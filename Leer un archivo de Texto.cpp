/*	Archivos
Campos Esparza Ivan Felipe
2do Semestre 1er Grupo
Estructura de Datos
*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>

#include<fstream>//Biblioteca para archivos, F de file (archivo) para creacion escritura y lectura de archivos

using namespace std;

void lectura();//Declarando la funcion para escribir texto 

int main(){
	system("color a");
	
	lectura(); //Llamando la funcion para escribir
	
	
	getch();
	return 0;
}

void lectura(){
	
	ifstream archivo; // I de input (entrada), archivo es de tipo archivo de entrada
	string texto;
	
	archivo.open("Prueba.txt",ios::out);//Abrimos el archivo en modo lectura	
	
	
	if(archivo.fail()){// si ocurrio un error te manda true o false
		cout<<"No se pudo abrir el archivo";
		exit(1);//Termina el programa gracias a la biblioteca Stdlib
	}
	
	while(!archivo.eof())//Mientras no sea el final del Archivo
	{
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close();//Cerrando el archivo
	

}
