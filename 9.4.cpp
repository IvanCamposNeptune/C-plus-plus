#include <iostream>
#include <cmath>

using namespace std;

/*
  Escriba la expresion matematica de la funcion recursiva entre un comentario
*/
//Escriba las funciones o procedimientos aqui

int main() {
  //Reciba los datos
  int cuadrado, cuadrados, suma;
  
  cout<<"Cuantos numeros cuadrados desea sumar?: "; cin>>cuadrados;
  
  cout<<"0";
  
  for(int i=1; i<=cuadrados; i++){
  	
  	cuadrado = pow(i,2);
  	
  	cout<<" + "<<cuadrado;
  	
  	suma+=cuadrado;
  	
  }
  
  cout<<"\nLa suma es: "<<suma<<endl;
  
  
  //Ejecute las funciones o procedimientos e Imprima el mensaje correspondiente
}
