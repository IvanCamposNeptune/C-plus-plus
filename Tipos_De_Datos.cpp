
#include <stdio.h> //Archivo de encabezamiento. Se necesita para usar prinf y scanf
#include<iostream>

main()
  {
  	system("color a");
  char sexo;        //Un carácter individual
  char nombre[50];  //Una cadena de caracteres
  int edad;         //Número entero
  float estatura;   //Número de punto flotante
  
  
  
  printf("Sexo del alumno(H o M):");
  scanf("%c",&sexo);
  printf("Dame el nombre del alumno:"); //Recibe los datos
  scanf("%s",&nombre);
  printf("Edad del alumno:");
  scanf("%i",&edad);
  printf("Estatura del alumno:");
  scanf("%f",&estatura);
  
  printf("\n\n");                           //Muestra los datos
  printf("Los datos que me diste son:\n");  
  printf("Sexo del alumno:%c\n",sexo);
  printf("Nombre del alumno:%s\n",nombre);
  printf("Edad del alumno:%i\n",edad);
  printf("Estatura del alumno:%.2f\n",estatura);
  
  
  printf("\n\nPresione una tecla para continuar...");    
  getchar(); //Se detiene hasta presionar una tecla
  }
  
  // Modificar el programa para que además del nombre maneje también
  // apellido paterno, apellido materno y peso, además calculará el
  // índice de masa corporal usando estatura y peso.
  // El índice de masa corporal se calcula dividiendo el peso en  
  // kilogramos entre el cuadrado de la estatura en metros

