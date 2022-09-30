#include <stdio.h>
//
// Created by brissarc on 30/09/22.
//

int main()
{
    int a;
    int i = 1;
    int somme = 0;
    int sommepair = 0;
    printf("Saisir n : ");
    scanf("%d", &a);

    while (i <= a){
        somme += i;
        if(i%2 == 0){
            sommepair +=i;
        }
        i++;
    }
    printf("la somme est :  %d, la somme des nombres pairs est : %d \n", somme, sommepair);
    return 0;
}