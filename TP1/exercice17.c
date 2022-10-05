#include <stdio.h>
//
// Created by Admin on 05/10/2022.
//

int main()
{
    int nombre;
    int somme = 1;
    printf("Saisir nombre : ");
    scanf("%d", &nombre);

    if(nombre == 0){
        somme = 1;
    }
    else
    {
        for (int i = 1; i <= nombre ; ++i) {
            somme = 2 * somme * (nombre-1)+1;
            printf("%d, %d\n", somme, i);
        }
    }

    printf("le résultat est : %d\n", somme);

    return 0;
}