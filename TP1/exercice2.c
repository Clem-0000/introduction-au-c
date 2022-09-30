#include <stdio.h>
//
// Created by brissarc on 23/09/22.
// Écrire un programme qui calcule la valeur absolue de la différence de deux nombres.
//

char* nombre_est_pair(int);
char* nombre_est_pair(int nombre)
{
    if(nombre%2 == 0){
        return "ce nombre est pair";
    }else{
        return "ce nombre est impair";
    }
}

int main()
{
    int a;
    printf("Entrez un entier : ");
    scanf("%d", &a);
    printf("%s\n",nombre_est_pair(a));
    return 0;
}
