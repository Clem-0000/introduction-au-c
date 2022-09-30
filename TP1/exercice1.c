#include <stdio.h>
#include <math.h>
//
// Created by brissarc on 23/09/22.
// Écrire un programme qui calcule la valeur absolue de la différence de deux nombres.
//

int calcul_valeur_absolue(int, int);
int calcul_valeur_absolue(int nombreA, int nombreB)
{
    int valeur_absolue = (int) sqrt((nombreA - nombreB) * (nombreA - nombreB));
    return valeur_absolue;
}

int main()
{
    int a;
    int b;
    printf("Entrez deux valeurs : ");
    scanf("%d %d", &a, &b);
    printf( "%d\n",calcul_valeur_absolue(a, b));
    return 0;
}
