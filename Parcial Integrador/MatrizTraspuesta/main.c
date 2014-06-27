#include <stdio.h>
#include <stdlib.h>

#define COL 5
#define FIL 3

/*Crear un programa y la o las funciones necesarias para trasponer sobre sí misma una matriz cuadrada.*/

void trasponerMat(int m[][COL]);

void mostrarMat(int m[][COL]);

int main()
{
    int i, j;
    int m[][COL] = {{1,2,3,4,5},{5,6,7,8,9},{9,1,2,3,4}};
    printf("Matriz:\n");
    for(i = 0; i < FIL; i++)
    {
        for(j = 0; j < COL; j++)
            printf("%d", m[i][j]);
        printf("\n");
    }
    trasponerMat(m);
    mostrarMat(m);
    return 0;
}


void trasponerMat(int m[][COL])
{
    int i, j, aux;
    for(i = 0; i < FIL; i++)
    {
        for(j = i + 1; j < COL; j++)
        {
            aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux;
        }
    }
}

void mostrarMat(int m[][COL])
{
    int i, j;
    printf("\nMatriz Traspuesta:\n");
    for(i = 0; i < COL; i++)
    {
        for(j = 0; j < FIL; j++)
            printf("%d", m[i][j]);
        printf("\n");
    }
}
