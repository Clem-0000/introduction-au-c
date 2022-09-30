#include <stdio.h>
//
// Created by brissarc on 30/09/22.
//

int main()
{
    float a;
    printf("Entrez un prix : ");
    scanf("%f", &a);
    printf("le prix hors taxe est : %f$,avec taxe de 20 pourcent il est : %f$ \n", a, a*1.2);
    return 0;
}