
#include <stdio.h> //Archivo de encabezamiento. Se necesita para usar prinf y scanf
#include<iostream>

main()
  {
  	system("color a");
  char sexo;        //Un car�cter individual
  char nombre[50];  //Una cadena de caracteres
  int edad;         //N�mero entero
  float estatura;   //N�mero de punto flotante
  
  
  
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
  
  // Modificar el programa para que adem�s del nombre maneje tambi�n
  // apellido paterno, apellido materno y peso, adem�s calcular� el
  // �ndice de masa corporal usando estatura y peso.
  // El �ndice de masa corporal se calcula dividiendo el peso en  
  // kilogramos entre el cuadrado de la estatura en metros

