//Horno de Microondas Lenguajes y Autómatas
#include<iostream>
#include<stdlib.h> //para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include<time.h>
#include<windows.h>

using namespace std;

	int estado,tiempo;
	time_t inicio, ahora;
	
void EstadoApagado();
void EstadoCalentando();
	
int main() {	
	system("color a");
	
	estado=0;
	while(true){
		switch(estado){
			case 0:
				EstadoApagado();
					break;
			case 1:
				EstadoCalentando();
					break;
		}
	}
				
	system("pause");	
	return 0;		
}

void EstadoApagado(){
	cout<<"Introduce el tiempo: "<<endl;
	cin>>tiempo;
	int opcion;
	cout<<"Iniciar: 1   Cancelar: 2"<<endl;
	cin>>opcion;
	if(opcion==1){
	time(&inicio);
	estado=1;
}
	else
	estado=0;

}

void EstadoCalentando(){
	if(GetAsyncKeyState(VK_ESCAPE)){//Obtiene en tiempo de ejecucion el valor de una tecla
		cout<<"Cancelado"<<endl;
		estado=0;
		return;
	}
	
	time(&ahora); //Obtiene la hora actual
	int segundos=difftime(ahora,inicio); //resta la hora actual con la de inicio
	if(segundos>tiempo){
		cout<<"Tiempo Finalizado"<<endl;
		estado=0;
	}
	
	
}

