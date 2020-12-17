#include <iostream>
#include <cmath>

using namespace std;

int main() {

	//Lista de numeros del 1 al 100 con su respectivo cuadrado
	
	cout<<"Numero - Cuadrado"<<endl;
	
	int cuadrado;
	
	for(int i=1; i<=100; i++){
		
		cout<<i<<"->";
		
		cuadrado=i;
		
		cuadrado = pow(cuadrado,2);
		
		cout<<cuadrado;
		
		cout<<"\n";
		
	}

  
}
