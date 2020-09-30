/*1. Cargar un empleado: Se debera considerar cual es el espacio dentro del array para poder realizar la carga. En caso de no haber espacio disponible se debera notificar al usuario. Recomendamos hacer una funcion que permita encontrar el espacio disponible.
2. Mostrar el listado de empleados. Tener en cuenta que hay elementos del array que pueden no estar cargados.
3. Ordenar empleados.
	a.Por nombre
	b.Por sueldo
4. Eliminar un empledo. Deberan considerar el cambio de estado del empleado dentro del array (El mismo utilizado para el punto 1). Para eso se debera buscar un empleado en particular y cambiar su estado a vacio.
5. Modificar un empleado. La logica es muy parecida a la del ejercicio anterior. Solo que se permitira modificar el nombre del empleado, y no el estado. Se podra agregar otros campos a modificar, menos el legajo.

4 y 5. Tener en cuenta la mayor cantidad de detalles, como por ejemplo confirmaciones al momento de realizar algun cambio, informar al usuario si no existe el dato, etc.*/
#include <stdio.h>
#include <stdlib.h>
#define OCUPADO 1
#define LIBRE 0
typedef struct
{
  int legajo;
  float sueldo;
  char nombre[20];
  int isEmpty;
}eEmpleado;

void MostrarUnEmpleado(eEmpleado);
eEmpleado CrearUnEmpleado();

int main()
{
    eEmpleado miEmpleado;//={1000, 25000, "Pepe", OCUPADO};


    miEmpleado = CrearUnEmpleado();

    MostrarUnEmpleado(miEmpleado);


    /*if(otroEmpleado==miEmpleado)
    {
        printf("\nSI");
    }*/


    return 0;
}

void MostrarUnEmpleado(eEmpleado unEmpleado)
{
   printf("%d %.2f %s\n", unEmpleado.legajo, unEmpleado.sueldo, unEmpleado.nombre);
}

eEmpleado CrearUnEmpleado()
{
    eEmpleado empleado;

    printf("Ingrese legajo: ");
    scanf("%d", &empleado.legajo);
    printf("Ingrese sueldo: ");
    scanf("%f", &empleado.sueldo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    scanf("%[^\n]", empleado.nombre);

    empleado.isEmpty = OCUPADO;

    return empleado;
}

