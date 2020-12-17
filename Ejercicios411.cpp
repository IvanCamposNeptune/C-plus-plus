#include <iostream>
#include <stdlib.h> //Para el system("pause"); ,  O  #include <conio.h> para usar el getch();
#include <locale.h>//Para usar el idioma español "caracteres especiales"

using namespace std;


int main() {	
	system("color a");
	setlocale(LC_CTYPE,"Spanish");//Se manda llamar a las funciones de la biblioteca locale, en español.
	
	
	        //Declaracion de variables        
        int num1 = 10, num2 ,paso, mult2;
               
        //Ejercicio 4.4
        //Introduccion de valores       
        
        cout<<"4.4 Multiplicacion del primer numero X 2"<<endl;
        
     	cout<<"\nDigita el primer valor: "<<endl;
        
        cin>>num1;
        
        cout<<"\nDigita el segundo valor: "<<endl;
        
        cin>>num2;
        
        //Numero1 x 2
        mult2 = num1*2;
        
        cout<<"\nNum1 = " << num1 << " Num2 = "<< num2 <<endl;
               
        cout<<"\nLa multiplicacion de el primer numero X 2 es = "<< num1 << " X 2 = "<< mult2;
        
        //Ejercicio 4.5
        cout<<"\n"<<endl;
        cout<<"\n4.5 Intercambiar posicion de dos valores"<<endl;
        
        int posicion1=num1, posicion2=num2;
        
        cout<<"Posicion 1 = " << posicion1 << " Posicion 2 = " << posicion2<<endl;
        
        
        paso = posicion1; //Guardando el valor de la posicion 1
        
        posicion1 = posicion2; //asignando el valor de la posicion 2 a la posicion 1
        
        posicion2 = paso; //Asignando a la posicion 2 el valor de Paso, paso vale lo que la posicion 1
                
        
        cout<<"\nIntercambio de posicion... Posicion 1 = " << posicion1 << " Posicion 2 = " << posicion2<<endl;
        
        
        //4.6
        
        //Declaracion de variables
        
        int division, modular, opcion;
        
        do{
       
        cout<<"\n4.6 Division y modular de 2 valores (Con opcion de realizarlo con diferentes valores"<<endl;
                    
                    //Introduccion de valores        
        cout<<"\nDigita el primer valor: "<<endl;
        
        cin>>num1;
        
        cout<<"\nDigita el segundo valor: "<<endl; 
        
        cin>>num2;
        
        //Operaciones
        
        //Division
        division = num1/num2;
                
        //Modular
        modular = num1%num2;
        
        
        //Operaciones en pantalla
        
            cout<<"\nLa division del numero1/numero2: " << num1 << "/" << num2 << " = " << division<<endl;
            
            cout<<"\nEl modular del numero1%numero2: " << num1 << "%" << num2 << " = " << modular<<endl;
        
        
        
        //Preguntar si quiere realizarlo de nuevo    
        
            cout<<"\nSi=1 \nNo=2 \n¿Deseas realizarlo de nuevo con otros numeros? = "<<endl;
            
            cin>>opcion;
        
        
        
        }while(opcion==1);
        
        
        //4.7
        //Longitud y anchura de una habitacion para ver su superficie
        
        cout<<"\n4.7 Longitud y anchura de una habitacion para ver su superficie"<<endl;
        
        //Declaracion de variables
        
        float longuitud, ancho, igual;
        cout<<"\nIngresar medida de la longuitud: "<<endl;
        cin>>longuitud;
        cout<<"Ingresar medida del ancho:  "<<endl;
        cin>>ancho;
        
        //Calcular superficie
        
        igual=longuitud*ancho;
        
        cout<<"Tu resultado es:  " << igual <<endl;
        
        
        
        //4.8
        //Suma de dos numeros decimales
        //Declaracion de variables
        
        cout<<"\n4.8 Suma de dos numeros decimales"<<endl;
        
        
        double valor1, valor2, total;
        
        cout<<"\nIngrese el primer decimal: "<<endl;
        cin>>valor1;
        
        cout<<"Ingrese el segundo decimal: "<<endl;
        cin>>valor2;
        
        //Resultado de la suma de ambos decimales
        
        total = valor1 + valor2;
        
        cout<<"La suma de los decimales es: " << total<<endl;
        
        
        //4.9
        //Clasificar un entero en distintas categorias
        
        cout<<"\n4.9 Clasificar un entero en distintas categorias"<<endl;
        
        //Declaracion de variable
        bool x=false;
        int entero;
        
        //Definicion de datos
        cout<<"\nIngrese un numero entero: "<<endl;
        cin>>entero;
                
        if(entero<0){
            cout<<"Su entero es menor que 0"<<endl;
        
        
        }
        if(entero<=entero & entero<=100) {
            cout<<"Su entero es menor o igual a 100"<<endl;
        
        }
        if(entero>100) {
            cout<<"Su entero es mayor que 100"<<endl;
        
        }
        
        
       //4.10
       //Escribir un programa que introduzca el numero de un mes (1-12) y visualize el numero de sus dias
        
        cout<<"\n4.10 Escribir un programa que introduzca el numero de un mes (1-12) y visualize el numero de sus dias"<<endl;
        
        //Declaracion de variables
        
        int opc,ene=31,feb=28,mar=31,abr=30,may=31,jun=30,jul=31,ago=31,sep=30,oct=31,nov=30,dic=31;
        
        cout<<"1 = Enero \n2 = Febrero \n3 = Marzo \n4 = Abril \n5 = Mayo \n6 = Junio \n7 = Julio \n8 = Agosto \n9 = Septiembre \n10 = Octubre \n11 = Noviembre \n12 = Diciembre"<<endl;
        cout<<"\nEliga uno para mostrarle el numero de sus dias: "<<endl;
        cin>>opc;
        
        switch(opc){
            case 1:
                cout<<"Enero tiene " << ene << " dias"<<endl;
                break;
            case 2:
                cout<<"Febrero tiene " << feb << " dias"<<endl;
                break;
            case 3:
                cout<<"Marzo tiene " << mar << " dias"<<endl;
                break;
            case 4:
                cout<<"Abril tiene " << abr << " dias"<<endl;
                break;
            case 5:
                cout<<"Mayo tiene " << may << " dias"<<endl;
                break;
            case 6:
                cout<<"Junio tiene " << jun << " dias"<<endl;
                break;
            case 7:
                cout<<"Julio tiene " << jul << " dias"<<endl;
                break;
            case 8:
                cout<<"Agosto tiene " << ago << " dias"<<endl;
                break;
            case 9:
                cout<<"Septiembre tiene " << sep << " dias"<<endl;
                break;
            case 10:
                cout<<"Octubre tiene " << oct << " dias"<<endl;
                break;
            case 11:
                cout<<"Noviembre tiene " << nov << " dias"<<endl;
                break;
            case 12:
                cout<<"Diciembre tiene " << dic << " dias"<<endl;
                break;
                
            
            default:
                cout<<"No ingreso un numero dentro del rango"<<endl;
                break;
                
        }
        
        
        
       //4.11
       //Escribir un programa que lea 2 numeros y vizualize el mayor; utilizar el operador ternario ?:
        
        cout<<"\n4.11 Mayor de dos numeros con ternario"<<endl;
        
        //Declaracion de variables 
        
        int nu1,nu2,mayor;
        
        cout<<"\nIngrese el primer valor: "<<endl;
        cin>>nu1;
        cout<<"Ingrese el segundo valor: "<<endl;
        cin>>nu2;
        
        mayor = (nu1>nu2)?nu1:nu2;
        
        cout<<"\nEl mayor es: " << mayor<<endl;
	
	
	
		
	system("pause");	
	return 0;
		
}
