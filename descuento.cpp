#include <iostream>
#include "stdio.h"


using namespace std;

int cole=1500;
int desc;
float prom;


int main() {

	cout<<"Introduce tu promedio: ";
	cin>>prom;
		  
		  if(prom>10 or prom<0)
		  cout<<"El promedio no es valido";
		  
		  
		  if(prom>=9&&<=10)
		  desc=cole-(cole*.20);
		  else 
		  if(prom>=8&&<9)
		  desc=cole-(cole*.10);
		  else
		  if(prom>=7.5)
		  desc=cole-(cole*.05);
		  else
		  desc=0;
		  
	
		  
		cout<<"Su promedio es de: "<<prom<<" y su descuento es de: "<<desc;
		

	
	system("pause");
	
	
	
	return 0;
	
	
	
}
