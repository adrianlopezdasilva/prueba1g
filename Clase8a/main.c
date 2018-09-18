#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"
#define A 3

int main()
{
        sAlumno miAlumno;
        sAlumno otroAlumno;

        printf("Ingrese legajo: ");
        scanf("%d",&miAlumno.legajo);

        printf("Ingrese nombre: ");
        gets(miAlumno.nombre);
        fflush(stdin);

        printf("Ingrese promedio: ");
        scanf("%f",&miAlumno.promedio);

        printf("Ingrese edad: ");
        scanf("%d", &miAlumno.edad);

        printf("%d--%s--%f", otroAlumno.legajo, otroAlumno.nombre, otroAlumno.promedio);

        mostrarAlumno(miAlumno);


        mostrarAlumno;

        return 0;

}

void mostrarAlumno(sAlumno miAlumno)
{
    printf("%d--%s--%f", miAlumno.legajo, miAlumno.nombre, miAlumno.promedio);

}
void pedirAlumno

{
    sAlumno pedirAlumno;
    int 1;
    int 3;

    for(int i = 0; i < A; i++)
    {

    }

}
/*void ordenarListadoAlumnoPorNombre(sAlumno listado[], int)
{
    int auxInt;
    float axFloat;
    char auxString[50];
    int i;
    int j;

    for(i=0; i<tam-1; i++)
    {
        for (j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].nombre, listado[j].nombre > 0))
            {
                auxInt = listado[i].legajo;
                listado[i].legajo = listado[j].legajo;
                listado[j].legajo = auxInt  //NO SE HACE */
            }
        }
    }
}

void ordenarListadoAlumnoPorNombre(sAlumno listado[], int)
{



  for(j=i+; j<tam; j++)
  {
      if(strcmp(listado[i].))
  }
}
