#include <stdio.h>
//
// Created by brissarc on 30/09/22.
//

// ce programme permet d'interchanger les valeurs de a et b
int main()
{
    int a;
    int b;
    printf("Entrez la valeur de a et de b : ");
    scanf("%d %d", &a, &b);
    a = b-a;
    b = b-a;
    a = b+a;
    printf("la nouvelle valeur de a est %d, la valeur de b est : %d \n", a,b);
    return 0;
}