#include <iostream>
#include <cmath>


using namespace std;

//Escriba las funciones o procedimientos aqui

int main() {
  //Reciba los datos
  double capital, tasainteres, simple, compuesto;
  char tipointeres;
  double tiempomes;
  
  //Ejecute las funciones o procedimientos e Imprima el mensaje correspondiente
  cout<<"\tInteres simple y compuesto"<<endl;
  
  cout<<"Digite el capital: "; cin>>capital;
  
  cout<<"Digite la tasa de interes, el % tiene que dar entre 0 y 1: "; cin>>tasainteres;
  
  cout<<"Escribe (s) para interes Simple, o (c) para interes Compuesto: "; cin>>tipointeres;
  
  tasainteres/=100; //Porcentaje de la tasa de interes
  
  if(tasainteres<0 || tasainteres>1){
  	cout<<"La tasa de interes tenia que ser entre 0 y 1..."<<endl;
  }
  else{
  	
  	cout<<"Digite el tiempo en meses que se va a tardar (1,2,3,3.5, etc.): "; cin>>tiempomes;
  	
  	switch(tipointeres){
  	
  	case 's':
  		
  		cout<<"\n\tInteres Simple"<<endl;	
		  
		  simple = (capital * tasainteres * tiempomes);
		  
		  cout<<"El interes simple del prestamo es: "<<simple<<endl;
		  
		  cout<<"El monto total a devolver es: "<<(capital+simple)<<endl;
  		
  		break;
  		
  	case 'c':
  		
  		cout<<"\n\tInteres Compuesto"<<endl;
  		
  		
  		  		
  		compuesto = pow((1+tasainteres),tiempomes);
  		
  		compuesto*=capital;
  		
  		cout<<"El capital final es: "<<compuesto<<endl;
  		
  		break;	
  		
  	default : cout<<"No ingreso un tipo de interes valido..."<<endl;
  	
  	}
  		
  	
  }
   
  
}
