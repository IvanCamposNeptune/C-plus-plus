#include <iostream>
#include <cmath>
#include<sstream>  //Para usar el metodo stringstream
#include<string.h>//Para poder usar las cadenas

using namespace std;

/*
  Escriba la expresion matematica de la funcion recursiva entre un comentario
*/
//Escriba las funciones o procedimientos aqui

int main() {
  //Reciba los datos
  int numero;
  
  cout<<"\nUltimo digito de un numero natural"<<endl;
  
  cout<<"\nIngresa un numero natural: "; cin>>numero;
  
  
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
  
  //Imprimiendo el ultimo digito
  int ultimo;
  
  ultimo = longitud-1; //Se le resta 1 ya que la contabilidad de la cadena empieza en 0. 
  
  cout<<"El ultimo numero natural es: "<<conver[ultimo]; //Imprime la ultima posicion del numero natural
  
  
}
