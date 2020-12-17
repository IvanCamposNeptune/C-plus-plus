#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	//Suma de pares e impares hasta 10,000
        
        cout<<"\tSuma de pares e impares hasta 10,000"<<endl;
        
        int acumP=0, acumI=0;
        
        for(int pi=0; pi<=10000 ; pi++){
            
            if(pi%2==0){
            acumP = acumP + pi;
            }
            else{
            acumI+=pi;
            }
            
        }
        
        cout<<"\nLa suma de los pares es: " << acumP<<endl;
        cout<<"La suma de los impares es: " << acumI<<endl;
		
		
	system("pause");	
	return 0;
		
}
