#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"
#include <math.h> //Funciones matematicas

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	char otra;
		
	do{
	
	char in;
		cout<<"\tCalculo de areas"<<endl;
		cout<<"\nA) Area de un cuadrado"<<endl;
		cout<<"B) Area de un triangulo"<<endl;
		cout<<"C) Area de un circulo"<<endl;
		cout<<"Eliga el inciso que desea realizar: ";
		cin>>in,cout<<" \n"; 
		
		in=toupper (in);
	
	switch(in){	
	
		
		case 'A':
		double base,altura,area;
		cout<<"\tArea de un cuadrado"<<endl;
		cout<<"Digita la base: "; cin>>base;
		cout<<"Digita la altura: "; cin>>altura;
		
		area=base*altura;
		
		cout<<"El area es: "<<area<<endl;
		
		break;
				
		
		case 'B':
		double base1,altura1,area1;
		cout<<"\tArea de un triangulo"<<endl;
		cout<<"Digita la base: "; cin>>base1;
		cout<<"Digita la altura: "; cin>>altura1;
		
		area1=(base1*altura1)/2;
		
		cout<<"El area es: "<<area1<<endl;
		break;
	
	
		case 'C':
		double radio,area2;
		cout<<"\tArea de un circulo"<<endl;
		cout<<"Digita el radio: "; cin>>radio;
			
		area2=pow((3.1416*radio),2);
		
		cout<<"El area es: "<<area2<<endl;
		break;
	
		
		default: cout<<"No es una opcion valida..."<<endl;			


}	 //Fin de el programa
	
	
	
	cout<<"\n"<<endl;
	cout<<"Desea realizar otro inciso?  S/N ?"<<endl;
	cin>>otra;
	otra=toupper (otra);
	
		
		if(otra=='S' or otra=='N')
			{
		
			}
		
	else{
	 cout<<"Caracter no valido"<<endl;
		}
	
	
	
	}while(otra=='S');	
	
	
		
		
	system("pause");	
	return 0;
		
}
