#include <iostream>
#include <cmath>

using namespace std;

//Escriba las funciones o procedimientos aqui

int main() {
	//Reciba el numero
  int numero;
  
  cout<<"Digite un numero para comprobar si es divisible entre 7 y 13: "; cin>>numero;
  
	//Ejecute la funcion e Imprima el mensaje correspondiente
  if(numero%7==0){
  	cout<<"El numero es divisible por 7"<<endl;
  }
  else if(numero%13==0){
  	cout<<"El numero es divisible por 13"<<endl;
  }
  else{
  	cout<<"El numero no es divisible..."<<endl;
  }
}
