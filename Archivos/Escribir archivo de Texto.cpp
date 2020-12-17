//Archivos

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
	
	archivo.open("Prueba.txt",ios::out);//Abriendo archivo (poniendole nombre,tipo de uso) si el archivo existe lo remplaza si no lo crea	
	
	
	if(archivo.fail()){// si ocurrio un error te manda true o false
		cout<<"No se pudo abrir el archivo";
		exit(1);//Termina el programa
	}
	
	archivo<<"Hola mi nombre es Ivan";//Escribiendo en el archivo
	
	archivo.close();//Cerrando el archivo
	
	//Nota: No aparece nada en consola ya que no se uso un cout en ves de eso se uso archivo para escribir dentro del archivo que se creo
}

