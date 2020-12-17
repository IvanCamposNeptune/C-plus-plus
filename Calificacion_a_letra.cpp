#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
		
	cout<<"\tCalificación numerica a letra"<<endl;
	
	double cal;
	char letra;
	
	cout<<"Ingresa tu calificación: ";
	cin>>cal;
	
	if(cal>8.7 && cal<=10){
                letra = 'A';
	}
		else if(cal>7.7 && cal<=8.7){
                letra = 'B';
		//System.out.println("B equivale a tu calificación");
	}
		else if(cal>5.9 && cal<=7.7){
                letra = 'C';
		//System.out.println("C equivale a tu calificación");
	}
		else if(cal>4.0 && cal<=5.9){
                letra = 'D';
		//System.out.println("D equivale a tu calificación");
	}
		else if(cal>0.0 && cal<=4.0){
                letra = 'E';
		//System.out.println("E equivale a tu calificación");
	}
        
        
        switch(letra){
		
		case 'A':
		    cout<<"Excelente desempeño"<<endl;     
		break;
		
		case 'B':
			  cout<<"Desempeño satisfactorio"<<endl; 
		break;
		
		case 'C':
			  cout<<"Desempeño promedio"<<endl; 
		break;
		
		case 'D':
			  cout<<"Bajo desempeño"<<endl; 
		break;
		
		case 'E':
			  cout<<"Mal desempeño"<<endl; 
		break;
			
		default: 
		          cout<<"No ingreso una letra valida"<<endl;
		
		
	}
	
	
	
	
	
	
		
		
	system("pause");	
	return 0;
		
}
