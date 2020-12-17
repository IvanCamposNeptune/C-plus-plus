/*Punteros 
	Variable que almacena la direccion de memoria de otra variable
*/

//Determinar si un numero es primo o compuesto utilizando punteros
// Es primo si solo se divide entre si mismo y la unidad, si tiene mas divisores se llama compuesto
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	system("color a");

	int numero, *dir_numero, cont = 0;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	dir_numero = &numero;
	
	for(int i=1; i<*dir_numero; i++){
		if(*dir_numero%i==0){//Si se cumple significa que el numero tiene un divisor
			cont++;//numero de divisores 
		}
	}
	
	if(cont>2){//Si el numero tiene mas de 2 divisores es compuesto
		cout<<"El numero: "<<*dir_numero<<" Es Compuesto"<<endl;
		cout<<"Direccion de memoria: "<<dir_numero<<endl;
	}
	else{
		cout<<"El numero "<<*dir_numero<<" Es Primo"<<endl;
		cout<<"Direccion de memoria: "<<dir_numero<<endl;
	}
	
	
	
	getch();
	return 0;
}
