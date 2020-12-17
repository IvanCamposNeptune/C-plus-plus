#include <iostream>
#include <cmath>

using namespace std;

/*
  Escriba la expresion matematica de la funcion recursiva entre un comentario
*/
//Escriba las funciones o procedimientos aqui

int main() {
  //Reciba los datos
  int cuadrado, cuadrados, multi=1;
  
  cout<<"Cuantos numeros cuadrados desea multiplicar?: "; cin>>cuadrados;
  
  cout<<"1";
  
  for(int i=2; i<=cuadrados; i++){
  	
  	cuadrado = pow(i,2);
  	
  	cout<<" * "<<cuadrado;
  	
  	multi*=cuadrado;
  	
  }
  
  cout<<"\nEl producto de los cuadrados es: "<<multi<<endl;
  
  
  //Ejecute las funciones o procedimientos e Imprima el mensaje correspondiente
}
