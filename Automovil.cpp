//Automovil Lenguajes y Autómatas
#include<iostream>
#include<stdlib.h> //para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include<time.h>
#include<windows.h>

using namespace std;
	char suitch={0};
	int estado,opc=0;
	time_t inicio, ahora;
	
void EstadoApagado();
void EstadoPrendido();
void EstadoAvanzando();
void EstadoAvanzandoReversa();

	
int main() {	
	system("color a");
	
	estado=0;
	while(true){
		switch(estado){
			case 0:
				EstadoApagado();
					break;
			case 1:
				EstadoPrendido();
					break;
			case 2:
				EstadoAvanzando();
					break;
			case 3:
				EstadoAvanzandoReversa();
					break;
		}
	}
				
	system("pause");	
	return 0;		
}

void EstadoApagado(){
	int opcion;
	cout<<"Encender: 1   Cancelar: 2"<<endl;
	cin>>opcion;
	if(opcion==1){
	time(&inicio);
	estado=1;
}
	else
	estado=0;

}




	
	


