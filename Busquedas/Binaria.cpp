/*Busqueda Binaria

	Para poder usarla es necesario que el arreglo ya este ordenado

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	system("color a");
	
	int numeros[]={1,2,3,4,5};//{0,1,2,3,4} posiciones del arreglo
	int inf,sup,mitad,dato;
	char band='F';
	
	dato=4;//a buscar
	
	//Algoritmo de la busqueda Binaria
	inf=0;
	sup=5;//numero de elementos del arreglo
	
	while(inf<= sup){
		mitad=(inf+sup)/2;//sacar la mitad
		
		if(numeros[mitad] == dato){
			band='V';
			break;//para que no siga buscando 
		}
		
		if(numeros[mitad] > dato){
			sup=mitad;
			mitad=(inf+sup)/2;// se actualiza el valor de mitad
		}
		if(numeros[mitad] < dato){
			inf = mitad;
			mitad = (inf+sup)/2;//acualiza el valor de mitad
		}
		
	}
	
	if(band == 'V'){
		cout<<"El numero ha sido encontrado en la posicion: "<<mitad<<endl;
	}
	else{
		cout<<"El numero no ha sido encontrado"<<endl;
	}
	
	system("pause");
	return 0;
}
