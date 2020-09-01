#include <stdio.h>
#include <stdlib.h>
/*Agregar al programa adjunto la funcionalidad resaltada con un (*)

    - Limpie la pantalla
    - Solicite dos valores numéricos al usuario distintos de cero *
    - Asigne a las variables numero1 y numero2 los valores obtenidos
    - Realice la resta de dichas variables
    - Muestre el resultado por pantalla
    - Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor *
    - Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero * */
int main(int argc, char *argv[]) {

	int numero1;
	int numero2;
	int resultado;

	printf("\nIngrese 1 numero: ");
	scanf("%d",&numero1);

	while(numero1==0){
    printf("\nIngrese un numero distinto a 0");
    scanf("%d",&numero1);}

	printf("\nIngrese 2 numero: ");
	scanf("%d",&numero2);

    while(numero2==0){
    printf("\nIngrese un numero distinto a 0");
    scanf("%d",&numero2);}

	resultado=numero1-numero2;

	printf("______________________________________\n");
	printf("\nEl resultado es: %d \n",resultado);
	if(resultado>=0){
        printf("\nResultado positivo \n");
	}
	if(resultado<0){
        printf("\nResultado negativo \n");
	}

	printf("______________________________________\n");

	return 0;
}
