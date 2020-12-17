#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	/*
	Desarrolle un programa para muestre y sume la serie de números 3, 6, 9, 12…, n.
	*/
	
	int veces, inicio=3, suma=0;
	
	cout<<"¿Cuantas veces desea repetir la serie?: "; cin>>veces;
	
	cout<<"Serie: ";
	
	for(int i=1; i<=veces; i++){
		
		cout<<inicio<<" ";
		
		suma+=inicio;
		
		inicio+=3;
		
	}
		
	cout<<"\nLa suma de los numeros en la serie es: "<<suma<<endl;
		
		
	system("pause");	
	return 0;
		
}
