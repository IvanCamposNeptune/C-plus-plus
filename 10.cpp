#include <iostream>
#include "stdio.h"


using namespace std;

double x,desc1,desc2;
double cole=1000;

int main() {
	
		cout<<"El pago de la colegiatura es de 1000 pesos \n";
	
	cout<<"Dame una calificacion entre 0 y 10: ";
	cin>>x;
	
	if(x>9){
		
		desc1=cole-(cole*.25);
		
	
		cout<<"Su descuento es de 25% de colegiatura, usted paga: $"<<desc1<<endl;
		
		
		
			}
		
	else
	{
	if(x<=9){
		
		desc2=cole-(cole*.05);
		
	
		cout<<"Su descuento es de 5% de colegiatura, usted paga: $ "<<desc2<<endl;
		
		
		
			}
	}	
	
	system("pause");
	
	
	
	return 0;
	
	
	
}
