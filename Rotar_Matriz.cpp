#include <iomanip>
#include <iostream>


using namespace std;
int fila,columna,m;

void  ingresarMatriz (int m[50][50], int &fila, int &columna);
void mostrarMatriz(int m[50][50], int fila, int columna);
void derecha(int m[50][50], int fila, int columna);
int mTem[50][50];
int main(int argc, char *argv[])
{
  int fila, columna, m[50][50];

ingresarMatriz(m, fila, columna);
mostrarMatriz(m, fila, columna);
int opc;cout << "\n";
    while(true){
         cout<<"1)Girar Izquierda\n 2)Girar Derecha\n 3) Salir\n";
         cout<<"Seleccione la Opcion: ";cin>>opc;
        //cin>>opc;

        switch(opc){
            case 1:
                derecha( m, fila,columna);
                break;
            case 2:
                //gira_derecha();
                break;
            case 3:
                return 0;
            default:
                cerr<<"Error";
                cin.get();
                system("cls");
                break;}
}
    system("PAUSE");
    return EXIT_SUCCESS;
}

void  ingresarMatriz (int m[50][50], int &fila, int &columna){
        m[0][0]=m[fila][columna];

    cout<<"Ingresar numero de filas de la matriz:";
    cin>>fila;
    cout<<"Ingresar numero de columnas de la matriz:";
    cin>>columna;

    for (int i = 0;i <fila;i++){
        for (int j = 0;j <columna;j++){            
            cout << "M(" << i+1 << "," << j+1 << ")= "; 
            cin >> m[i][j]; 
                    }       
    }cin.get();
}


void mostrarMatriz(int m[50][50], int fila, int columna)
{
     cout << "\n";
   cout << "La Matriz es Orden: " << fila << " X "<<columna << endl;
   for (int i = 0; i < fila; i++) {
      for (int j = 0; j < columna; j++) {
         cout << "\t" <<m[i][j]<<"  ";
      }
      cout << "\n";
   }
}void  derecha(int m[50][50], int fila, int columna){
      cout<<"Ha girado la matriz a la derecha"<<endl;
    int t;
    for(int i = 0; i < fila; i++){
        t = 0;
        for(int j = fila-1; j >= 0;j--){
            mTem[i][t] = m[j][i];
            t++;
        }
    }
    for(int i = 0; i < fila; i++){
        for(int j = 0; j < columna; j++){
            m[i][j] = mTem[i][j];
            cout<<m[i][j]<<"  ";
        }
        cout<<endl;
    }
}
