#include <iostream>
#include "stdio.h"


using namespace std;



int main() {

		char otra;
		
	

		int opc,opc2,opc3,opc4;
		char esc,op;
		float uni,celsius,kelvin,rankine,fahrenheit;
		
		do{
			
			system("cls");
				system("color a");
		
		
		cout<<"Programa para convertir grados \n";
		cout<<"Introdusca la unidad de grados que desea convertir"<<endl;
		cin>>uni;
		cout<<"Selecciona la escala de esa unidad"<<endl;
		cout<<"A=Fahrenheit B=Celsius C=Kelvin D=Rankine "<<endl;
		cin>>esc;
		
		esc=toupper (esc);
	
	switch(esc){
		
		case 'A':
		cout<< uni <<" Grados Fahrenheit"<<endl;
		
		cout<<"A que quieres convertir esos grados?"<<endl;
		cout<<"1=Celsius 2=Kelvin 3=Rankine"<<endl;
		cin>>opc;
		
		switch(opc){
		
		case 1:
		
		celsius=(uni-32)/1.8;
		cout<<"La conversion es: "<<celsius<<" grados celsius"<<endl;
		
		break;
		
		case 2:
	
		kelvin=(uni+459.67)/1.8;
		cout<<"La conversion es: "<<kelvin<<" grados kelvin"<<endl;
		
		break;
		
		case 3:
		
		rankine=uni+459.67;
		cout<<"La conversion es: "<<rankine<<" grados rankine"<<endl;
		
		break;
		
		default:
			cout<<"El numero no es valido"<<endl;
		
	}
		
			
		break;
		
		case 'B':
		
		cout<< uni <<" Grados Celsius"<<endl;
		
		cout<<"A que quieres convertir esos grados?"<<endl;
		cout<<"1=Fahrenheit 2=Kelvin 3=Rankine"<<endl;
		cin>>opc2;
		
		switch(opc2){
		
		case 1:
		
		fahrenheit=(1.8*uni)+32;
		cout<<"La conversion es: "<<fahrenheit<<" grados fahrenheit"<<endl;
		
		break;
		
		case 2:
	
		kelvin=uni+273.15;
		cout<<"La conversion es: "<<kelvin<<" grados kelvin"<<endl;
		
		break;
		
		case 3:
		
		fahrenheit=(1.8*uni)+32;
		
		rankine=fahrenheit+459.67;
		
		cout<<"La conversion es: "<<rankine<<" grados rankine"<<endl;
		
		break;
		
		default:
			cout<<"El numero no es valido"<<endl;
		
	}
		
		
		break;
		
		case 'C':
		
		cout<< uni <<" Grados Kelvin"<<endl;
		
		cout<<"A que quieres convertir esos grados?"<<endl;
		cout<<"1=Fahrenheit 2=Celsius 3=Rankine"<<endl;
		cin>>opc3;
		
		
		switch(opc3){
		
		case 1:
		
		fahrenheit=(1.8*uni)-459.67;
		cout<<"La conversion es: "<<fahrenheit<<" grados fahrenheit"<<endl;
		
		break;
		
		case 2:
		
		celsius=(uni-273.15);
		
		cout<<"La conversion es: "<<celsius<<" grados celsius"<<endl;
		
		break;
		
		case 3:
		
		fahrenheit=(1.8*uni)+32;
		
		rankine=fahrenheit+459.67;
		
		cout<<"La conversion es: "<<rankine<<" grados rankine"<<endl;
		
		break;
		
		default:
			cout<<"El numero no es valido"<<endl;
		
	}
		
		
		
		break;
		
		case 'D':
		
		cout<< uni <<" Grados Rankine"<<endl;
		
		cout<<"A que quieres convertir esos grados?"<<endl;
		cout<<"1=Fahrenheit 2=Celsius 3=Kelvin"<<endl;
		cin>>opc4;
			
			switch(opc4){
		
		case 1:
		
		fahrenheit=uni-459.67;
		cout<<"La conversion es: "<<fahrenheit<<" grados fahrenheit"<<endl;
		
		break;
		
		case 2:
	
		fahrenheit=uni-459.67;
		
		celsius=(fahrenheit-32)/1.8;
		cout<<"La conversion es: "<<celsius<<" grados celsius"<<endl;
		
		break;
		
		case 3:
		
		fahrenheit=uni-459.27;
		
		kelvin=(9/5-459.67)/fahrenheit;
		
		cout<<"La conversion es: "<<kelvin<<" grados kelvin"<<endl;
		
		break;
		
		
		
		
		default:
			cout<<"El numero no es valido"<<endl;
		
	}
		
		break;
		
		default:
			cout<<"La letra no es valida"<<endl;
			
			break;
						
	}
	
	
	
	cout<<"\n"<<endl;
	cout<<"Desea realizar otra conversion?  S/N ?"<<endl;
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

