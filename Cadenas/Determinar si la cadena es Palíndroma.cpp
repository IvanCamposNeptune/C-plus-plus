#include<iostream>
#include<stdlib.h>
#include<string.h>//Para poder usar las cadenas

//Deternimar si una palabra es palíndroma  oso ... al reves es oso, por lo tanto la palabra es es palíndroma

using namespace std;

int main(){
	
	system("color a");
	
	char palabra1[20];
	char palabra2[20];
	
	cout<<"Digite una palabra: ";
	cin.getline(palabra1,20,'\n'); //Guardando palabra
	
	strcpy(palabra2,palabra1); //copia lo que tiene palabra1 en palabra2
	
	strrev(palabra2); //Invierte lo que tiene palabra2 
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"La palabra es Palíndroma \n";
	}
	else{
		cout<<"La palabra no es Palindroma \n";
	}
	
	system("pause");
	return 0;
	
}
