#include<iostream>// para el cout y cin
#include<stdio.h>
#include<stdlib.h>//libreria para la conversion a hexa
#include<conio.h>
#include<cstdlib>
#include<bits/stdc++.h>//libreria para convertir a entero

#include <time.h> // para sincronizar con la hora y poder generar los numero aleatorios
#define RANDOM(A, B) (rand() % ((B) - (A) + 1) + (A))//para generar los numeros aleatorios

FILE *doc;// Se declara doc como documento


using namespace std;

const unsigned maxi1=40;
const unsigned maxi2=40;


int main() {	

	doc = fopen("parcial3.txt","at");//Se le da nombre al documento y se configura para que no se sobreescriba.
		

		char otra;
	
		
		do{
			
			system("cls");
				system("color a");
				
				cout<<"";
cout<<"/----------------------------------------/"<<endl;
cout<<"/  Alumno: Ivan Felipe Campos Esparza 	/"<<endl;
cout<<"/  Matricula:1631113243	    		/"<<endl;
cout<<"/  Grupo:60344			    	/"<<endl;
cout<<"/----------------------------------------/"<<endl;
cout<<"\n";
				
		
		char in;
		
		cout<<"Eliga el inciso que desea realizar: "<<endl;
		cout<<"A) Llenado de un Vector"<<endl;
		cout<<"B) Manejo de Cadenas"<<endl;

		fprintf(doc,"%s ","Opcion elegida: ");

		cin>>in; 
		fprintf(doc,"%c \n",in);// se guarda lo que se ingreso en in con c por que es tipo char
		
		in=toupper(in);
	
	switch(in){
			
		
		case 'A':	
		
    int i,j;
	double num;// donde se almacena el valor aleatorio
	double aux;//donde se almacena el valor mayor o menor
	
	double vector[20];//tamaño de datos maximo.

    
    srand(time(NULL));//para que no se repita.
    
    
    for(i = 1; i <= 15; i++)
    {
	
	cout<<"Vector: "<<i<<endl;
	fprintf(doc,"%s ","Vector: ");// se guarda en el documento la palabra vector
	fprintf(doc,"%d \n",i); // se guarda en el documento la posicion del vector

    num= RANDOM(10*100,100*100) / 100.00; //genera un numero entre el 10 y el 100  multiplicado por 100 y dividivo entre 100 para que de 2 decimas.
    
    vector[i]=num;//num se almacena en vector con posicion de i la cual se incrementa en cada vuelta hasta llegar a 15
    
    printf("%.2f\n", num );// el %.2 limita las decimas a 2.
    fprintf(doc,"%.2f \n",num);// se guarda en el documento el valor del numero aleatorio
    
    
	
	}
	
	char opi;
	
	cout<<"\nQuieres ordenarlos?"<<endl;
	cout<<"A)  De Mayor a Menor"<<endl;
	cout<<"B)  De Menor a Mayor"<<endl;
	
	fprintf(doc,"%s ","\nOpcion elegida: ");
	cin>>opi;
	fprintf(doc,"%c \n",opi);
	
	opi=toupper(opi);
	
	switch(opi)
	{
		case 'A':
			
	for(i = 1; i <= 15; i++)//Ahora se ordenaran i en posicion 1
		{	
		
		for(j=i + 1; j <= 15; j++)//se le suma uno a i para que j este en la posicion 2
			{
			
			if(vector[i]<vector[j])// Compara que "i=posicion 1" sea menor que "j=posicion 2" si es asi "j" cambia al lugar de "i" osea en la primer posicion 
				{
				
				aux=vector[i];//aux = vector posicion 1
				vector[i]=vector[j]; // el valor de la posicion 1 se cambiaria a el de la posicion 2 y se borraria el valor de la posicion 1 por lo cual se guardo en aux.
				vector[j]=aux; // la posicion 2 toma el valor de la posicion 1
				
				//los valores mayores se van acomodando en la parte izquierda.
				
				
				}	
			
			}
		
		
		}
	
	cout<<"\nVector ordenado de Mayor a Menor"<<endl;
	fprintf(doc,"%s ","\nOrdenado de Mayor a Menor: \n");
	
	
	for(i = 1; i <= 15; i++)
	{
		cout<<"Lugar: "<<i<<endl;
		cout<<vector[i]<<endl;
		
		fprintf(doc,"%s","Lugar: ");
		fprintf(doc,"%d \n",i);
		fprintf(doc,"%.2f \n",vector[i]);
		
		
	}
			
			
		break;
		
		case 'B':
			
	for(i = 1; i <= 15; i++)//Ahora se ordenaran i en posicion 1
		{	
		
		for(j=i + 1; j <= 15; j++)//se le suma uno a i para que j este en la posicion 2
			{
			
			if(vector[i]>vector[j])// Compara que "i=posicion 1" sea mayor que "j=posicion 2" si es asi "j" cambia al lugar de "i" osea en la primer posicion 
				{
				
				aux=vector[i];//aux = vector posicion 1
				vector[i]=vector[j]; // el valor de la posicion 1 se cambiaria a el de la posicion 2 y se borraria el valor de la posicion 1 por lo cual se guardo en aux.
				vector[j]=aux; // la posicion 2 toma el valor de la posicion 1
				
				//los valores menores se van acomodando en la parte izquierda.
				
				
				}
			
			}
		
		
		}
	
	cout<<"\nVector ordenado de Menor a Mayor"<<endl;
	fprintf(doc,"%s ","\nOrdenado de Menor a Mayor: \n");
	
	for(i = 1; i <= 15; i++)
	{
		cout<<"Lugar: "<<i<<endl;
		cout<<vector[i]<<endl;
		
		fprintf(doc,"%s ","Lugar: ");
		fprintf(doc,"%d \n",i);
		fprintf(doc,"%.2f \n",vector[i]);
		
		
	}
			
		
		break;	
			
	}
	
	
		
		
		break;
		
		
		case 'B':
			
	char part1[maxi1];
	char part2[maxi2];
	int cade,x,a=0,p=0,e=0;
	char b=' ';

	cout<<"Ingresa un palindromo: ";
	fprintf(doc,"%s ","\nIngresa un Palindromo: \n");
	
	fflush(stdin);
	cin.getline(part1,maxi1);
	
	fprintf(doc,"%s \n",part1);

	cade=strlen(part1);

	for(i=0;i<=cade;i++)
	{
		if(part1[i]==b)
		i++;
		part2[e]=part1[i];
		e++;
	}
	    
	    for(x=cade-1;x>=0;x--)
		
	    cout<<part1[x];
	    x=0;
	    cade=strlen(part2);
		
	    
		for(x=cade-1;x>=0;x--)
		{
	    	if(part2[x]==part2[a])
	    	p++;
	    	a++;
		}
		
		if(p==cade)
		{
			
			cout<<"\nHas escrito un palindromo podemos continuar..."<<endl;
			fprintf(doc,"%s ","\nHas escrito un palindromo podemos continuar... \n");

		string nombre,apel1,apel2,numtel;
		
		int edad;
		
		
		cout<<"\nIntroduce nombre: "<<endl;
		fflush(stdin);//limpia el buffer osease que guarda el enter y soluciona que aveces se salte a la otra insctruccion, pasa con el get.
		getline(cin,nombre); cout<<"\n\n";
		
		fprintf(doc,"%s ","\nNombre: \n");
		fprintf(doc,"%s \n",nombre.c_str()); //para resolver un error de que no se puede convertir a string delante de la variable se escribe .c_str que es para convertir a string.
		
		cout<<"Introduce apellido paterno: "<<endl;
		fflush(stdin);
		getline(cin,apel1); cout<<"\n\n";
		
		fprintf(doc,"%s ","\nApellido paterno: \n");
		fprintf(doc,"%s \n",apel1.c_str());
		
		
		cout<<"Introduce apellido materno: "<<endl;
		fflush(stdin);
		getline(cin,apel2); cout<<"\n\n";
		
		fprintf(doc,"%s ","\nApellido materno: \n");
		fprintf(doc,"%s \n",apel2.c_str());
		
		cout<<"Introduce tu edad: "<<endl;
		cin>>edad; cout<<"\n\n";
		
		fprintf(doc,"%s ","\nEdad: \n");
		fprintf(doc,"%d \n",edad);
		
		cout<<"Introduce tu numero telefonico: "<<endl;
		fflush(stdin);
		cin>>numtel; cout<<"\n\n\n\n\n";
		
		fprintf(doc,"%s ","\nNumero telefonico: \n");
		fprintf(doc,"%s \n",numtel.c_str()); // Se pone de nuevo el .c_str() para arreglar el error
		

		
		cout<<"Datos ingresados: \n";
		cout<<"Nombre: "<<nombre<<" "<<apel1<<" "<<apel2<<", "<<"Edad: "<<edad<<", "<<"No.Telefonico: "<<numtel<<endl;
		cout<<"\n\n\n";
		
		fprintf(doc,"%s ","\nDatos Ingresados: \n");
		
		fprintf(doc,"%s ","Nombre: ");fprintf(doc,"%s ",nombre.c_str());   fprintf(doc,"%s "," ");fprintf(doc,"%s ",apel1.c_str());
		
		fprintf(doc,"%s "," ");fprintf(doc,"%s ",apel2.c_str());   fprintf(doc,"%s ",",\n Edad: ");fprintf(doc,"%d ",edad);
		
		fprintf(doc,"%s ",", Numero telefonico: "); fprintf(doc,"%s ",numtel.c_str()); fprintf(doc,"%s ","\n ");
		
		
		
		
		
		cout<<"Cadena de salida: \n";
		
		char edahexa [33];
 		itoa (edad,edahexa,16);//convierte la edad a hexadecimal edad es la que se transforma, edahexa donde se almacena y 16 es la base numerica utilizada para representar el valor como una cadena, entre 2 y 36, en donde 10 significa que la base es decimal , 16 hexadecimal, 8 octal, y 2 binario.
 		
 		
 		int k = atoi(numtel.c_str()); //se convierte a entero el numero telefonico
 		
 		char numhexa [33];
 		itoa (k,numhexa,16);//se convierte el numero telefonico a hexadecimal
 		
		
		cout<<"Tu nombre es: "<<nombre<<" "<<apel2<<" "<<apel1<<", "<<"Y tienes: "<<edahexa<<" primaveras"<<"\n"<<"Y tu numero telefonico es: "<<numhexa<<endl;
		
		
		fprintf(doc,"%s ","\nCadena de salida: \n");
		
		fprintf(doc,"%s ","Tu nombre es: ");fprintf(doc,"%s ",nombre.c_str());  fprintf(doc,"%s "," ");fprintf(doc,"%s ",apel2.c_str());
		
		fprintf(doc,"%s "," ");fprintf(doc,"%s ",apel1.c_str());   fprintf(doc,"%s ",", Y tienes: "); fprintf(doc,"%s ",edahexa); fprintf(doc,"%s "," primaveras\n");
		
		fprintf(doc,"%s ","Y tu numero telefonico es: "); fprintf(doc,"%s ",numhexa); fprintf(doc,"%s ","\n");

		}
		else
		{
		
		cout<<endl<<"No es palindromo"<<endl;
		fprintf(doc,"%s ","\nNo escribiste un palindromo \n");
		
		}
		
		break;

	

			}	 //Fin de el programa
	



	cout<<"\n"<<endl;
	cout<<"Desea realizar otro inciso?  S/N ?"<<endl;
	fflush(stdin);
	cin>>otra;
	otra=toupper(otra);
	
		
		if(otra=='S' or otra=='N')
			{
		
			}
		
	else{
	 cout<<"Caracter no valido"<<endl;
		}
		

	
	
	
	}while(otra=='S');
		
		
	system("pause");
		
	fclose(doc);// se cierra el documento	
	return 0;
	
	
}
