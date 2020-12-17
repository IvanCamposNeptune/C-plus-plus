#include <iostream>
#include <cmath>

using namespace std;

/*
  Escriba la expresion matematica de la funcion recursiva entre un comentario
*/
//Escriba las funciones o procedimientos aqui

int main() {
  //Reciba los datos
  int naturales, suma;
  
  cout<<"Cuantos numeros naturales desea sumar?: "; cin>>naturales;
  
  cout<<"0";
  
  for(int i=1; i<=naturales; i++){
  	
  	cout<<" + "<<i;
  	
  	suma+=i;
  	
  }
  
  cout<<"\nLa suma es: "<<suma<<endl;
  
  
  //Ejecute las funciones o procedimientos e Imprima el mensaje correspondiente
}
