/*Ordenamineto por seleccion
	
	Es un algoritmo de ordenamiento que requiere O(n^2) operaciones para ordenar una lista de n numeros.
	Funciona de la siguiente manera:
	
	1.-Buscar el minimo elemento de la lista
	2.-Intercambiarlo con el primer elemento
	3.-Buscar el minimo del resto de la lista
	4.-Intercambiarlo con el segundo 
	5.-Y así sucesivamente. 

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	system("color a");
	
	int numeros[] = {3,2,1,5,4};
	int i,j,aux,min;
	
	cout<<"Orden original: \n";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	
	
	for(i=0; i<5; i++){
		min = i;//se supone que el minimo es la primera posicion
		for(j=i+1;j<5;j++){//Que recorra desde la primera posicion
			if(numeros[j] < numeros[min]){// J es la posicion en donde estamos y min es la primer posicion 
			min = j; //compara si 3 es menor que 2 y lo cambia
			}
		}	
		aux= numeros[i];//Intercambio correspondiente
		numeros[i]= numeros[min];
		numeros[min]=aux;		
	}
	
	cout<<"\nOrden Ascendente: \n";
	for(i=0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
	
	cout<<"\nOrden Descendente: \n";
	for(i=4; i>=0; i--){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\n";
	
	
	
	system("pause");
	return 0;
}
