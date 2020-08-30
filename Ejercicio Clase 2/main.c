#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edadIngresada;
    char sexo;
    int legajo;
    int edadMaxima;
    int edadMinima;
    int i;
    int sumaEdades;
    int contadorMujeres;
    int contadorVarones;
    float promedio;
    sumaEdades=0;
    contadorMujeres=0;
    contadorVarones=0;
    for(i==0;i<5;i++){
    printf("Ingrese la edad deseada: ");
    scanf("%d",&edadIngresada);

    printf("Ingrese F si es mujer y M si es varon: ");
    fflush(stdin);
    scanf("%c",&sexo);

    while(sexo!='m' && sexo!='f'){
    printf("Ingrese M si es varon y F si es mujer: ");
    fflush(stdin);
    scanf("%c",&sexo);}


    printf("Ingrese su numero de legajo: ");
    scanf("%d",&legajo);

    sumaEdades+=edadIngresada;

    switch(sexo){
    case 'm':
        contadorVarones++;
        break;
    case 'f':
        contadorMujeres++;
        break; }

    if(edadIngresada>edadMaxima || i==0){
        edadMaxima=edadIngresada;
    }
    if(edadIngresada<edadMinima || i==0){
        edadMinima=edadIngresada;}
    }
    promedio=(float) sumaEdades/i;
    printf("El promedio da como resultado:%f",promedio);
    printf("\nLa cantidad de hombres es:%d",contadorVarones);
    printf("\nLa cantidad de mujeres es:%d",contadorMujeres);
    printf("\nLa edad maxima ingresada es:%d",edadMaxima);
    printf("\nLa edad minima ingresada es:%d",edadMinima);
    return 0;
}
