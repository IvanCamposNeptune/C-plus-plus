/*
	Metodo Burbuja y Busqueda Binaria
*/

/* Metodo Burbuja

Es un sencillo  algoritmo de ordenamiento. Revisa cada elemento de la lista que va a ser ordenada con el siguiente, intercambiandolos de posición
si estan en el orden equivocado. 
Es necesario revisar varias veces toda la lista hasta que no se necesiten más intercambios, lo cual significa que la lista esta ordenada.

No es muy eficiente pero para aprender ordenamientos es bueno conocerlo.

*/

/*Busqueda Binaria

Para poder usarla es necesario que el arreglo ya este ordenado

*/


#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	//Llenado del Arreglo
	int numeros[100],n;

	cout<<"Digite los elementos que va a tener el arreglo: ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Digite un numero: ";
		cin>>numeros[i]; //Guarda el numero en su posicion con el valor de i
	
	}
	
	
	//Metodo Burbuja
	int i, j, aux;
	
	cout<<"\nOrden original: "<<endl;
		for(i=0;i<n;i++){
		cout<<numeros[i]<<endl;
	}
	
	//Algoritmo del metodo burbuja
	
	for(i=0; i<n; i++){// 5 numero de elementos
		for(j=0; j<n; j++){
			if(numeros[j] > numeros[j+1]){ //Compara si el numero de la primer posicion es mayor que el siguiente si es así, se invierten posiciones
			
			aux = numeros[j]; // aux es igual a el numero actual
			numeros[j] = numeros[j+1];// Numero actual es igual al numero siguiente
			numeros[j+1] = aux;// El numero siguiente es igual a el que estaba en la primera posicion
							
			} 
		}
	}
	
	cout<<"\nOrden Ascendente: \n";
	for(i=1;i<=n;i++){
		cout<<numeros[i]<<endl;
	}
	
		cout<<"\nOrden Descendente: \n";
	for(i=n;i>=1;i--){
		cout<<numeros[i]<<endl;
	}
	
		
		
	system("pause");	
	return 0;
		
}
