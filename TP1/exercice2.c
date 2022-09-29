#include <stdio.h>
//
// Created by brissarc on 23/09/22.
// Écrire un programme qui calcule la valeur absolue de la différence de deux nombres.
//

int nombre_est_pair(int);
int nombre_est_pair(int nombre)
{
    if(nombre%2 == 0){
        return printf("ce nombre est pair");
    }else{
        return printf("ce nombre est impair");
    }
}

int main()
{
    int a;
    printf("Entrez un entier : ");
    scanf("%d", &a);
    nombre_est_pair(a);
    return 0;
}
