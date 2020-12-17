#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <math.h> //Funciones matematicas

using namespace std;

//Metodos o funciones 

double circulo(double x);
double triangulo(double x, double y);
double cuadrado(double x);
double raiz(double x);
double seno(double x);
double coseno(double x);


int main() {		

	char otra;
		
	do{
	
	char in;
		cout<<"\tCalculo de areas"<<endl;
		cout<<"\nA) Area de un circulo"<<endl;
		cout<<"B) Area de un triangulo"<<endl;
		cout<<"C) Area de un cuadrado"<<endl;
    cout<<"Raiz de un nuemro"<<endl;
		cout<<"Eliga el inciso que desea realizar: ";
		cin>>in,cout<<" \n"; 
		
		in=toupper (in);
	
	switch(in){	
	
		
		case 'A':
    double radio;
		cout<<"\tArea de un circulo"<<endl;
		cout<<"Digita el radio: "; cin>>radio; 
    circulo(radio);
		break;
				
		
		case 'B':
		double base1,altura1;
		cout<<"\tArea de un triangulo"<<endl;
		cout<<"Digita la base: "; cin>>base1;
		cout<<"Digita la altura: "; cin>>altura1;
    triangulo(base1,altura1);
		break;
	
	
		case 'C':
    
    double base,altura,area;
		cout<<"\tArea de un cuadrado"<<endl;
		cout<<"Digita la base: "; cin>>base;
		cout<<"Digita la altura: "; cin>>altura;
		
		area=base*altura;
		
		cout<<"El area es: "<<area<<endl;

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

  //Definicion de funciones

double circulo(double x){
			
		x=pow((3.1416*x),2);
		
	  cout<<"El area es: ";
    return(x);
}

double triangulo(double x, double y){
   int area1=(x*y)/2;
		cout<<"El area es: ";
  return(area1);
}

double cuadrado(double x, double y){

  return(x);
}
double raiz(double x){
  return(x);
}
double seno(double x){
  return(x);
}
double coseno(double x){
  return(x);
}
	
		
	return 0;
		
}
