#include <iostream>
/*
La sentencia while:

	while(expresion logica)
	{
		conjunto de instrucciones;	
	}

*/



using namespace std;

int main(){
	system("color a");
	
	int i;
	
	i=1;
	
	while(i<=10) //Mientras que i sea menor o igual a 10 se ejecutara el bloque de codigo.
	{
		cout<<i<<endl;
		i++; //Aumenta de 1 en 1
	}

	
	
	
	system("pause");
	return 0;
}

