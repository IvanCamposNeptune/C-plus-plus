#include <iostream>
#include "stdio.h"


using namespace std;


int main() {
	
int a,b,c,d,e; 
int respro,resudivi,resum=0;
	
	
		cout<<"Dame 5 numeros para sacar el promedio y una suma del 1ero 2do y 3ero\n"<<endl;
	
		cout<<"Introduce el primer numero entero: "; cin>>a;
		
		cout<<"Introduce el segundo numero entero: "; cin>>b;
		
		cout<<"Introduce el tercer numero entero: "; cin>>c;
		
		cout<<"Introduce el cuarto numero entero: "; cin>>d;
		
		cout<<"Introduce el quinto numero entero: "; cin>>e ;
		
		respro=(a+b+c+d+e)/5;
		
		resum=(a+c+e);
		
		resudivi=(d/b);
		
		cout<<"El promedio de los 5 numeros es: \n"<<respro<<endl;
		
			cout<<"La suma del 1er 3er y 5to numero es: "<<resum<<endl;

			cout<<"La division del 4to con el segundo es: "<<resudivi<<endl;		
		
	
	system("pause");
	
	
	
	return 0;
	
	
	
}
