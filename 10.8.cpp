#include <iostream>
#include <cmath>
#include<sstream>  //Para usar el metodo stringstream
#include<string.h>//Para poder usar las cadenas
#include <cstdlib>//Para el atoi

using namespace std;

/*
  Escriba la expresion matematica de la funcion recursiva entre un comentario
*/
//Escriba las funciones o procedimientos aqui

int main() {
  //Reciba los datos
  
  
  int numero;
  
  cout<<"\nIngresa un numero natural: "; cin>>numero;
  
  if(numero>0){
  	
  	  //Convertir numero a cadena
  
  stringstream cadena;  //Variable cadena de tipo strinstream para convertir de int a string
  
  cadena<<numero; //Se almacena el numero entero en la variable cadena de tipo stringstream
  
  string numero_cadena; //Se crea una variable de tipo string donde se almacenara el numero convertido a cadena
  
  cadena>>numero_cadena; //Se almacena el numero convertido a cadena numero_cadena
  
  
  //Ejecute las funciones o procedimientos e Imprima el mensaje correspondiente
  
  
  //Convertir cadena string a char 
  
  char conver[20]; //Variable char donde se almacenara la cadena tipo string
  strcpy(conver,numero_cadena.c_str()); //Se convierte la cadena string a char con el metodo .c_str() y luego se copia a la cadena de tipo char para hacer la contabilidad
  
  //Contando caracteres de la cadena
    
  int longitud=0;//Se inicializa la longitud en 0
	
  longitud = strlen(conver);//Contando elementos de la cadena
  
  cout<<"Longitud: "<<longitud<<endl;
  
  //Suma de los numeros
  
  int suma=0;
  string numerocad;
  
  cout<<conver[0];
  
  for(int i=1; i<longitud; i++){
  	  	
  	cout<<" + "<<conver[i];
  	
  	numerocad=conver[i];//conver en su posicion 0 hasta n, que convierte a string para posteriormente convertirlo a entero con atoi
  	
  	suma += atoi(numerocad.c_str());//convirtiendo a entero y sumandolo al acumulador
  	
  }
  
  numerocad=conver[0]; //conver en su posicion 0
  
  suma += atoi(numerocad.c_str()); //Se le suma la posicion 0 ya que la omitimos para poder imprimir de manera adecuada
  
  
  
  cout<<"\nLa suma de los numeros es: "<<suma<<endl;
  
  //Modular de la suma entre 7
  
  int modular;
  
  modular = suma%7;
  
  cout<<"El modular de "<<suma<<" % "<<"7"<<" es: "<<modular<<endl;
  	
  }
  else if (numero<0){
  	cout<<"-1";
  }
    
  
}
