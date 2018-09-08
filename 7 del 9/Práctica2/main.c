#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vec[5];
   char continuar;
   int numero;
   int indice;

   for(int i=0; i<5; i++)
    {
        vec[i] ==0;
    }

   do
      {
        printf("Ingrese indice:");
        scanf("%d", &indice);

        printf("Ingrese un numero:");
        scanf("%d", &numero);

        vec[indice] = numero;

        printf("Desea continuar? ");
        fflush(stdin);
        scanf("%c", &continuar);



      } while (continuar=='s' || continuar == 'S');

      for(int i=0; i< 5 ; i++)
        {
        printf("%d\n,vec[1]");
        }
      printf("\n\n)");
}
