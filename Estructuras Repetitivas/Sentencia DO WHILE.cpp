#include <iostream>

/* La sentencia do while
	do{
		conjunto de instrucciones;
	}while(expresion logica);
*/ 

using namespace std;

int main(){
	system("color a");
	
	int i;
	
	i=1;
	
	do{
		cout<<i<<endl;
		i++; //aumenta el iterador de 1 en 1
	}while(i<=10);
	
	
	system("pause");
	return 0;
}
