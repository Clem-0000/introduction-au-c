#include <stdio.h>
#include <math.h>
//
// Created by Admin on 07/10/2022.
//


void calcul_equation(int nombreA, int nombreB,int nombreC)
{
    float x = 0;
    delta = (nombreB * nombreB) - 4 * nombreA * nombreC;
    if (delta < 0)
    {
        printf("delta est négatif, equation n'admet pas de solution\n ",));
    }
    else if(a == 0){
        printf("a est à 0");
    }
    else if(deltat ==0 & a!= 0)
    {
        x = ((-nombreB)- sqrt(delta)) / 2 * nombreA;
        printf("le résultat est %f", x)
    }
    else{
       float x1 = ((-nombreB)- sqrt(delta)) / 2 * nombreA;
       float x2 = ((-nombreB)+ sqrt(delta)) / 2 * nombreA;
        printf("le x1 =  %f, x2 = %f", x1, x2);
    }
}

int main()
{
    int a;
    int b;
    int c;

    printf("Entrez trois valeurs a b c : ");
    scanf("%d %d %d", &a, &b, &c);
    calcul_equation(a, b, c);
    return 0;
}