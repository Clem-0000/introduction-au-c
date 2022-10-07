#include <stdio.h>
//
// Created by Admin on 07/10/2022.
//

int nombre_est_pair(int, int, int );
int nombre_est_pair(int nombreA, int nombreB,int nombreC)
{
    int max = nombreA;
    if(max < nombreB){
        max = nombreB;
    }
    if(max < nombreC){
        max = nombreC;
    }
    return max;
}

int main()
{
    int a;
    int b;
    int c;

    printf("Entrez trois valeurs : ");
    scanf("%d %d %d", &a, &b, &c);

    printf("le nombre maximum saisie est :%d\n ",nombre_est_pair(a,b, c));
    return 0;
}