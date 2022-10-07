#include <stdio.h>
#include <math.h>

//
// Created by Admin on 07/10/2022.
//
float calcul_perimetre(float);
float calcul_perimetre(float r)
{
    return 2*r*M_PI;
}

float calcul_aire(float);
float calcul_aire(float r)
{
    return r*r*M_PI;
}

int main()
{
    int r;
    printf("Entrez un rayon : ");
    scanf("%d", &r);
    printf("le perimetre du cercle de rayon %d, est : %f, son aire est de : %f \n", r, calcul_perimetre(r), calcul_aire(r));
    return 0;
}