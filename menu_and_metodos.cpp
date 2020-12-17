#include <iostream>
#include <conio.h>
#include<stdio.h>
#include <string>

using namespace std;
void insercion();
void Burbuja();
int aux,a,i,j;
//char vector[' '];
int vector[3];

main(){
	
	char fin; 
	int b,in,o;
	do{
		system("CLS");
		cout<<endl<<"Ingrese_Tamaño_de_arreglo_  ";cin>>a;
		b=(a-1)*(a/2);
		in=2*(a-1);
if(b<=in){
			cout<<"\nSeleccione algun metodo: "<<endl;

		}
		

	
		cout<<" MENU \n";
		cout<<"1) Metodo_Burbuja \n";
		cout<<"2) Metodo_Insercion \n";
		cin>>o;
		
		switch(o){
		 	 	case 1:
		  		cout<<endl;
		  		Burbuja();
		  		cout<<"\n nueva_operacion_en_burbuja (s/n)"; cin>>fin;
		  		break;
		  		
		  		case 2:
		  		cout<<endl;
		  		insercion();
		  		cout<<"\n nueva_operacion_en_insercion (s/n)"; cin>>fin;
		  		break;
		  	
		  }
	}while(fin=='s');
}

void insercion(){
			for(i=1; i<=a; i++){
					cout<<"Ingrese Valor "<<i<<" del Valor "<<endl;
					cin>>vector[i];
								}
								
									for(i=1;i<a+1;i++){
										j=i;
									aux=vector[i];
									
		while(j>=0 && aux<vector[j-1]){
				vector[j]=vector[j-1];
					 			j--;
										}
		vector[j]=aux;
														}							
	cout<<"\n vector ordenado \n";
					for(i=1; i<=a;i++){
						cout<<vector[i]<<" ";
										}
}

void Burbuja(){
	for(i=1; i<=a; i++){
			cout<<"Ingrese Valor "<<i<<" del Valor "<<endl;
			cin>>vector[i];
						}
						
						for(i=1;i<=a;i++){
			for(j=1;j<=a-1;j++){
if(vector[j] > vector[j+1]){
			aux=vector[j];
			vector[j]=vector[j+1];
			vector[j+1]=aux;
							}	
								}
	}
	
			cout<<"vertor ordenado: ";
	for(i=1;i<=a;i++){
		cout<<vector[i]<<" ";
	}
}

