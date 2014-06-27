#include <stdio.h>
#include <stdlib.h>

#define TAM1 30
#define TAM2 30

/*
1.   Confeccionar una funci�n: Que reciba 2 cadenas, y elimine los caracteres coincidentes de ambas.
La funci�n debe retornar la cantidad de caracteres coincidentes. Utilizar aritm�tica de punteros. Confeccione un main que invoque a la funci�n desarrollada.
   EJEMPLO:
 Cadena1: La casa de Pedro es grande. -->
 Cadena2: Mar�a lava la ropa.         -->
Hay 5 caracteres coincidentes
Cadena1: L csa dePed es grande.
Cadena2: Mri lavala pa.*/


int eliminarCoincidentes(char*, char*);

int main()
{
    char cad1[TAM1];
    char cad2[TAM2];
    int cantC = 0;
    printf("Ingrese Cadena1: ");
    gets(cad1);
    printf("Ingrese Cadena2: ");
    gets(cad2);
    cantC = eliminarCoincidentes(cad1, cad2);
    printf("Cantidad de Coincidentes: %d\n", cantC);
    printf("%s\n%s", cad1, cad2);
    return 0;
}

int eliminarCoincidentes(char* c1, char* c2)
{
    char *pl1 = c1,
         *pe1 = c1,
         *pl2 = c2,
         *pe2 = c2;
    int cont = 0;
    if(*pl1 && *pl2)
    {
        while(*pl1 && *pl2)
        {
            if(*pl1 == *pl2)
            {
                pl1++;
                pl2++;
                cont++;
            }
            else
            {
                *pe1 = *pl1;
                *pe2 = *pl2;
                pl1++;
                pe1++;
                pl2++;
                pe2++;
            }
        }
        while(*pl1 && !*pl2)
        {
            *pe1 = *pl1;
            pl1++;
            pe1++;
        }
        while(*pl2 && !*pl1)
        {
            *pe2 = *pl2;
            pl2++;
            pe2++;
        }
        *pe1 = '\0';
        *pe2 = '\0';
    }
    return cont;
}

