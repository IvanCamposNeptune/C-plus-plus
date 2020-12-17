/* Metodo Burbuja

	Es un sencillo  algoritmo de ordenamiento. Revisa cada elemento de la lista que va a ser ordenada con el siguiente, intercambiandolos de posición
si estan en el orden equivocado. 
Es necesario revisar varias veces toda la lista hasta que no se necesiten más intercambios, lo cual significa que la lista esta ordenada.

No es muy eficiente pero para aprender ordenamientos es bueno conocerlo.

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	system("color a");
	
	int numeros[] = {4,1,2,3,5};
	int i, j, aux;
	
	cout<<"Orden original: "<<endl;
		for(i=0;i<5;i++){
		cout<<numeros[i]<<endl;
	}
	
	//Algoritmo del metodo burbuja
	
	for(i=0; i<5; i++){// 5 numero de elementos
		for(j=0; j<5; j++){
			if(numeros[j] > numeros[j+1]){ //Compara si el numero de la primer posicion es mayor que el siguiente si es así, se invierten posiciones
			
			aux = numeros[j]; // aux es igual a el numero actual
			numeros[j] = numeros[j+1];// Numero actual es igual al numero siguiente
			numeros[j+1] = aux;// El numero siguiente es igual a el que estaba en la primera posicion
							
			} 
		}
	}
	
	cout<<"\nOrden Ascendente: \n";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<endl;
	}
	
		cout<<"\nOrden Descendente: \n";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<endl;
	}
	
	
	
	system("pause");
	return 0;
}
