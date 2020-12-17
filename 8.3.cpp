#include <iostream>
#include <cmath>

using namespace std;

//Escriba las funciones o procedimientos aqui

int main() {
  //Reciba tres numeros del usuario para quices, tareas y parciales
  
  int quices,talleres,parciales;
  
  cout<<"Digite la calificacion del quiz entre 0 y 5: "; cin>>quices;
  
  if(quices<0 || quices>5){
  	cout<<"Numero no valido...";
  }
  else{
  	
  	cout<<"\nDigite la calificacion de talleres entre 0 y 5: "; cin>>talleres;
  	
  	  if(talleres<0 || talleres>5){
  	cout<<"Numero no valido...";
  }
  else{
  	
  	cout<<"\nDigite la calificacion de los parciales entre 0 y 5: "; cin>>parciales;
  	
  	  if(parciales<0 || parciales>5){
  	cout<<"Numero no valido...";
  	
  }
  else{
  	
  	
  	//Ejecute las funciones e imprima la nota definitiva
  double res1, res2, res3, promedio;
  
  res1 = (quices)*(.25);
  res2 = (talleres)*(.25);
  res3 = (parciales)*(.50);
  
  promedio = res1+res2+res3;
  	
  	cout<<"Calificacion igual a: "<<promedio<<endl;
  
  //Imprima el mensaje correspondiente de acuerdo a la nota obtenida
  
	
	
	if(promedio>=4.5 && promedio<=5){

		cout<<"Excelente desempeño"<<endl;
	}
		else if(promedio>=4.0 && promedio<=4.9){

		cout<<"Buen desempeño"<<endl;
	}
		else if(promedio>=3 && promedio<=3.9){
                
        cout<<"Desempeño aceptable"<<endl;
	}
		else if(promedio>=2 && promedio<=2.9){
                
        cout<<"Desempeño insuficiente"<<endl;        
	}
		else if(promedio>=0 && promedio<=1.9){
                
        cout<<"Desempeño deficiente"<<endl;        
	}
  	
  	
  	
  	
  			}
  
		}

	}

}
