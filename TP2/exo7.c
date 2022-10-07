#include <stdio.h>
//
// Created by Admin on 07/10/2022.
//

float calcul_prix(int );
float calcul_prix(int nbPhotocopie)
{
    if(nbPhotocopie < 11)
    {
        return nbPhotocopie * 0.5;
    }
    if(nbPhotocopie < 31)
    {
        return nbPhotocopie * 0.3;
    }
    return nbPhotocopie * 0.2;
}

int main()
{
    int nb;
    printf("Entrez un nombre de photocopie : ");
    scanf("%d", &nb);
    printf("le prix pour %d photocopie, est : %f \n", nb,  calcul_prix(nb));
    return 0;
}