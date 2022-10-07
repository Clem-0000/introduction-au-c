#include <stdio.h>
//
// Created by Admin on 07/10/2022.
//

int calcul_multiplication(int);
int calcul_multiplication(int nombre)
{
    for (int i = 0; i < 11; ++i) {
        printf("%d * %d = %d\n",i, nombre, i*nombre);
    }
}

int main()
{
    int a;
    printf("Entrez le nombre à multiplier : ");
    scanf("%d", &a);
    printf("\n", calcul_multiplication(a));
    return 0;
}
