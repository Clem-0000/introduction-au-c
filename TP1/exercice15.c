#include <stdio.h>
//
// Created by Admin on 05/10/2022.
//

int main()
{
    int nombre;
    int i = 1;
    int facteur = 1;
    printf("Saisir nombre : ");
    scanf("%d", &nombre);

    if(nombre >=1){
        while ( i <= nombre)
        {
            facteur *= i;

            printf("%d, %d\n",facteur, i);
            i++;
        }
    }

    printf("la factoriel de %d est : %d\n", nombre, facteur);

    return 0;
}