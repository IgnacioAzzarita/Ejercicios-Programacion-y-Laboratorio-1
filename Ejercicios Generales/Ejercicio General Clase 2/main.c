#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numeroIngresado;
   int i;
   int numeroMaximo;
   int numeroMinimo;
   int suma;
   float promedio;
   suma=0;

   for(i=0;i<5;i++){
    printf("Ingrese un numero: ");
    scanf("%d",&numeroIngresado);
    suma+=numeroIngresado;
   if(numeroIngresado<numeroMinimo || i==0){
        numeroMinimo=numeroIngresado;}
   if(numeroIngresado>numeroMaximo || i==0){
        numeroMaximo=numeroIngresado;}
   }
   promedio=(float)suma/i;
   printf("El promedio de los numeros ingresados es %f",promedio);
   printf("\nEl numero minimo ingresado es %d",numeroMinimo);
   printf("\nEl numero maximo ingresado es %d",numeroMaximo);

    return 0;
}
