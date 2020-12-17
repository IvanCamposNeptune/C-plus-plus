#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;

//Prototipo de funcion fibonacci

int fibonacci(int);


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	int nElementos;
	
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>nElementos;	
	}while(nElementos<=0);
	
	cout<<"\n";
	cout<<"\tSerie Fibonacci: ";
	for(int i=0; i<nElementos; i++){
		cout<< fibonacci(i) << " , ";
	}
	
		
	cout<<"\n"<<endl;
	system("pause");	
	return 0;
		
}


int fibonacci(int n){
	
	if(n<2){// Caso Base
		return n;
	}
	else{// Caso General
		return fibonacci(n-1) + fibonacci(n-2);
	}
	
}
