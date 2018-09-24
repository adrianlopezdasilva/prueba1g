#include <stdio.h>
#include <stdlib.h>

int main()
{
        sAlumno listadoMain[A];
        int 1;
        int opcion;

        for(i=0; i<A; i++)

        {
            listadoMain[i].estado = VACIO;
        }


        do
        {

        printf("1.Alta\n2.Modificar\3.Mostrar\n10.Salir\neEli")
        scanf("%d", &opcion)
        switch(opcion)
        {
        case 1:
            cargarListadoDeAlumnos(listadoMain, A);
            if(i!=-1)
            {
                printf ("Carga exitosa");
            }
            else
            {
                printf("No haay espacio.");
            }
            break;

        case 2:

            printf("Ingrese legajo:");
            scanf("%d", &auxInt);

            for(i=0; i<A; i++)
            {
                if(auxInt==listadoMain[i].estado==OCUPADO && listadoMain[i].legajo)
                {
                    printf("Ingrese el nuevo promedio: ");
                    scanf("%f", &listadoMain[i].promedio);
                    break;
                }
            }
        break;
        case 3:
                mostrarListadoDeAlumnos(listadoMain, A);
            break;
        }

}while(opcon!=10);
