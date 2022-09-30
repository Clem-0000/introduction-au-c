#include <stdio.h>
//
// Created by Admin on 29/09/2022.
//

int main ()
{
    int a;
    int b;

    printf("Entrez deux valeurs à échanger : ");
    scanf("%d %d", &a, &b);
    int c = a;
    a = b;
    b = c;
    printf("le nombre a est : %d,le nombre b est : %d\n ",a, b);
};
// use pointeur