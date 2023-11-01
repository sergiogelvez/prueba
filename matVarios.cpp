#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int maxfilas1, maxcols1, maxfilas2, maxcols2, i, j, k;
    srand(time(NULL));
    printf("Numero de elementos (filas): ");
    scanf("%d", &maxfilas1);
    printf("Numero de elementos (columnas): ");
    scanf("%d", &maxcols1);
    int M1[maxfilas1][maxcols1];
    for (i = 0; i < maxfilas1; i++)
    {
        for (j = 0; j < maxcols1; j++)
        {
            M1[i][j] = rand() % 10;
        }
    }
    printf("Numero de elementos (filas): ");
    scanf("%d", &maxfilas2);
    printf("Numero de elementos (columnas): ");
    scanf("%d", &maxcols2);
    int M2[maxfilas2][maxcols2];
    // las matrices iniciales.
    for (i = 0; i < maxfilas2; i++)
    {
        for (j = 0; j < maxcols2; j++)
        {
            M2[i][j] = rand() % 10;
        }
    }

    if (maxcols1 != maxfilas2)
    {
        printf("No sirve, numero de filas y columnas no adecuado.\n");
    }
    else
    {
        int M3[maxfilas1][maxcols2];
        for (i = 0; i < maxfilas1; i++)
        {
            for (j = 0; j < maxcols2; j++)
            {
                int temp = 0;
                for (k = 0; k < maxcols1; k++)
                {
                     temp = temp + M1[i][k] *  M2[k][j];
                }
                M3[i][j] = temp;
            }
        }
        // imprimir resultados
        printf("Matriz 1:\n");
        for (i = 0; i < maxfilas1; i++)
        {
            for (j = 0; j < maxcols1; j++)
            {
                printf("%d ", M1[i][j]);
            }
            printf("\n");
        }
        printf("Matriz 2:\n");
        for (i = 0; i < maxfilas2; i++)
        {
            for (j = 0; j < maxcols2; j++)
            {
                printf("%d ", M2[i][j]);
            }
            printf("\n");
        }
        printf("Matriz resultado:\n");
        for (i = 0; i < maxfilas1; i++)
        {
            for (j = 0; j < maxcols2; j++)
            {
                printf("%d ", M3[i][j]);
            }
            printf("\n");
        }

    }

    /* for (i = 0; i < maxfilas; i++)
    {
        for (j = 0; j < maxcols; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    } */
}
