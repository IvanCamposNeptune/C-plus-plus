#include<iostream>
#include<stdlib.h>// Para poder usar atoi y atof
#include<string.h>//Para poder usar las cadenas

//Transformar una cadena a numeros enteros atoi(); , para numeros con coma flotante es atof();

// "123.45" -> 123.45

using namespace std;

int main(){
	
	system("color a");
	
	char cad1[] = "123";
	int numero1;
	
	numero1 = atoi(cad1);// Numero va a ser igual a la cadena cad convertida a entero
	cout<<numero1<<endl;// Imprime la cadena convertida en entero
	
	cout<<"\n";// Separando atoi de atof
	
	char cad2[] = "123.456";	
	float numero2;
	
	numero2 = atof(cad2);// Numero va a ser igual a la cadena cad convertida a entero
	cout<<numero2<<endl;// Imprime la cadena convertida en entero
	
	
	
	
	
	system("pause");
	return 0;
	
}
