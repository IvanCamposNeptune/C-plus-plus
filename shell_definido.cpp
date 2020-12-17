#include<iostream>
#define largo 50

using namespace std;

void ordenShell(int A[],int n)
{
     
  int inicia, y, inclu, tope;
  
  for(inclu = 1 ; inclu<n;inclu=inclu*3+1);
   
      							while (inclu > 0)
      {
          for (inicia=inclu; inicia < n; inicia++)
          {
          			y = inicia;
                	tope = A[inicia];
            while ((y >= inclu) && (A[y-inclu] > tope))
            {
                    A[y] = A[y - inclu];
                    y = y - inclu;
                }
       
            A[y] = tope;
          }
         
inclu/= 2;
      }
}

void leeCadena(int cant,int n[])
									{
int inicia;
    for(inicia=0;inicia<cant;inicia++)
    {
        cout<<"Ingresa numero "<<inicia+1<<": ";
        cin>>n[inicia];
    }
     
}
 
void muestraCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<" ";
    }
}
  
  
 main () 
{
    int A[largo],n;
    do{
    cout<<"Cantidad de numeros a ingresar: ";cin>>n;
        if(n<=0||n>largo)
            cout<<"Debe ingresar un valor  > a 0 y < a "<<largo<<endl;
    }while(n<=0||n>largo);
 
    leeCadena(n,A);
    ordenShell(A,n);
    muestraCadena(n,A);
   
}
