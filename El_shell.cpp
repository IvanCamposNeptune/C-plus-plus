#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	int x[5];//ahora va a tener un arreglo de 5 espacios iniciando en 0
	int bandera=5;// bandera funcion tipo tope
	int inter, i=0,j=0,k=0,aux;
	system("CLS");
	
	for(i=0; i<5; i++){
		cout<<"un vector con 5 posiciones\n";
		cout<<"Ingrese_el_valor_de_la_posicion_  "<<i<<" ";
		scanf("%d",&x);
	}
while(inter>0){
		for(i=inter;i<bandera;i++){
			j=i-inter;
	while(j>=0){
				k=i+inter;
if(x[j]<=x[k]){
					j--;
				}
	else{
				aux=x[j];
				x[j]=x[k];
				x[k]=aux;
				j=j-inter;
				}
			}
		}
		
		inter=inter/2;
	}
	
	for(int i=0;i<5;i++){
		cout<<endl<<x[i];
	}
	getch();
}

