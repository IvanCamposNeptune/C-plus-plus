#include <iostream>
using namespace std;

void buscar_y_reemplazar(string& frase, string buscar, string rempl){
	int pos=frase.find(buscar);
	if(pos != -1){
		frase.replace(pos,buscar.size(),rempl);
		pos=frase.find(buscar, pos + rempl.size());
	}
}


int main(){
	system("color a");
	
	int iter;
		
	string aux;//donde se guarda la modificacion
		
	string inicio;
	inicio +="AA";//letra inicial
	
	
	do{
		fflush(stdin);		
		
		cout<<"0.Salir\n1.Iterar\n";
		cin>>iter;
		
		
	switch(iter){
		
	case 0: cout<<"Adios"<<endl;
	break;
	
	case 1:
	
	buscar_y_reemplazar(inicio,"A","bb");//Se modifico la letra (puede ser una regla)
	cout<<inicio<<endl;//Imprimiendo letra modificada
	
	aux=inicio;//Palabra modificada que cambia la variable global
	
	

	system("pause");
	break;
	
			}
	
	
	}while(iter!=0);
	
	
	
	
	system("pause");
	return 0;
}
