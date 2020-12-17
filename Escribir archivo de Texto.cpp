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

void escribir();//Declarando la funcion para escribir texto 

int main(){
	system("color a");
	
	escribir(); //Llamando la funcion para escribir
	
	
	getch();
	return 0;
}

void escribir(){
	
	ofstream archivo; // O de output (salida), archivo es de tipo archivo de salida
	string nombreArchivo, frase;
	
	cout<<"Escriba el nombre del Archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::out);//Abriendo archivo (poniendole nombre,tipo de uso) si el archivo existe lo remplaza si no lo crea	
	
	
	if(archivo.fail()){// si ocurrio un error te manda true o false
		cout<<"No se pudo abrir el archivo";
		exit(1);//Termina el programa gracias a la biblioteca Stdlib
	}
	
	cout<<"\nEscriba el texto del Archivo: ";
	getline(cin,frase);
	
	archivo<<frase;//Escribiendo en el archivo
	
	archivo.close();//Cerrando el archivo
	

}

