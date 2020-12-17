#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	system("color a");
	int na, nc, f, g, h;
    cout<<"Cuantos alumnos ingresaran calificaciones?"<<endl;
    cin>>na;
    cout<<"Cuantas calificaciones ingresaran?"<<endl;
    cin>>nc;
    int a[na];
    double pa[na], p, pg, c[nc];
    for (f=0; f<=na-1; f++){
    	p=0;
    	system("cls");
    	for (g=0; g<=nc-1; g++){
		cout<<"Ingresa la calificacion " <<g <<" del alumno " <<f <<endl;
		cin>>c[g];	
		p+=c[g];	
		}
		pa[f]=p/nc;	
		cout<<"El promedio del alumno: " <<f <<" es de: " <<pa[f] <<endl;
		if (pa[f]>6){
			cout<<"El alumno esta: APROVADO"<<endl;
		}	
		else if (pa[f]<=6){
			cout<<"El alumno esta: REPROVADO"<<endl;
		}
		
		system("pause");		
	}
	
	system("cls");	
	for (h=0; h<=na-1; h++){
		cout<<"El promedio del alumno: " <<h <<" es de: " <<pa[h] <<endl;
		pg+=pa[h];
	}
	pg/=na;
	cout<<"El promedio grupal es de: " <<pg <<endl;
	
    

    system("Pause");    // Hacer una pausa
    return 0;           // Valor de retorno al S.O.
}



