#include <iostream>

using namespace std;

/*
Imprimir los números de 1 hasta un número natural n dado, cada uno con su res-
pectivo factorial.
*/

int main() {
  	int natural;
  	
  	cout<<"Digite un numero para sacarle el factorial a cada uno: "; cin>>natural;
  	
    for(int numero=1; numero<=natural; numero++){
    	
    int factorial=1;
	
	for(int i=1; i<=numero; i++){
		factorial *= i;
	}
	
	cout<<"El factorial del numero "<<numero<<" es: "<<factorial<<endl;
    	
	}
     
  
}
