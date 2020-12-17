/*Convertir Segundos en: horas, minutos y segundos

*/
#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funcion

void tiempo(int,int&,int&,int&);// tiempo(totalSeg,horas,minutos,segundos)


int main(){
	system("color a");
	int totalSeg,horas,min,seg;
	
	cout<<"Digite el numero total de segundos: "; cin>>totalSeg;

	tiempo(totalSeg,horas,min,seg);
	
	cout<<"\nTiempo equivalente a la cantidad de segundos digitados: "<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundos: "<<seg<<endl;
	
	getch();
	return 0;
}


//Definicion de Funcion

void tiempo(int totalSeg, int& horas, int& min, int& seg){
	
	horas = totalSeg/3600; //convierte el total de segundos en horas
	totalSeg = totalSeg % 3600; //Para restarle las horas al valor total de segundos
	
	min = totalSeg/60;// Se le resta a el total de segundos los minutos
	
	seg = totalSeg % 60;// y asi se saca el numero de segundos
	
	//Gracias al paso por referencia se cambian los valores de la direccion de memoria de horas minutos y segundos
	
}


