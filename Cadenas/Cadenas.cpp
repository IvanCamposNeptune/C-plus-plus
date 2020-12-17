#include<iostream>
#include<stdlib.h>
#include<string.h>//Para poder usar las cadenas

using namespace std;

int main(){
	
	system("color a");
	
	char palabra1[] = "Ivan"; //Primer manera de guardar
	char palabra2[] = {'I','v','a','n'};// Segunda manera de guardar
	char nombre[20]; //Tiene que tener el mismo limite que el getline
	
	cout<<"Digite su nombre: ";//No se guarda con cin por que cuando ve un espacio deja de copiar la cadena, no se usa gets por que no respeta el limite de 20 espacios.
	cin.getline(nombre,20,'\n');// (nombre donde se almacena,espacio maximo de elementos, y cuando termina)
	

	
	cout<<palabra1<<endl;//Imprime la primer manera
	cout<<palabra2<<endl;//Imprime la segunda manera
	cout<<nombre<<endl;//Imprime la tercer manera 
	
	
	
	
	system("pause");
	return 0;
	
}
