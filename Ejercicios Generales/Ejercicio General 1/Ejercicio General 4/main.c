#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numeroIngresado;
   int i;
   int contadorPositivos;
   int contadorNegativos;
   contadorPositivos=0;
   contadorNegativos=0;

   for(i=0;i<10;i++){
   printf("Ingrese un numero: ");
   scanf("%d",&numeroIngresado);

   if(numeroIngresado<0){
    contadorNegativos++;}
   if(numeroIngresado>0){
    contadorPositivos++;}
}
printf("\nLa cantidad de positivos es %d",contadorPositivos);
printf("\nLa cantidad de negativos es %d",contadorNegativos);
return 0;
}
