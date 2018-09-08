#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 5

void mostrarVector (int x[], int tam);
int buscarNumero(int vec[], int tam, int valor);

int main()
{
   int vec[TAM] = { 34, 65, 78, 54, 23};
   int indice;

   indice = buscarNumero(vec, TAM, 23);

   if (indice !=-1)
   {
        printf("El valor se encuentra en el indice %d\n", indice);
   }
   else



    /** \brief
     *
     * \param vector sobre el que se realizar la busqueda
     * \param tamanio del vecto
     * \param valor a vuscar
     * \return  el valor del indice donde está la coincidencia o -1
     */
        int buscarNumero(int vec[], int tam, int valor){

        int indice = -1;

        for(int i=0; i < tam; 1++)
            {
            if(vec [i] == valor )
                {
                    indice =1;
                    break;
                }
            }
        return indice;



}
