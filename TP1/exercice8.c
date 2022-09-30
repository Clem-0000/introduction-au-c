#include <stdio.h>
#include <math.h>

//
// Created by brissarc on 30/09/22.
//

int main()
{
    int r;
    printf("Entrez un rayon : ");
    scanf("%d", &r);
    float perimetre = 2*r*M_PI;
    float aire = r*r*M_PI;
    printf("le perimetre du cercle de rayon %d, est : %f, son aire est de : %f \n", r, perimetre, aire);
    return 0;
}