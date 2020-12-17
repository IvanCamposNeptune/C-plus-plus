#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  
  //Sueldos de un trabajador;
    string nombre, rfc;
    double sueldo, sueldo_iva, sueldo_total;

  cout<<"Digite su nombre: "<<endl; cin>>nombre;
  cout<<"Digite su rfc: "<<endl; cin>>rfc;

  cout<<"Digite su Sueldo: "<<endl; cin>>sueldo;

    //Calcular sueldo bruto, impuesto retenido y salario total.
        
    sueldo_iva = sueldo-(sueldo-(sueldo*.16)); //Iva
        
    sueldo_total = sueldo-(sueldo*.16); //Sueldo total
    
    
    cout<<"\nEl nombre del trabajador es: "<<nombre<<endl;
	cout<<"El rfc del trabajador es: "<<rfc<<endl;
	cout<<"El sueldo bruto del trabajador es: "<<sueldo<<endl;	 
	cout<<"El impuesto retenido del sueldo del trabajador es: "<<sueldo_iva<<endl;
	cout<<"El sueldo total del trabajador es: "<<sueldo_total<<endl;
	   

}
