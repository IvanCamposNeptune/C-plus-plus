#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	double matriz[100][100], fila, columna, suma=0, suma2=0, elementos=0;
	
	cout<<"Cuantas filas desea?: "; cin>>fila;
	cout<<"Cuantas columnas desea?: "; cin>>columna;
	
	cout<<"\n";
	
	//Llenar matriz
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
			cout<<"Digite un numero para "<<"["<<i<<"]"<<"["<<j<<"]: ";
			cin>>matriz[i][j];
			suma+=matriz[i][j];
			if(i==j){
			suma2+=matriz[i][j];
			elementos++;
			}		
		}
	}
	
	cout<<"\n";
	
	//Mostrar matriz
	cout<<"\nMatriz"<<endl;
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	//Mostrar diagonal principal
	cout<<"\nDiagonal principal"<<endl;
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
			if(i==j){
			cout<<matriz[i][j]<<" ";
			}		
			else{
			cout<<"(-)";
			}
		}
		cout<<"\n";
	}
	
	
	//Promedio de matriz
	double promedio = suma/(fila*columna);
	cout<<"\nEl promedio de la matriz es: "<<promedio<<endl;
	
	//Promedio de la diagonal principal
	double promedio2 = suma2/elementos;
	cout<<"\nEl promedio de la diagonal principal es: "<<promedio2<<endl;
	
		
		
	system("pause");	
	return 0;
		
}
