#include <iostream>
#include "stdio.h"


using namespace std;


int main() {	
		
		double x;
		char op;
		
		
		for ( ; ; )
		{
		
			cout<<"Ingresa un numero entero: "; cin>>x;
			
			if(x!=0){
			
							cout<<"1/ "<<x<<" = "<<1/x<<endl;
				cout<<"Desea realizar otra operación? (S/N): "<<endl;
				 cin>>op;
			
				if(toupper(op)!='S')
		
				break;
				
			
		}
			else{
			
			
			cout<<"Error no se puede dividir entre cero"<<endl;}
		}
	

	system("pause");
	return 0;
}



