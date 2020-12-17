/*Sobrecarga de Constructores

	Puede haber varios constructores en una clase
	
	Con la condicion de que tengan distinto numero de parametros o distinto tipo de parametros

*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Fecha{//Se crea la clase Fecha (Las clases van con Mayuscula)
	
	private:			//Se pone private para encapsular los atributos
		int dia,mes,anio;
	
	public:				//Metodos de tipo publico para que todos puedan ejecutarlos
		Fecha(int,int,int);//Constructor1 que recibe parametros de tipo int (dia,mes,anio)
		Fecha(long); //Constructor2 que recibe un parametro de tipo long osease un numerote
		void mostrarFecha();
	
};



//Definicion de Metodos

//Constructor 1  Es para inicializar los atributos
Fecha::Fecha(int _dia,int _mes, int _anio){//Inicializando el constructor con nombres de parametros diferentes, :: significa pertenencia
	dia = _dia;// se les da el valor
	mes = _mes;
	anio = _anio;
}

//Constructor 2 
Fecha::Fecha(long fecha){//Tiene el mismo nombre pero este solo recibe un parametro de tipo long
	anio = int(fecha/10000);//Para sacar el año dividiendo 20170727 = 2017.0727
	mes = int((fecha-anio*10000)/100); // 20170727-2017*10000  asi se le resta el año a la fecha para que queden los meses y los dias, se divide entre 100 para sacar los meses
	dia = int(fecha-anio*10000-mes*100); // Se le resta el anio y el mes para que queden solo los dias
	
}



void Fecha::mostrarFecha(){
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}




int main(){
	system("color a");

	//Instanziacion de clases, Instanciar una clase es Crear un objeto
	
	//Utilizando el constructor 1
	
	Fecha hoy(27,07,2017);//Se creo un objeto de la clase Fecha llamado hoy inicializando sus parametros
	
	hoy.mostrarFecha();//Manda llamar el metodo mostrarFecha con los parametros de el objeto hoy
	
	
	
	//Utilizando el constructor 2

	Fecha ayer(20170726);//Como solo recibe un parametro utilizara el constructor 2
	
	ayer.mostrarFecha();
	
	system("pause");
	return 0;
}
