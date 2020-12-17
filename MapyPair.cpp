#include <iostream>
#include <string>
#include <utility>//Para poder usar la plantilla pair
#include <map>//Contenedor Map
#include <stdlib.h> //Para el system("pause");
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;

typedef pair<string, string> pareja; //Plantilla pair

int main()
{
  system("color a");//Color Verde 
  setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
  cout<<"Contenedor Map de una Agenda de Contactos \n" << endl;
  
  //Map es un contenedor asociativo para contener en orden una lista de parejas de valores únicos asociados como Clave/Valor.
  
  map<string, string>::iterator p; //Variable iterativa
  map<string, string> directorio; //Objeto directorio con Clave tipo String y el Valor tambien String
  
  //Predefiniendo algunos contactos
  directorio.insert( pareja("Ivan", "771-329-51-27") );
  directorio.insert( pareja("Gaby", "771-245-35-57") );
  directorio.insert( pareja("Laura", "771-742-25-66") );
  directorio.insert( pareja("Fer", "771-974-21-29") );
  directorio.insert( pareja("Ali", "771-928-26-35") );
  directorio.insert( pareja("Yoselin", "771-856-94-02") );
  
  //Variables globales
  int opc, opc2;
  string s, nombre, numero;
  bool band;    
  
  do
  {
  //Opciones del Directorio
  cout<<"\n \tAgenda Opciones \n1.-Mostrar Contactos \n2.-Agregar Contacto \n3.-Buscar Contacto \n4.-Eliminar Contacto \n:"; cin>>opc;
  
  switch(opc)
  {
  	case 1:
  		cout<<"\tContactos"<<endl;
  		for(p = directorio.begin(); p != directorio.end(); ++p)
		  {
		  	cout<< p->first << "		" << p->second <<endl;
		  }
  		break;
  	case 2:
  		cout<<"\tAgregar"<<endl;
  		cout<<"Escribe el nombre del Contacto: "; cin>>nombre;
  		cout<<"Escribe el numero del Contacto: "; cin>>numero;
  		
  		directorio.insert( pareja(nombre, numero) );
  		
  		cout<<"Contacto añadido..."<<endl;
  		
  		break;
  	case 3:
  		cout<<"\tBuscar"<<endl;
  		
		cout<<"Escribe su nombre: "; cin>>s;

  		p = directorio.find(s);
  
  		if(p != directorio.end())
  		cout << "Numero telefonico de " << s << " es " << p->second << endl;
  		else cout << s << " No está en el directorio..."<<endl;
  		break;
  	case 4:
  		cout<<"\tEliminar"<<endl;
  		cout<<"Escribe su nombre: "; cin>>s;

  		p = directorio.find(s);
  		directorio.erase(p);
  		
  		cout<<"Contacto Eliminado..."<<endl;
  		
  		break;
  	default:
  		cout<<"No eligio una opcion valida..."<<endl;
  		break;
  }
  
  	cout<<"\n¿Deseas realizar otra operacion? \n1.-Si \n2.-No \n:"; cin>>opc2; 
  		if(opc2==1)
  		band=true;
  		else if(opc2==2)
  		band=false;
  		
  }while(band);

  

  system("pause");
  return 0;
}
