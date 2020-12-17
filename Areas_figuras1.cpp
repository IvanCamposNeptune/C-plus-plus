#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"
#include <math.h>

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	//Declaracion de variable
        int opcion;
        
        
        cout<<"\tArea de figuras";
        cout<<"\n1.-Triangulo \n2.-Circulo \n3.-Cuadrado"<<endl;
        
        cout<<"\nEliga una opcion: ";
        cin>>opcion;
        
        switch(opcion){
        
            case 1:
                double base, altura, area;
                cout<<"Digite la base del triangulo: ";
                cin>>base;
                cout<<"\nDigite la altura del triangulo: ";
                cin>>altura;
                
                //Calculo de area de triangulo
                area = (base*altura)/2;
                
                //Impresion de area
                cout<<"\nEl area del triangulo es: " << area<<endl;
            break;
                
            case 2:
                double radio, area2;
                cout<<"Digite el radio del circulo: ";
                cin>>radio;
                
                //Calculo de area de triangulo
                area2 = pow((3.1416*radio),2);
                
                //Impresion de area
                cout<<"\nEl area del circulo es: " << area2<<endl;
            break;
                                
            case 3:
                double base3, altura3, area3;
                cout<<"Digite la base del cuadrado: ";
                cin>>base3;
                cout<<"\nDigite la altura del cuadrado: ";
                cin>>altura3;
                
                //Calculo de area de triangulo
                area3 = base3*altura3;
                
                //Impresion de area
                cout<<"\nEl area del cuadrado es: " << area3<<endl;
            break;
        
            default: cout<<"Opcion no valida...";
            
            break;
                      
        }
		
		
	system("pause");	
	return 0;
		
}
