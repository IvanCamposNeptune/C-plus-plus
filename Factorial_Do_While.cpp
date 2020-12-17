#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
		
	//Factorial de un numero
	char opc='s';
	
	do{
		
	int num, fact=1;
	
	
	cout<<"\n \tFactorial de un numero"<<endl;
	
	cout<<"\nIngrese un numero: "; cin>>num;
	
	for(int i=1; i<=num; i++){
		fact*=i;
	}
	
	cout<<"\nEl factorial es: "<<fact<<endl;
	
	cout<<"\nDesea realizar otra operacion? \nSi(s) o No(n):"; cin>>opc;
		
	}while(opc=='s');
	

	
	
		
	system("pause");	
	return 0;
		
}
