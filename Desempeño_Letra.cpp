#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma espa�ol "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en espa�ol.
	
	char letra;
	
	cout<<"\tDesempe�o"<<endl;
	
	cout<<"Ingrese una letra: ";
	cin>>letra;
	
	switch(letra){
		
		case 'A': case 'a':
			cout<<"Excelente desempe�o"<<endl;
		break;
		
		case 'B': case 'b':
			cout<<"Desempe�o satisfactorio"<<endl;
		break;
		
		case 'C': case 'c':
			cout<<"Desempe�o promedio"<<endl;
		break;
		
		case 'D': case 'd':
			cout<<"Bajo desempe�o"<<endl;
		break;
		
		case 'E': case 'e':
			cout<<"Mal desempe�o"<<endl;
		break;
		
			
		default: 
		cout<<"No ingreso una letra valida"<<endl;
		
		
	}
	
		
		
	system("pause");	
	return 0;
		
}
