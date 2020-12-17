#include <iostream>

using namespace std;

int main(){
	system("color a");
	//Compara si el numero que ingresaste es igual a 5 si no escribe que no lo es.
	
	int numero, dato=5;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	// == es para comparar si son iguales, != compara si es diferente, < compara si es menor, > si es mayor, <= menor o igual, >= mayor o igual.
	if(numero == dato){
		cout<<"El numero es 5"<<endl;//salto de linea es el endl
	}
	else{
		cout<<"El numero es diferente de 5"<<endl;
	}
	
	
	
	
	system("pause");
	return 0;
}
