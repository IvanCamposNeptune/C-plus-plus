#include <iostream>
#include "stdio.h"


using namespace std;

int tab,ini,fin,mult,resu,veces;

int main() {	
		
		
		cout<<"Programa para crear la tabla del numero que indique hasta el que indique \n"<<endl;
		cout<<"Ingresa el numero de la tabla que deseas calcular"<<endl; cin>>tab;	
		
		cout<<"Ingresa el numero en el que quieres iniciar de la tabla"<<endl; cin>>ini;	
		cout<<"Ingresa el numero en el que quieres terminar de la tabla"<<endl; cin>>fin;
		
		cout<<" "<<endl;
		
		
		
		for(int i=ini;i<=fin;i++){
 	
 	
	 for(int j=1;j<=ini;j++)
	 {
		resu=resu+tab;
	 }


mult=ini++;

cout<<tab<<" x " <<mult<<" = "<<resu<<endl;

resu=0;

}
		
		
		
		
	system("pause");
		
	return 0;
	
	
}
