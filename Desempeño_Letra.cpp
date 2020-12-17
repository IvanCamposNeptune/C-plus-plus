#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	char letra;
	
	cout<<"\tDesempeño"<<endl;
	
	cout<<"Ingrese una letra: ";
	cin>>letra;
	
	switch(letra){
		
		case 'A': case 'a':
			cout<<"Excelente desempeño"<<endl;
		break;
		
		case 'B': case 'b':
			cout<<"Desempeño satisfactorio"<<endl;
		break;
		
		case 'C': case 'c':
			cout<<"Desempeño promedio"<<endl;
		break;
		
		case 'D': case 'd':
			cout<<"Bajo desempeño"<<endl;
		break;
		
		case 'E': case 'e':
			cout<<"Mal desempeño"<<endl;
		break;
		
			
		default: 
		cout<<"No ingreso una letra valida"<<endl;
		
		
	}
	
		
		
	system("pause");	
	return 0;
		
}
