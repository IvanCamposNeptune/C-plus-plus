#include <iostream>
#include "stdio.h"


using namespace std;


	double volumen(double longitud, double ancho, double alto)
	{
		
	return longitud*ancho*alto;	
		
	}

int main() {	

	system("color a");

	
	double x=34, y=55, z=100;
	int i=3; 
	long j=44;
	unsigned k=33;
	

	

	cout<<volumen(x,y,z)<<endl;
	cout<<volumen(1,2,3)<<endl;
	cout<<volumen(i,j,k)<<endl;
	cout<<volumen(x,j,22.3)<<endl;

	
		
		
	system("pause");
		
	return 0;
	
	
}
