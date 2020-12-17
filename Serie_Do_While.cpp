#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"
#include <math.h>

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	char bandera='s';;
	
	do{
	
	int x,n;
	
	cout<<"\nIntrodusca un numero: "; cin>>x;
	
	cout<<"Introdusca las repeticiones: "; cin>>n;
	
	cout<<"1"<<endl;
	
	for(int i=1; i<n; i++){
				
		cout<<x<<"^"<<i<<"/"<<i<<"+"<<"1"<<endl;
		
	}
	
	cout<<"Desea repetir? Si(s) o No(Cualquier tecla): "; cin>>bandera;
	
	}while(bandera=='s');
		
	system("pause");	
	return 0;
		
}
