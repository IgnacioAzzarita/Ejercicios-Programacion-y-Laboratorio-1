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
    int contadorVarones;
    int legajoVaronViejo;
    int legajoMujerJoven;
    int edadVaronViejo;
    int edadMujerJoven;
    float promedio;
    sumaEdades=0;
    contadorVarones=0;
    i=0;
    for(;i<5;i++){
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

    if(edadMaxima<edadIngresada || i==0){
        edadMaxima=edadIngresada;
        edadVaronViejo=edadMaxima;
    }
    if(edadIngresada<edadMinima || i==0){
        edadMinima=edadIngresada;
        edadMujerJoven=edadMinima;}

   switch(sexo){
    case 'm':
    contadorVarones++;
   if(edadIngresada>edadVaronViejo){
    edadVaronViejo=edadIngresada;
    legajoVaronViejo=legajo;}
    break;
   case 'f':
   if(edadIngresada<edadMujerJoven){
      edadMujerJoven=edadIngresada;
    legajoMujerJoven=legajo;}
    break;}

}

    promedio=(float) sumaEdades/i;
    printf("El promedio da como resultado:%f",promedio);
    printf("\nLa cantidad de hombres es:%d",contadorVarones);
    printf("\nLa edad maxima ingresada es:%d",edadMaxima);
    printf("\nLa edad minima ingresada es:%d",edadMinima);
    printf("\nEl legajo del hombre mas viejo es:%d",legajoVaronViejo);
    printf("\nEl legajo de la mujer mas joven es:%d",legajoMujerJoven);
    return 0;
}
