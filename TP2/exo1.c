#include <stdio.h>
//
// Created by Admin on 07/10/2022.
//

float surface_rectangle(float , float );
float surface_rectangle(float longueur, float hauteur)
{
    return longueur * hauteur;
}

int main()
{
    float a;
    float b;
    printf("Entrez la longueur puis la hauteur du rectangle :  ");
    scanf("%f %f", &a, &b);
    printf("la surface du rectangle de longueur : %f, de hauteur : %f est : %f m carré\n", a, b, surface_rectangle(a, b));
    return 0;
}
