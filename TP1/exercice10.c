#include <stdio.h>
//
// Created by brissarc on 30/09/22.
//

// ce programme permet de décaler de 1 vers la droite les valeurs de a,b et c
int main()
{
    int a;
    int b;
    int c;
    printf("Entrez la valeur de a, de b et de c : ");
    scanf("%d %d %d", &a, &b, &c);
    a = a+b+c;
    b = b+c;
    c = a-c;
    a = a-c;
    b = c-b+a;
    c = c-b;
    printf("la nouvelle valeur de a est %d, la valeur de b est : %d, la valeur de c est : %d \n", a,b,c);
    return 0;
}