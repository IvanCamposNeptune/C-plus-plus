#include <iostream>
#include <cmath>

using namespace std;

//Escriba las funciones o procedimientos aqui

int main() {
  //Reciba los datos
  int a, b, c;
  cout<<"\tRaices reales de un polinomio cuadrado"<<endl;
  cout<<"\nIngrese un valor real de a: "; cin>>a;
  cout<<"\nIngrese el valor real de b: "; cin>>b;
  cout<<"\nIngrese el valor real de c: "; cin>>c;
  
  
  //Ejecute las funciones o procedimientos e Imprima el mensaje correspondiente
  
  //Se utilizara la formula general para conocer las raices y saber si son reales
  double x1, x2; //Resultados de las raices
  
  if(a!=0){//a no puede ser 0
  	
  	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
  	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
  	
  	cout<<"\nLas raices son: "<<x1<<" y "<<x2<<endl;
  	
  }
  else{
  	cout<<"El valor de (a) no puede ser 0..."<<endl;
  }
    
  
}
