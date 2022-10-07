#include <stdio.h>
#include<math.h>
//
// Created by Admin on 05/10/2022.
//

int factoriel(int);
int factoriel(int nombreFacto)
{
    int somme = 1;
    if(nombreFacto == 0){
        somme = 1;
    }
    else
    {
        for (int i = 1; i <= nombreFacto ; ++i) {
            somme = 2 * somme * (nombreFacto-1)+1;
            printf("%d, %d\n", somme, i);
        }
    }
    return somme;
}

float calcul(int );
float calcul(int nombre)
{
    float sinX ;
    float nombre_arret = 1;
    float terme = 0;
    while( nombre_arret != 0)
    {
        if(terme < )
        {
            break;
        }
    }
}

int main()
{
    int nombre;
    int somme = 1;
    printf("Saisir nombre : ");
    scanf("%d", &nombre);

    if(nombre == 0){
        somme = 1;
    }
    else
    {
        for (int i = 1; i <= nombre ; ++i) {
            somme = 2 * somme * (nombre-1)+1;
            printf("%d, %d\n", somme, i);
        }
    }

    printf("le résultat est : %d\n", somme);

    return 0;
}