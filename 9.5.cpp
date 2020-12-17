#include <iostream>
#include <cmath>

using namespace std;

/*
  Escriba la expresion matematica de la funcion recursiva entre un comentario
*/
//Escriba las funciones o procedimientos aqui

int main() {
  //Reciba los datos
  
  int numeros, multi=1;
  
  cout<<"Cuantos numeros desea multiplicar?: "; cin>>numeros;
  
  cout<<"1";
  
  for(int i=2; i<=numeros; i++){
  	
  	cout<<" * "<<i;
  	
  	multi*=i;
  	
  }
  
  cout<<"\nEl producto de los numeros es: "<<multi<<endl;
  
  //Ejecute las funciones o procedimientos e Imprima el mensaje correspondiente
}
