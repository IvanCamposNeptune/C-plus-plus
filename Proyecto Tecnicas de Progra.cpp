#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int factorial(int n){
	return (n == 0) ? 1 : n * factorial(n - 1);	//Si n=0 regresa 1 sino n*n-1
}

int fibonacci (int n){
	if (n==0 || n==1){
		return n;
	}	
	else{
		return (fibonacci(n-1) + fibonacci(n-2));
	}
	
}

int main()
{
	system("color a");
	int op, nf, i, ci, cd, ce=1;
	int long long p;
	do{
	system("cls");
	cout<<"=============================================="<<endl;
	cout<<"Ejemplos de uso de recursividad"<<endl;
	cout<<"1.- Factorial"<<endl;
	cout<<"2.- Fibonacci"<<endl;
	cout<<"3.- Torres de Hanoi"<<endl;
	cout<<"4.- Salir"<<endl;
	cout<<"Elige una opcion"<<endl;
	cout<<"=============================================="<<endl;
	cin>>op;
	
	
	if (op==1){
	cout<<"Ingresa un numero"<<endl;	
	cin>>nf;
	cout<<nf<<"! es igual a: ";
	for (i=nf; i!=0; i--){
		if(i>1){
			cout<<i <<"*";
		}
		if (i==1){
			cout<<i;
		}		
	}
	cout<<"\nEl factorial de " <<nf <<" es: "<<factorial(nf) <<endl;		
	}	
	
	if (op==2){
		cout<<"Cuantas impresiones se realizaran?"<<endl;
		cin>>ci;	
		for(i=1; i<=ci; i++){
			cout<<fibonacci(i) <<" , ";
		}		
	}
	
	if (op==3){
		cout<<"Introduce cuantos discos tiene la torre"<<endl;
		cin>>cd;
		p=pow(2, cd);
		p-=1;
		cout<<"Cantidad de pasos para acomodar la torre: " <<p <<endl;		
	}
	
	if (op==4){
		return 0;
	}
	system("Pause");  
}while(ce==1);
	
    return 0;           // Valor de retorno al S.O.
}

