#include <iostream>
#include <cmath>

using namespace std;

//Escriba las funciones

int main() {
  
  int x1,x2,x3,x4,x5;
  cout<<"Introduce el primer numero: ";
  cin>>x1;
  cout<<"Introduce el segundo  numero: ";
  cin>>x2;
  cout<<"Introduce el tercer  numero: ";
  cin>>x3;
  cout<<"Introduce el cuarto  numero: ";
  cin>>x4;
  cout<<"Introduce el quinto  numero: ";
  cin>>x5;

  
  //imprima el numero resultante de la suma 
	int suma;
  
	suma = x1+x2+x3+x4+x5;
  
	cout<<"La suma de los numeros es: "<<suma<<endl;
  
  //imprima el numero resultante de la multiplicacion 
	int multiplicacion;
  
	multiplicacion = x1*x2*x3*x4*x5;
  
	cout<<"La multiplicacion de los numeros es: "<<multiplicacion<<endl;

  //imprima el numero resultante de el maximo
  
  if(x1>x2 && x1>x3 && x1>x4 && x1>x5){
  	
  	cout<<"El numero maximo es: "<<x1<<endl;
  	
  }
  else if(x2>x1 && x2>x3 && x2>x4 && x2>x5){
  	
  	cout<<"El numero maximo es: "<<x2<<endl;
  	
  }
    else if(x3>x1 && x3>x2 && x3>x4 && x3>x5){
  	
  	cout<<"El numero maximo es: "<<x3<<endl;
  	
  }
    else if(x4>x1 && x4>x2 && x4>x3 && x4>x5){
  	
  	cout<<"El numero maximo es: "<<x4<<endl;
  	
  }
  else{
  	
  	cout<<"El numero maximo es: "<<x5<<endl;
  	
  }

  //imprima el numero resultante de el minimo
  
  if(x1<x2 && x1<x3 && x1<x4 && x1<x5){
  	
  	cout<<"El numero minimo es: "<<x1<<endl;
  	
  }
  else if(x2<x1 && x2<x3 && x2<x4 && x2<x5){
  	
  	cout<<"El numero minimo es: "<<x2<<endl;
  	
  }
    else if(x3<x1 && x3<x2 && x3<x4 && x3<x5){
  	
  	cout<<"El numero minimo es: "<<x3<<endl;
  	
  }
    else if(x4<x1 && x4<x2 && x4<x3 && x4<x5){
  	
  	cout<<"El numero minimo es: "<<x4<<endl;
  	
  }
  else{
  	
  	cout<<"El numero minimo es: "<<x5<<endl;
  	
  }
  
  
}
