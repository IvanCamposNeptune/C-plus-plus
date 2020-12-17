#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  /*Leer un número natural n, leer otro dato de tipo real x y calcular x elevado a la n (la n-esima potencia del número real).*/
  
  int x, n, elevado;
  
  cout<<"Digita un numero de tipo real: "; cin>>x;
  cout<<"\nDigita un numero natural: "; cin>>n;
  
  //Elevacion
  
  elevado = pow(x,n);
  
  cout<<"\nLa elevacion de "<<x<< " a la "<<n<< " es: "<<elevado<<endl;
  
  
  
}
