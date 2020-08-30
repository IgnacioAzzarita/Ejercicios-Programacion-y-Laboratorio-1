#include <stdio.h>
#include <stdlib.h>

int main()
{
     int edadIngresada;
    int edadMaxima;
    int edadMinima;
    int sumaEdades;
    int i;
    float promedio;
    sumaEdades=0;
    for(i=0;i<5;i++){
    printf("Ingrese la edad deseada:");
    scanf("%d",&edadIngresada);
    if(edadIngresada>edadMaxima || i==0){
        edadMaxima=edadIngresada;
    }
    if(edadIngresada<edadMinima || i==0){
        edadMinima=edadIngresada;
    }
    sumaEdades+=edadIngresada;
    }
    promedio=(float)sumaEdades/i;
    printf("El promedio da como resultado: %f",promedio);
    printf("\nLa edad maxima ingresada es: %d",edadMaxima);
    printf("\nLa edad minima ingresada es: %d",edadMinima);
    return 0;
}
