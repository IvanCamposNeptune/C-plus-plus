#include <iostream>
#include "stdio.h"


using namespace std;

int opc;

int main() {	

cout<<"Escoga 1 2 o 3";
cin>>opc;

int a=5,b=5;

switch(opc){
		
		case 1:
		cout<<"Suma, "<<"El resultado de la suma es: "<<a+b<<endl;	
		break;
		
		case 2:
		cout<<"Resta, "<<"El resultado de la resta es: "<<a-b<<endl;	
		break;
		
		case 3:
		cout<<"Multiplicacion, "<<"El resultado de la multiplicacion es: "<<a*b<<endl;	
		break;
		
		case 4:
			if(b==0){
				cout<<"No se puede realizar la operacion"<<endl;
			}
			
			else{
				cout<<"Division, "<<"El resultado de la division es: "<<a/b<<endl;
			}
		
		break;
		
		default:
			cout<<"El numero no es valido"<<endl;
		
	}
	
		
		
	system("pause");
		
	return 0;
	
	
}
