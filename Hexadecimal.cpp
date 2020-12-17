#include <stdio.h>
#include <conio.h>

/*variables globales*/
short i;

unsigned short hexadecimal[10];

int main()
{
	
	
	
    /*variables */
    long numero=0;
    

    long hexadecimales(long); /*funcion para convertir a hexadecimal */

    
    /*obtener el numero entero*/
    printf("Teclee el numero entero: ");
    scanf("%u",&numero);
    printf("\n******************************\n");
    

   
    hexadecimales(numero);

    getch();
    return 0;
}

 long hexadecimales(long numero)
 {
     i=0; /*iniciando el contador*/
     while (numero!=0)
     {
           hexadecimal[i]=numero%16;
           numero=numero/16;
           i++;
     }
     printf("\nHexadecimal: ");
     i--;
     while (i>=0)
     {
           switch(hexadecimal[i])
           {
                             case 10:
                                  printf("A");
                             break;
                             case 11:
                                  printf("B");
                             break;
                             case 12:
                                  printf("C");
                             break;
                             case 13:
                                  printf("D");
                             break;
                             case 14:
                                  printf("E");
                             break;
                             case 15:
                                  printf("F");
                             break;
                             default:
                                   printf("%d",hexadecimal[i]);
                             break;
           } 
           i--;
     }
}




