#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  
  //Sueldo de un trabajador;
  string nombre, rfc;
  double sueldo1, sueliva1;

  cout<<"Digite su nombre: "<<endl; cin>>nombre;
  cout<<"Digite su rfc: "<<endl; cin>>rfc;

  cout<<"Digite su Sueldo: "<<endl; cin>>sueldo1;

  //Suma de sueldo menos el iva

  sueliva1 = sueldo1-(sueldo1*.16);
  
  //Mostrar datos
  
  cout<<"\nEl nombre es: "<<nombre<<endl;
  cout<<"El rfc es: "<<rfc<<endl;
  cout<<"El sueldo menos el iva (16%) es: "<<sueliva1<<endl;

}
