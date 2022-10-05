#include <stdio.h>
//
// Created by Admin on 05/10/2022.
//

int est_premier(int nombreSaisie);
int est_premier(int nombreSaisie)
{
    int i = nombreSaisie - 1;
    while (i > 1)
    {
        if((nombreSaisie%i) == 0)
        {
            return 0;
        }
        i--;
    }
    return 1;
}

int main()
{
    int nombre;
    printf("Saisir nombre : ");
    scanf("%d", &nombre);

    if(est_premier(nombre) == 1)
    {
        printf("le nombre est premier");
    }
    else if(est_premier(nombre) == 0)
    {
        printf("le nombre n'est pas premier");
    }

    return 0;
}