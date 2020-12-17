
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    int f, l, r, p, q, n, c=0, d=1, a;
    double rdl;
    char op, rp;
    do{
    	system("cls");  
	do{  
    cout<<"A)Sucesion Finonacci"<<endl;
    cout<<"B)Piramide del numero 8"<<endl;
    cout<<"C)Piramide del numero 9"<<endl;
    cout<<"D)Piramide de unos"<<endl;
    cout<<"E)Salir"<<endl;
    cout<<"Que opcion eliges?"<<endl;
    cin>>op;
    if(op!='a' && op!='A' && op!='b' && op!='B' && op!='c' && op!='C' && op!='d' && op!='D' && op!='e' && op!='E'){
    	system("cls");  
    	cout<<"-------->Solo elige una de esas letras<--------"<<endl;  
	}
}while(op!='a' && op!='A' && op!='b' && op!='B' && op!='c' && op!='C' && op!='d' && op!='D' && op!='e' && op!='E');
    
    if (op=='a' || op=='A'){
    	cout<<"Sucesion Fibonacci"<<endl;
    	do{
    	cout<<"Cuantas impresiones quieres que realice?"<<endl;
    	cin>>l;
    	rdl=l%2;
    	if (rdl==0 || l<=0){
    		cout<<"Ingresa un numero impar mayor de 0 para realizar la serie"<<endl;
		}
    }while(rdl==0 || l<=0);
    	p=0;
    	q=1;
    	for(f=1; f<=l; f++){
    		cout<<"Serie: "<<p<<endl;//0-1-1-2
    		r=p+q;//1-1-2
    		q=p;//0-1-1
    		p=r;//1-1-2
    		a+=q;
		}
		cout<<"La suma de todo es: " <<a <<endl;
	}
	
	if (op=='b' || op=='B'){
	do{
		cout<<"Cuantas impresiones quieres que realice?"<<endl;
    	cin>>l;
    	if (l<=0 || l>9){
		cout<<"Solo puede ser un numero del 1 al 9" <<endl;    		
		}
    }while(l<=0 || l>9);
    	double v[l], w[l];
    	
    	n=1;  
		v[0]=n; 
		w[0]=n; 	
    	for (f=1; f<=l; f++){ 
		if (f==1){		   	
    	n=n+pow(10, f);//1-11
    	v[f]=n;//1-11
    	w[f]=v[f]+w[f-1];//12
    	
    }
    if (f>1){
    	n=n+pow(10, f);
    	v[f]=n; 
    	w[f]=v[f]+w[f-1];
	}
		}    	
	
		
		for (f=0; f<l; f++){
			c++;			
    		cout<<w[f] <<" x 8 + " <<c <<" = "  <<w[f]*8+c <<endl;
    		
		}   	
		
	}
	
	if (op=='c' || op=='C'){
		do{
		cout<<"Cuantas impresiones quieres que realice?"<<endl;
    	cin>>l;
    	if (l<=2 || l>10){
    		cout<<"El numero debe ser entre el 2 y 10" <<endl;
		}
    }while(l<=2 || l>10);
    
 	double v[l], w[l];    	
    	n=1;  
		v[0]=n; 
		w[0]=n; 	
    	for (f=1; f<=l; f++){ 
		if (f==1){		   	
    	n=n+pow(10, f);//1-11
    	v[f]=n;//1-11
    	w[f]=v[f]+w[f-1];//12
    	
    }
    if (f>1){
    	n=n+pow(10, f);
    	v[f]=n; 
    	w[f]=v[f]+w[f-1];
	}
		}    	
	
		
		for (f=0; f<l-1; f++){
			d++;			
    		cout<<w[f] <<" x 9 + " <<d <<" = "  <<w[f]*9+d <<endl;
    		
		} 		
	}
	
	if (op=='d' || op=='D'){
		do{
		cout<<"Cuantas impresiones quieres que realice?"<<endl;
    	cin>>l;
    	if (l<1 || l>9){
    		cout<<"Solo puede ser un numero entre el 1 al 9"<<endl;
		}
    }while(l<1 || l>9);
    	
    	double v[l];
    	
    	n=1;  
		v[0]=n;  	
    	for (f=1; f<l; f++){    	
    	n=n+pow(10, f);
    	v[f]=n;
		}    	    	
    	
    	for (f=0; f!=l; f++){
    		cout<<v[f] <<" x " <<v[f] <<" = " <<v[f]*v[f]<<endl;
    		
		}
		
	}
	
	if (op=='e' || op=='E'){
		break;
	}
	
	cout<<"Quieres repetir el programa?(s/n)?"<<endl;
	cin>>rp;
	if (rp!='s' && rp!='S'){
	break;
	}	
}while(rp=='s' || rp=='S');

    system("Pause");    // Hacer una pausa
    return 0;           // Valor de retorno al S.O.
}

// Implementación de Procedimientos y Funciones

