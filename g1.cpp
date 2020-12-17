#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
void gramatica();
void inicio();
void produc();
main(){
 //char re;
	inicio();
	produc();
getch();	
}


void gramatica(){
	cout<<"G=({c},{S,A},S,P)"<<endl;
	cout<<"S"<<endl;
	cout<<"P:"<<endl;
	cout<<"1) S->? "<<endl;
	cout<<"2) S-> A "<<endl;
	cout<<"3) A->AA "<<endl;
	cout<<"4) A->c "<<endl;
}

void inicio(){
	char re;
	do{ 
		gramatica();
		cout<<"inicio: ";
	    cin>>re;
	   	if(re=='S'){
	    	cout<<"\t\t\t\t S ->"<<endl;
    	}
	    else{
		   cout<<"INCORRECTO"<<endl;
		   getch();
		   system("cls");
	   }
   }while(re!='S');
   //return re;
}

void produc(){
   char op;
     cout<<"Seleccione regla presione NT: ";
     cin>>op;
	 switch(op){
	 case 'S':
	     cout<<"\t\t\t\t S -> ?"<<endl;
	     cout<<"\t\t\t\t Fin de la palabra"<<endl;
	 break;
    }
} 
