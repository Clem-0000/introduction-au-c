#include <stdio.h>
//
// Created by Admin on 05/10/2022.
//

int main()
{
    float nombre = 1;
    while( nombre != 0)
    {
        printf("saisir un nombre compris entre 13 et 49 : ");
        scanf("%f", &nombre);
        if (13 < nombre & nombre < 49)
        {
            break;
        }
        printf("entre 13 et 49 j'ai dis!!");
    }

    printf("Bravo! Vous n'en avez pas fais qu'à votre tête!\n");

    return 0;
}