#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma espa�ol "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en espa�ol.
		
	cout<<"\tCalificaci�n numerica a letra"<<endl;
	
	double cal;
	char letra;
	
	cout<<"Ingresa tu calificaci�n: ";
	cin>>cal;
	
	if(cal>8.7 && cal<=10){
                letra = 'A';
	}
		else if(cal>7.7 && cal<=8.7){
                letra = 'B';
		//System.out.println("B equivale a tu calificaci�n");
	}
		else if(cal>5.9 && cal<=7.7){
                letra = 'C';
		//System.out.println("C equivale a tu calificaci�n");
	}
		else if(cal>4.0 && cal<=5.9){
                letra = 'D';
		//System.out.println("D equivale a tu calificaci�n");
	}
		else if(cal>0.0 && cal<=4.0){
                letra = 'E';
		//System.out.println("E equivale a tu calificaci�n");
	}
        
        
        switch(letra){
		
		case 'A':
		    cout<<"Excelente desempe�o"<<endl;     
		break;
		
		case 'B':
			  cout<<"Desempe�o satisfactorio"<<endl; 
		break;
		
		case 'C':
			  cout<<"Desempe�o promedio"<<endl; 
		break;
		
		case 'D':
			  cout<<"Bajo desempe�o"<<endl; 
		break;
		
		case 'E':
			  cout<<"Mal desempe�o"<<endl; 
		break;
			
		default: 
		          cout<<"No ingreso una letra valida"<<endl;
		
		
	}
	
	
	
	
	
	
		
		
	system("pause");	
	return 0;
		
}
