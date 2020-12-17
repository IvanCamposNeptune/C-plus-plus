/*Ordenamiento por Insercion

	Es una manera natural de ordenar para un ser humano, y puede usarse fácilmente para ordenar un mazo de cartas numeradas en forma arbitraria.
Requiere O(n^2) operaciones para ordenar una lista de n elementos. 

Compara si:
	numeroIzq > numeroActual    
	Cambio

*/ 

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	system("color a");	
	
	int numeros[] = {4,2,3,1,5};
	int i,pos,aux;
	
	
	cout<<"Orden original: \n";
	for(i=0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
	
	for(i=0; i<5; i++){
		pos = i;// Es el numero de posicion del arreglo sera la flechita indicadora
		aux = numeros[i];// Es el numero de del arreglo
		
	while((pos>0) &&(numeros[pos-1] > aux )){//Compara mientras posicion sea mayor a 0 por que en la posicion 0 es la primera y a su izquierda no hay nada. en este caso es el 4
		numeros[pos] = numeros[pos-1];// Se hace el cambio
		pos--;//ya que se necesitaba comparar que el numero de la izquierda era mayor al numero actual
	}		
	numeros[pos]=aux;//Para que refresque en que numero va
}

	cout<<"\nOrden Ascendente: "<<endl;
	for(i=0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: "<<endl;
	for(i=4; i>=0; i--){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\n";
	
	system("pause");
	return 0;
}
