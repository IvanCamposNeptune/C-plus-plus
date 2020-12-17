#include <iostream>
#include "stdio.h"


using namespace std;


int main() {
	
	int i,j;
	double x,y;
	
	cout<<"Introduce el primer numero entero: "; cin>>i;
	
	cout<<"introduce el segundo entero: "; cin>>j;
	
	i+=j;  j-=6;
	
	i*=4;  j/=3;
	
	i++;   j--;
	
	cout<<"i="<<i<<endl
	<<"j="<<j<<endl;
	
	cout<<"x="<<x<<endl
	<<"y="<<y<<endl;
	
	system("pause");
	
	
	return 0;
}
