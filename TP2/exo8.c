#include <stdio.h>
#include <math.h>
//
// Created by Admin on 07/10/2022.
//
float volume_sphere(int );
float volume_sphere(int rayon)
{
    return (4 * M_PI*(pow(rayon, 3)))/3;
}

int main()
{
    int rayon;
    printf("Entre la rayon de la sphere : ");
    scanf("%d", &rayon);
    printf("le volume de la sphere de rayon %d, est : %f \n", rayon,  volume_sphere(rayon));
    return 0;
}