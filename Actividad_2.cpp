#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"
#include <math.h> //Funciones matematicas

using namespace std;

int main() {	
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	//Variables de la sucesion geometrica
	int n, numero, razon; 
	
	//Variables de la sucesion aritmetica
	int numero1, numero2, diferencia, num;
	int s[num], k[num];
		
	
	//Menu
	char otra;
		
	do{
	
	char in;
		cout<<"\tSucesiones"<<endl;
		cout<<"\nA) Sucesion geometrica"<<endl;
		cout<<"B) Sucesion aritmetica"<<endl;
		cout<<"Eliga el inciso que desea realizar: ";
		cin>>in,cout<<" \n"; 
		
		in=toupper (in);
	
	switch(in){	
	
		
		case 'A':	   
  		cout<<"\tSucesion Geometrica con la formula general"<<endl; 
  		cout<<"Cuantos terminos desea mostrar?: "; cin>>n;
    
  		cout<<"Digite el primer termino: "; cin>>numero;
  		cout<<"Digite la razon: "; cin>>razon;
  		
  		cout<<"\n";
    	
    	for(int i=1; i<=n; i++){
    		
    		 ((numero * (pow(razon,n) - 1))/(razon -1)); //Formula general
    		
    		cout<<numero<<" * "<<pow(razon,i)<<" - 1"<<" / "<<razon<<" - 1"<<endl;
		}
		
  	
		
		break;
				
		
		case 'B':	
			
		cout<<"\tSucesion Aritmetica con la formula de recurrencia"<<endl; 
  		cout<<"Cuantos terminos desea mostrar?: "; cin>>num;
    
  		cout<<"Digite el primer termino: "; cin>>numero1;
  		cout<<"Digite el segundo termino: "; cin>>numero2;
  		
  		cout<<"\n";
  		
  		s[0] = numero1;//Primer valor
  		
  		cout<<"a0 = "<<s[0]<<endl;
  		
  		s[1] = numero2;//Segundo valor
  		
		cout<<"a1 = "<<s[1]<<endl; 		
		
		diferencia = s[1] - s[0];//Diferencia
		
    	
    	for(int i=2; i<num; i++){//Empezando en la tercer posicion
    		    		    		
    		s[i] = s[i-1] + diferencia;//Formula de recurrencia
    		
    		
    		cout<<"a"<<i<<" = "<<s[i]<<endl;
		}
		
		
		
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
	
		
	return 0;
		
}
