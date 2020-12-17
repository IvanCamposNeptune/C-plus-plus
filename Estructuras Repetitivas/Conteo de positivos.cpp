#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	system("color a");
	
	int numero,conteo=0;
	
	do{
		cout<<"Digite un numero: ";
		cin>>numero;
		
		if(numero>0){
			conteo++;
		}
		
		
	}while(numero!=0);
	
	cout<<"\nEl numero de valores mayores a cero es: "<<conteo<<endl;
	
	system("pause");
	return 0;
}
