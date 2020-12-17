#include <iostream>
#include <stdlib.h>
#include <time.h>//Para generar numero aleatorio

using namespace std;

int main(){
	system("color a");
	
	int numero, dato, contador=0;
	
	srand(time(NULL)); //genera un numero aleatorio
	dato = 1 + rand()%(100);// entre 1 y 100
	
	cout<<"\tAdivina el numero entre el 1 y el 100"<<endl;
	
	do{
		cout<<"Digite un numero: "; cin>> numero; //35
		
		if(numero>dato){
			cout<<"\ndigite un numero menor\n";
		}
		
		if(numero<dato){
			cout<<"\nDigite un numero mayor\n";
		}
		
		contador++;
	}while(numero!=dato);
	
	cout<<"\nFELICIDADES ADIVINASTE EL NUMERO\n";
	cout<<"Numero de intentos: "<<contador<<endl;
	
	system("pause");
	return 0;
}
