#include <iostream>
#include <cmath>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();

using namespace std;

//Escriba las funciones o procedimientos aqui

int main() {
  //Reciba los datos
  int tiempoPer, MinutosUsados, dias;
  char P,C,T,transporte;
  
  
  //Ejecute las funciones o procedimientos e Imprima el mensaje correspondiente
  
  cout<<"\tTiempo perdido en transporte"<<endl;
  
  cout<<"\n\nQue transporte usas?";
  cout<<"\np.-A pie";
  cout<<"\nc.-En camion";
  cout<<"\nt.-En taxi"<<endl;
  
  cin>>transporte;
  
  switch(transporte){
    
    case 'p':
    	
    cout<<"\nUsted va a pie"<<endl;
    cout<<"Cuantos minutos tarda en llegar?: "; cin>>MinutosUsados;
    cout<<"Hace cuantos dias por este medio?: "; cin>>dias;
    
    //Tiempo perdido
    MinutosUsados *= dias; //Minutos por dia
    
    tiempoPer = MinutosUsados*(0.00069444);//Convierte minutos usados a dias 
    
    cout<<"El tiempo perdido en dias es: "<<tiempoPer;
    
    break;
    
    case 'c':
    
	cout<<"\nUsted viaja en camion"<<endl;    
	cout<<"Cuantos minutos tarda en llegar?: "; cin>>MinutosUsados;
    cout<<"Hace cuantos dias por este medio?: "; cin>>dias;
    
    //Tiempo perdido
    MinutosUsados *= dias; //Minutos por dia
    
    tiempoPer = MinutosUsados*(0.00069444);//Convierte minutos usados a dias 
    
    cout<<"El tiempo perdido en dias es: "<<tiempoPer;
    	
    break;	
    
    case 't':
	cout<<"\nUsted viaja en camion"<<endl;    
	cout<<"Cuantos minutos tarda en llegar?: "; cin>>MinutosUsados;
    cout<<"Hace cuantos dias por este medio?: "; cin>>dias;
    
    //Tiempo perdido
    MinutosUsados *= dias; //Minutos por dia
    
    tiempoPer = MinutosUsados*(0.00069444);//Convierte minutos usados a dias 
    
    cout<<"El tiempo perdido en dias es: "<<tiempoPer;    	
    
	break;	
	
	default: cout<<"No introdujo una opcion valida...";
    break;
    
  }
  
  
  system("pause");	
	return 0;
  
}
