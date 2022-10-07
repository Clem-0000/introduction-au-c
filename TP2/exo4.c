#include <stdio.h>

//
// Created by Admin on 07/10/2022.
//

float calcul_prix(float, float );
float calcul_prix(float prix, float tauxTaxe)
{
    return prix * (1 + tauxTaxe /100);
}

int main()
{
    float a;
    float b;
    printf("Entrez un prix et le taux de la taxe : ");
    scanf("%f %f", &a, &b);
    printf("le prix hors taxe est : %f$,avec taxe de %f pourcent il est : %f$ \n", a, b, calcul_prix(a, b));
    return 0;
}