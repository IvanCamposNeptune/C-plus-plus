///*-------------------------------------
/*										/*
/										/
/  Alumnos: Ivan Felipe Campos Esparza, 	/*
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
		
		int i,j,ante,num,aux,anter,nume,auxi,suma;
		char otra;
		
		
		case 'A':
		
		cout<<"Cuantas impresiones deseas de la serie de fibonacci?"<<endl;
		cin>>j;
		
		if(j%2==0)
		{
			cout<<"El numero es par tiene que ser impar"<<endl;
		}
	else
	{
		int ff=0,almacen,yy=1,sumatora=1;
		
		num=0;
		ante=1;
		
			
		for(i=1;i<=j;i++)
		{
		
		cout<<"La serie es: "<<num<<endl;
		
		aux=num;
		num=num+ante;
		ante=aux;
		
		
		}	
		
		
		
		
		for(i=3;i<=j;i++)
		{
		
 		almacen=ff;
        ff=yy;
        yy=almacen+ff;
        sumatora+=yy;
		}
		cout<<"\n";
		cout<<"La suma de los numeros es: "<<sumatora<<endl;
		
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
	
		int contador=1,con=1,sum=0,res=0;
		
		
		for(i=1;i<=3;i++)
		{
		
		res=con*8+contador;
		
		
		cout<<con<<" * "<<"8"<<" + "<<contador<<" = "<<res<<endl;
		
		
		con=((con*10)+1)+contador;
		
		contador++;
			
		}
		
		contador=1,con=1,sum=0,res=0;
		
		for(i=1;i<=n;i++)
		{
		
		res=con*8+contador;
		
		con=((con*10)+1)+contador;
		
		contador++;
			
		}
		
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
		int contado=2,contado2=1,co=1,su=0,re=0;;
		
		
		for(i=1;i<=3;i++)
		{
		
		re=(co*9)+contado;
		
		
		cout<<co<<" * "<<"9"<<" + "<<contado<<" = "<<re<<endl;
		
		
		co=((co*10)+1)+contado2;
		
		contado++;
		contado2++;
			
			
		}
		
		int conta=2,conta2=1,c=1,s=0,r=0;;
		
		
		for(i=3;i<=nom;i++)
		{
		
		r=(c*9)+conta;
		
		
		c=((c*10)+1)+conta2;
		
		conta++;
		conta2++;
			
			
		}
		cout<<"\n";
		cout<<c<<" * "<<"9"<<" + "<<conta<<" = "<<r<<endl;
		
		
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
		
		int contle=1,sumati=0,resule=0;;
		
		for(i=1;i<=nur;i++)
		{
		
		
		
		resule=contle*contle;
		
		
		
		cout<<contle<<" * "<<contle<<" = "<<resule<<endl;
		
		
		contle=(contle*10)+1;
			
			
		}
			
		}
		
		break; 
		default: cout<<"No mames :V"<<endl;			


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
