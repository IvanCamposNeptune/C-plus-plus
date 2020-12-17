#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	system("color a");
	
	int matriz1[3][3]={{1,2,1},{2,1,1},{2,1,2}};
	int matriz2[3][3]={{3,2,1},{2,3,1},{1,1,3}};
	int multiplicacion[3][3];
	

	//Multiplicando matrices
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		
			multiplicacion[i][j]=0;//En todas sus posiciones valdra 0
			
			for(int k=0; k<3; k++){
				multiplicacion[i][j] = multiplicacion[i][j] + matriz1[i][j] * matriz2[i][j];
			}
		}
	}
	
	cout<<"\n"; //Separando las matrices
	
	//Mostrar Matriz multiplicacion
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<multiplicacion[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	cout<<"\n";
	
	
	
	
	
	system("pause");
	return 0;
	
}
