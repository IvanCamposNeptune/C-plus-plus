//Archivos

#include<iostream>
#include<conio.h>
#include<stdlib.h>// Puede usarse para la salida con exit(1);
#include<string.h>//Para poder usar las cadenas

#include<fstream>//Biblioteca para archivos, F de file (archivo) para creacion escritura y lectura de archivos

using namespace std;

void escribir();//Funcion para escribir texto 

int main(){
	system("color a");
	
	escribir();
	
	
	
	getch();
	return 0;
}

void escribir(){
	ofstream archivo; // O de output (salida), archivo es de tipo archivo de salida
	
	archivo.open("Editor.txt",ios::out);//Abriendo archivo (poniendole nombre,tipo de uso) si el archivo existe lo remplaza si no lo crea	
	
	
	if(archivo.fail()){// si ocurrio un error te manda true o false
		cout<<"No se pudo abrir el archivo";
		exit(1);//Para salir rapido con la biblioteca stdlib
	}
	
	char txt[150]; //Tiene que tener el mismo limite que el getline
	
	cout<<"Digite un texto: ";//No se guarda con cin por que cuando ve un espacio deja de copiar la cadena, no se usa gets por que no respeta el limite de 150 espacios.
	cin.getline(txt,150,'\n');// (nombre donde se almacena,espacio maximo de elementos, y cuando termina)

	archivo<<txt<<endl;//Imprime la cadena en el bloc de notas
	
	cout<<"Se ha guardado exitosamente"<<endl;
	
	cout<<"\nEl contenido del bloc de notas es: ";
	
	cout<<txt;
	
	archivo.close();//Cerrando el archivo
	
	//Nota: No aparece nada en consola ya que no se uso un cout en ves de eso se uso archivo para escribir dentro del archivo que se creo
}

