#include <stdio.h> 
#include <string.h> 
#include <iostream>

main()
  {
  system("color a");
  char palabra[50];  
  int i,f,n,k,y,z;
  
  printf("Dame una palabra sin espacios de menos de 50 caracteres:");  
  scanf("%s",&palabra);
  n=strlen(palabra);
  k=1;
  z=1;
  
  
  for (i=0;i<n;i++)
    {
    for (f=0;f<=i;f++)
      printf("%c",palabra[f]);     
    printf("\n");     
    }
    
    
    for (y=z;y<n;y++)
    {
    	
    for (f=k;f<=i;f++)
      printf("%c",palabra[f]);     
    printf("\n");   
	  k++;
	  z++;
    }
     
    
  printf("\n\nPresione una tecla para continuar...");    
  getchar(); 
  }
  
  // Si a este programa le damos como entrada la palabra "Aulas" escribirá:
  // A
  // Au
  // Aul
  // Aula
  // Aulas 
  //
  // Compleméntelo para que escriba lo siguiente:
  // A
  // Au
  // Aul
  // Aula
  // Aulas 
  //  ulas 
  //   las 
  //    as 
  //     s 
  
