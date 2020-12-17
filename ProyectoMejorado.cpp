///*-------------------------------------
/*										/*
/										/
/  Alumnos: Ivan Felipe Campos Esparza  /*
/  Matricula:1631113243					/
/  Grupo:60344							/*
/										/
/*										/*
*///-------------------------------------



#include <iostream>
#include "stdio.h"
#include<math.h> 



using namespace std;



int main() {	
	
		char otra;
		
		do{
			
			system("cls");
				system("color a");
				
				cout<<"";
cout<<"///*-------------------------------------"<<endl;
cout<<"/*										/"<<endl;
cout<<"/										/"<<endl;
cout<<"/  Alumno: Ivan Felipe Campos Esparza 	/"<<endl;
cout<<"/  Matricula:1631113243				    /"<<endl;
cout<<"/  Grupo:60344							/"<<endl;
cout<<"/										/"<<endl;
cout<<"/*										/"<<endl;
cout<<"*///-------------------------------------"<<endl;
cout<<"\n";
				
		
		char in; 
		
		cout<<"Eliga el inciso que desea realizar: "<<endl;
		cout<<"A) Serie de fibonacci"<<endl;
		cout<<"B) Piramide del numero 8"<<endl;
		cout<<"C) Piramide del numero 9"<<endl;
		cout<<"D) Piramide de Unos"<<endl;
		cin>>in,cout<<" \n"; 
		
		in=toupper (in);
	
	switch(in){
		

		char otra;
		
		
		case 'A':
			
			int j;
		
		cout<<"Cuantas impresiones deseas de la serie de fibonacci?"<<endl;
		cin>>j;
		
		if(j%2==0)
		{
			cout<<"El numero es par tiene que ser impar"<<endl;
		}
	else
	{
		int aux,num,ante;
	
		num=0;
		ante=1;
		
			
		for(int i=1;i<=j;i++)
		{
		
		cout<<"La serie es: "<<num<<endl;
		
		aux=num;
		num=num+ante;
		ante=aux;
			
		}	
		
		int f=0,y=1,suma=1;
		
		for(int i=3;i<=j;i++)
		{

 		aux=f; // 0,1,1
        f=y; // 0,1,1
        y=aux+f; //1,1
        suma+=y;
		}
		cout<<"\n";
		cout<<"La suma de los numeros es: "<<suma<<endl;
		
	}

		break;
	
		
		case 'B':
		
		int n;
		
		cout<<"Dame un numero entre el 1 y el 9"<<endl;
		cin>>n;
		
		if(n<=0 or n>=10)
		{
			cout<<"Ha sobrepasado el limite"<<endl;
		}
		
		else
		{
	
		int con=1,conta=1,sum=0,res=0;
		
		
		for(int i=1;i<=3;i++)
		{
		
		res=(con*8)+conta;
		
		
		cout<<con<<" * "<<"8"<<" + "<<conta<<" = "<<res<<endl;
		
		
		con=((con*10)+1)+conta;
		
		conta++;
			
		}
		
		con=1,conta=1,sum=0,res=0;
		
		for(int i=2;i<=n;i++)
		{
		
		con=((con*10)+1)+conta;
		
		conta++;
			
		}
		
		res=(con*8)+conta;
		
		cout<<"\n";
		
		cout<<con<<" * "<<"8"<<" + "<<n<<" = "<<res<<endl;
			
		
		}
		
		
				
		
			
		break;
			
	
		case 'C':
			
		int nom;
		
		cout<<"Dame un numero entre el 2 y el 10"<<endl;
		cin>>nom;
		
		if(nom<=1 or nom>=11)
		{
			cout<<"Ha sobrepasado el limite"<<endl;
		}
		
		else
		{
		int con=1,conta=2,sum=0,res=0,control=1;
		
		
		for(int i=1;i<=3;i++)
		{
		
		res=(con*9)+conta;
		
		
		cout<<con<<" * "<<"9"<<" + "<<conta<<" = "<<res<<endl;
		
		
		con=((con*10)+1)+control;
		
		conta++;
		control++;
			
		}
		
		con=1,conta=2,sum=0,res=0,control=1;
		
		for(int i=3;i<=nom;i++)
		{
		
		con=((con*10)+1)+control;
		
		
		conta++;
		control++;
			
		}
		
		res=(con*9)+conta;
		
		cout<<"\n";
		
		cout<<con<<" * "<<"9"<<" + "<<nom<<" = "<<res<<endl;
			
		
		}
			
	
	
		break;

	
	
		case 'D':
		
		int nur;
		
		
		cout<<"Dame un numero entre el 1 y el 9"<<endl;
		cin>>nur;
		
		if(nur<=0 or nur>=10)
		{
			cout<<"Ha sobrepasado el limite"<<endl;
		}
		
		else
		{
		
		int con=1,conta=1,sum=0,res=0;
		
		
		for(int i=1;i<=nur;i++)
		{
		
		res=(con*con);
		
		
		cout<<con<<" * "<<con<<" = "<<res<<endl;
		
		
		con=((con*10)+1);
		
		
			
		}
		
		
			
		}
		
		break; 
		default: cout<<"Caracter invalido"<<endl;			


}	 //Fin de el programa
	



	cout<<"\n"<<endl;
	cout<<"Desea realizar otro inciso?  S/N ?"<<endl;
	cin>>otra;
	otra=toupper (otra);
	
		
		if(otra=='S' or otra=='N')
			{
		
			}
		
	else{
	 cout<<"Caracter no valido"<<endl;
		}
	
	
	
	}while(otra=='S');
		

		
	system("pause");
		
	return 0;
	
	
}
