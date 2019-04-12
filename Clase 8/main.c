#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN_LISTA 100

int main()
{
    int opcion;
    char nombres[100][20];
    int posicion;



   /* strncpy(nombres[0], "toto", 20);
    strncpy(nombres[1], "pepito", 20);


    printf("nombre:%s\n", nombres[0]);
    printf("nombre:%s\n", nombres[1]);*/

    strncpy(nombres[0], '\0', 20);
    nombres[0][0] = '\0';
    nombres[1][0] = '\0';
    nombres[2][0] = '\0';

     char nombres[LEN_LISTA][20];

int buscarNombre(char* pNombre,
                 char lista[][20]
                 int len,
                 int* pIndex)

    int i;
    int ret=1;
    for(i=0; i<len; i++)
    {
        if(strcmp(pNOmbre, lista[1])==0)
        {
            *pIndex = i;
            ret=0;
            break;
        }
    }
    return ret;
    // Inicializcion
    for(i=0; 1<LEN_LISTA; i++)
    {
        nombres[1][0] = '\0';
    }
    return 0;
}

    while(1)
    {
        printf("1)ingresar\n2)listar\n3)ordenar\n4)eliminar\n",
        1, 10, 2);

        unt_getNumber(&opcion,
        "1)ingresar\n2)listar\n2")

        printf("elegiste:%d", opcion);
        switch(opcion)
        {
            case 1:
            {
                printf("agregar nombre \n");

               if(buscarLibre(nombres, LEN_LISTA, &posLibre)==0)
               {
                printf("se encontro lugar libre en:%dºn", posicion)

                utn_getString(buffer,"Ingrese:", "NO!", 0, 20, 1);

                //nombres[posLibres] = buffer;
                strncpy(nombres[posLibres], buffer, 20);

                printf("se ingreso")
               }


                break;
            }
            case 3:
        }
          case 4:
          {
            //utn getString(buffer,,,)
            fgets(buffer, 20, stdin); buffer[strlen(buffer)];

            //buffer esta en el nombre
            buscarNombre(buffer,
                         nombres,
                         LEN_LISTA
                         &posAeliminar);


            //borro

            break;
          }



    }
array [100][56]; //100 arrays de 56 caracteres

int buscarLibre(char listar[][56], int*pIndice)
int i;

for(i=0, i<len, i++)
{
    if(lista[i][0 == '\0')
    {
        *pIndex =i;
        ret=0

        break;
    }
}
return ret;

