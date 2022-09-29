#include <stdio.h>
//
// Created by brissarc on 29/09/2022.
//

int max_entre_nombre(int, int, int );
int nombre_est_pair(int nombreA, int nombreB, int nombreC)
{
    int max = nombreA
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
    int maxNombre;
    printf("Combien de valeurs entières voulez-vous entrer (2 ou 3) : ");
    scanf("%d", &a);
    if(a == 2){
        printf("Entrez deux valeurs : ");
        scanf("%d", &a, &b);
        maxNombre = nombre_est_pair(a,b, 0);
    }else{
        printf("Entrez trois valeurs : ");
        scanf("%d", &a, &b, &c);
        maxNombre = nombre_est_pair(a,b, c);
    }
    printf("le nombre maximum saisie est : ",maxNombre)
    return 0;
}