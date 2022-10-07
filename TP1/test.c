#include <stdio.h>
//
// Created by Admin on 06/10/2022.
//
void swap(int x, int y){
    int tmp=x;
    x=y;
    y=tmp;
}

void  double1 (int a)
{  a= a*2;  }

int double2 (int a)
{  return a*2;  }

int main(){
    int x=20;
    int y=44 ;

    printf("Avant echange : valeur x est = %d et celle de y est = %d\n ", x, y) ;
    swap(x, y) ;
    printf(" echange : valeur x est = %d et celle de y est = %d\n ", x, y) ;
    int c=33;
    int w= double1(c); // error alerte rouge error alerte rouge error alerte rouge
    printf("valeur de x est = %d\n",w);
    int z= double2(c);
    printf("valeur de z est = %d\n",z);
    return 0;
}
