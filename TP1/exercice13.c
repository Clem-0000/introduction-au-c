#include <stdio.h>
//
// Created by Admin on 05/10/2022.
//

int main()
{
    int n;
    float valeurX, puissance;
    puissance=1;
    printf("entrez les valeurs de X et de n : ");
    scanf("%f %i", &valeurX, &n);

    for (int i = 0; i < n; ++i) {
        puissance*=valeurX;
    }
    printf("%f à la puissance %i est %f\n", valeurX, n, puissance);
    return 0;
}