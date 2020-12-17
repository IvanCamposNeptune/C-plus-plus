#include <iostream>
#include <stdlib.h> //para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include<math.h> //Para la funcion de raiz cuadrada SQRT y para elevacion POW

using namespace std;


int main() {	
	system("color a");
	
	float a,b,c,x, /*Terminos de la formula general*/ resultado1=0,resultado2=0;
	
	cout<<"Digite el valor de a: "; cin>>a; 
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	
	float z;
	z=pow(b,2)-(4*a*c);
	
	if (a==0) {

	x=-(c/b);
	cout<<"X= "<<x<<endl;

    }
    
    else if(z==0){
    	
    	x=-b/2*a;
    	cout<<"X= "<<x<<endl;
    	
	}
	
	else if(z<0){
    	
    resultado1= ((-b/2*a)+(sqrt(pow(b,2)-(4*a*c)))*(-1))/(2*a);
	resultado2= ((-b/2*a)-(sqrt(pow(b,2)-(4*a*c)))*(-1))/(2*a);
	
	cout<<"\nResultado 1 es: "<<resultado1<<endl;
	cout<<"Resultado 2 es: "<<resultado2<<endl;
    
    	
	}
	else if(z>0){
    	
	resultado1= (-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	resultado2= (-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	
	cout<<"\nResultado 1 es: "<<resultado1<<endl;
	cout<<"Resultado 2 es: "<<resultado2<<endl;
    
    	
	}
	
	else 
	{
		cout<<"No tiene solucion"<<endl;
	}
	
	

	
		
		
	system("pause");	
	return 0;
		
}
