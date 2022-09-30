#include <stdio.h>
//
// Created by brissarc on 29/09/2022.
//

int nombre_est_max(int, int );
int nombre_est_max(int nombreA, int nombreB)
{
    printf("%d > %d -> %d", nombreB, nombreA, nombreB > nombreA);
    if(nombreB > nombreA)
    {
      return nombreB;
    }
    return nombreA;
}

int main()
{
    int a;
    int b;

    printf("Entrez deux valeurs : ");
    scanf("%d %d", &a, &b);

    printf("le nombre maximum saisie est : %d\n ",nombre_est_max(a,b));
    return 0;
}
