#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	system("color a");
	
	int matriz1[3][3]={{1,0,4},{2,3,2},{1,4,1}};
	int matriz2[3][3]={{1,3,2},{4,1,1},{1,1,2}};
	
	cout<<"Mostrando las dos matrices: \n";
	//Matriz 1
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n"; //Separando las matrices
	
	//Matriz 2
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n";// Separando matrices
	
	cout<<"La suma de las dos matrices es: \n";
	//Sumando matrices
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		cout<<matriz1[i][j] + matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	
	
	
	
	
	system("pause");
	return 0;
	
}
