#include <stdio.h> 
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
int main(){ 


system("color a");

int memoria[5] = {34,65,24,76,43}; 
int registro = 0; 
int registro1 = 0; 
int registro2 = 0; 
int contador = 0;
 
system("cls");

while(contador < 1){ 

gotoxy(2,2); 
printf("0:Leer una posicion de memoria" ); 
gotoxy(2,4); 
printf("1:Sobreescribir en una posicion de memoria" ); 

gotoxy(2,6); 
printf("Que deseas hacer?: " ); 
scanf("%d", &registro); 

// lectura de memoria 
if(registro == 0){ 
gotoxy(2,8); 
printf("Que posicion de memoria deseas leer (0 - 4): " ); 
scanf("%d", &registro1); 
if(registro1 >= 5){ 
gotoxy(2,10); 
printf("La posicion de memoria teclada no existe" ); 
gotoxy(2,12); 
printf("Teclee el # 0 para llevar acabo otra operacion: " ); 
scanf("%d", &contador); 
if(contador <= 1){ 
system("cls");
gotoxy(2,2); 
printf("0 --> Leer una posicion de memoria" ); 
gotoxy(2,4); 
printf("1 --> Sobreescribir una posicion de memoria" ); 
gotoxy(2,6); 
printf("Que deseas hacer: " ); 
} 
else{ 
system("cls"); 
gotoxy(2,2); 
printf("Fin" ); 
} 
} 
else{ 
gotoxy(2,10); 
printf("La posicion de memoria tecleada contiene el valor numerico de: %d", memoria[registro1]); 
gotoxy(2,12); 
printf("Teclee el # 0 para llevar acabo otra operacion: " ); 
scanf("%d", &contador); 
if(contador <= 1){ 
system("cls"); 
gotoxy(2,2); 
printf("0 --> Leer una posicion de memoria" ); 
gotoxy(2,4); 
printf("1 --> Sobreescribir una posicion de memoria" ); 
gotoxy(2,6); 
printf("Que deseas hacer: " ); 
} 
else{ 
system("cls"); 
gotoxy(2,2); 
printf("Fin" ); 
} 
} 
} 

// sobrescritura de memoria 
if(registro == 1){ 
gotoxy(2,8); 
printf("Que posicion de memoria deseas sobreescribir (0 - 4): " ); 
scanf("%d", &registro1); 
if(registro1 >= 5){ 
gotoxy(2,10); 
printf("La posicion de memoria tecleada no existe" ); 
gotoxy(2,12); 
printf("Teclee el # 0 para llevar acabo otra operacion: " ); 
scanf("%d", &contador); 
if(contador <= 1){ 
system("cls"); 
gotoxy(2,2); 
printf("0 --> Leer una posicion de memoria" ); 
gotoxy(2,4); 
printf("1 --> Sobreescribir una posicion de memoria" ); 
gotoxy(2,6); 
printf("Que deseas hacer: " ); 
} 
else{ 
system("cls"); 
gotoxy(2,2); 
printf("Fin" ); 
} 
} 
else{ 
gotoxy(2,10); 
printf("Que valor deseas asignar: " ); 
scanf("%d", &registro2); 
memoria[registro1] = registro2; 
gotoxy(2,12); 
printf("La posicion de memoria tecleada se ah sobreescribido" ); 
gotoxy(2,14); 
printf("Teclee el # 0 para llevar acabo otra operacion: " ); 
scanf("%d", &contador); 
if(contador <= 1){ 
system("cls"); 
gotoxy(2,2); 
printf("0 --> Leer una posicion de memoria" ); 
gotoxy(2,4); 
printf("1 --> Sobreescribir una posicion de memoria" ); 
gotoxy(2,6); 
printf("Que deseas hacer: " ); 
} 
else{ 
system("cls"); 
gotoxy(2,2); 
printf("Fin" ); 
} 
} 
} 

if(registro > 1){ 
gotoxy(2,8); 
printf("Codigo de operacion incorrecto" ); 
gotoxy(2,10); 
printf("Teclee el # 0 para llevar acabo otra operacion: " ); 
scanf("%d", &contador); 
if(contador <= 1){ 
system("cls"); 
gotoxy(2,2); 
printf("0 --> Leer una posicion de memoria" ); 
gotoxy(2,4); 
printf("1 --> Sobreescribir una posicion de memoria" ); 
gotoxy(2,6); 
printf("Que deseas hacer: " ); 
} 
else{ 
system("cls"); 
gotoxy(2,2); 
printf("Fin" ); 
} 
} 
} // fin del ciclo while 
getchar(); 
getchar(); 

}

