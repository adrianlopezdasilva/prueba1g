#include <stdio.h>
#include <stdlib.h>

#define TAM 10


typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int isEmpty;

}   eEmpleado;

int menu();
void inicializarEmpleados(eEmpleado lista[], int tam);
void mostrarEmpleado(eEmpleado unEmpleado);
int buscarlibre(eEmpleado lista[], int tam);
int buscarEmpleado(eEmpleado lista[], int tam,  int legajo);
void altaEmpleado(eEmpleado lista[], int tam);
void bajaEmpleado(eEmpleado lista[], int tam);



int main()
{
        char seguir = 's';
        eEmpleado empleados[TAM];
        inicializarEmpleados(empleados, TAM);

    do
    {
        switch(menu())
        {
        case 1:
            printf("Alta\n\n");
            system("pause");
            break;
            case 2:
            printf("Baja\n\n");
            system("pause");
            break;
            case 3:
            printf("Modificacion\n\n");
            system("pause");
            break;
            case 4:
            printf("Listar\n\n");
            system("pause");
            break;
            case 5:
            printf("Ordenar\n\n");
            system("pause");
            break;
            case 6:
            printf("Salir\n\n");
            system("pause");
            break;
        }

    }   while(seguir =='s');
}


int menu()
{
    int opcion;
    system("cls");
    printf("\n*** Menu de opciones ***\n\n");
    printf("1-Alta\n");
    printf("2-Baja\n");
    printf("3-Modificacion\n");
    printf("4-Listar emplados\n");
    printf("5-Ordenar Empleados\n");
    printf("6-Salir\n\n");
    scanf("%d", &opcion);

    return opcion;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;

    for(i=0; i < tam; i++)
    {
        lista[i].isEmpty = 1;
    }
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d %s %c %.2f\n", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldo );
}

void mostrarEmpleados(eEmpleado lista[], int tam)
{
    int i;

    system("cls");
    printf("Legajo Nombre Sexo Sueldo\n\n");

    for(i=0; i < tam; i++)
    {
        if (lista[i].isEmpty == 0)
        {
            mostrarEmpleado(lista[i]);
        }
    }
}

int buscarlibre(eEmpleado lista[], int tam)
{
    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(lista[i].isEmpty == 1)
        {
            indice = i;
            break;
        }

    }
    return indice;

}


int buscarEmpleado(eEmpleado lista[], int tam,  int legajo);

    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(lista[i].legajo == legajo && lista[i].isEmpty  == 0)
        {
            indice = i;
            break;
        }
        return indice;

    }


void altaEmpleado(eEmpleado lista[], int tam)
{
    printf("Ingrese");
    scanf();

    if(buscarlibre.lista)
}



void bajaEmpleado(eEmpleado lista[], int tam)
{

}
