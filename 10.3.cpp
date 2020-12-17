#include <iostream>

using namespace std;

/*Imprimir los números pares en forma descendente hasta 2 que son menores o iguales
a un número natural n >= 2 dado.*/

int main() {
	
	int numero;
	
	cout<<"Introduce un numero para encontrar sus pares en forma descendente:  "; cin>>numero;

  	//Lista de pares
	for(int i=numero; i>=2; i--){
		
	if(i%2==0)	
	{
		cout<<i<<" es par"<<endl;
	}

	}
  
}
