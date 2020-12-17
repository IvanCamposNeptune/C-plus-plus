#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  
  		//Promedio de un alumno
  		
        string nombre, apellido;
        int matricula;
        double cal1, cal2, cal3, cal4, cal5, cal6, promedio;
        
        cout<<"Ingrese su nombre: "<<endl; cin>>nombre;
        cout<<"Ingrese su apellido: "<<endl; cin>>apellido;
        cout<<"Ingrese su matricula: "<<endl; cin>>matricula;
        
    	cout<<"Ingrese su Calificacion 1: "<<endl; cin>>cal1;
    	cout<<"Ingrese su Calificacion 2: "<<endl; cin>>cal2;
       	cout<<"Ingrese su Calificacion 3: "<<endl; cin>>cal3;
       	cout<<"Ingrese su Calificacion 4: "<<endl; cin>>cal4;
    	cout<<"Ingrese su Calificacion 5: "<<endl; cin>>cal5;
    	cout<<"Ingrese su Calificacion 6: "<<endl; cin>>cal6;
    	
    	//Calcular el promedio
    	
    	promedio = (cal1+cal2+cal3+cal4+cal5+cal6)/6;
    	
    	//Mostrar datos
    	
    	cout<<"\nEl nombre del alumno es: "<<nombre<<endl;
        cout<<"El apellido del alumno es: "<<apellido<<endl;
        cout<<"La matricula del alumno es: "<<matricula<<endl;
        printf("El promedio del alumno es: %.2f", promedio); //Para redondear y limitar a 2 decimales.
        

}
