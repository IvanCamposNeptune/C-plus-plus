/*Sobrecarga de Constructores

	Puede haber varios constructores en una clase
	
	Con la condicion de que tengan distinto numero de parametros o distinto tipo de parametros

*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Tiempo{//Se crea la clase Tiempo (Las clases van con Mayuscula)
	
	private:			//Se pone private para encapsular los atributos
		int horas,minutos,segundos;
	
	public:				//Metodos de tipo publico para que todos puedan ejecutarlos
		Tiempo(int,int,int);//Constructor1 que recibe parametros de tipo int (horas,minutos,segundos)
		Tiempo(int); //Constructor2 que recibe un parametro de tipo int osease un numerote
		void mostrarTiempo();
	
};



//Definicion de Metodos

//Constructor 1  Es para inicializar los atributos
Tiempo::Tiempo(int _horas,int _minutos, int _segundos){//Inicializando el constructor con nombres de parametros diferentes, :: significa pertenencia
	horas = _horas;// se les da el valor
	minutos = _minutos;
	segundos = _segundos;
}

//Constructor 2 
Tiempo::Tiempo(int tiempoSeg){//Tiene el mismo nombre pero este solo recibe un parametro de tipo int
	horas = tiempoSeg/3600;//Para sacar las horas de la cantidad de segundos
	tiempoSeg = tiempoSeg % 3600;//Para disminuir el numero de horas que ya hemos quitado

	minutos = tiempoSeg/60; // Para sacar los minutos
	
	segundos = tiempoSeg % 60; // Para sacar los minutos
	
}


void Tiempo::mostrarTiempo(){
	cout<<"La hora es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}




int main(){
	system("color a");

	//Instanziacion de clases, Instanciar una clase es Crear un objeto
	
	//Utilizando el constructor 1
	
	Tiempo horaActual(12,03,30);//Se creo un objeto de la clase Tiempo llamado horaActual inicializando sus parametros
	
	horaActual.mostrarTiempo();//Manda llamar el metodo mostrarTiempo con los parametros de el objeto horaActual
	
	
	//Utilizando el constructor 2
	
	Tiempo haceUnaHora(39810);//Se inicializa el parametro con un tipo int y por eso escoge el constructor 2 para ejecutarse
	
 	haceUnaHora.mostrarTiempo();//Manda llamar el metodo mostrarTiempo con los parametros de el objeto haceUnaHora                         
	
	system("pause");
	return 0;
}
