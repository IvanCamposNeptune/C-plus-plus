#include <iostream>
#include "stdio.h"


using namespace std;


char opc;
int a,b;

int main() {	



    cout<<"Operaciones entre dos numeros"<<endl;
    cout<<"Introduce el primer numero: "<<endl;
	cin>>a;
	cout<<"Introduce el segundo numero: "<<endl;
	cin>>b;
	
	cout<<"Ahora elige la operacion que quieras realizar: ";
	

	cout<<"A suma, B resta, \n C multiplicacion, D division: \n";
	
	cin>>opc;
	opc=toupper (opc);
	
	switch(opc){
		
		case 'A':
		cout<<"Suma, "<<"El resultado de la suma es: "<<a+b<<endl;	
		break;
		
		case 'B':
		cout<<"Resta, "<<"El resultado de la resta es: "<<a-b<<endl;	
		break;
		
		case 'C':
		cout<<"Multiplicacion, "<<"El resultado de la multiplicacion es: "<<a*b<<endl;	
		break;
		
		case 'D':
			if(b==0){
				cout<<"No se puede realizar la operacion"<<endl;
			}
			
			else{
				cout<<"Division, "<<"El resultado de la division es: "<<a/b<<endl;
			}
		
		break;
		
		default:
			cout<<"La letra no es valida"<<endl;
		
	}
	
		
	system("pause");
		
	return 0;
	
	
}
