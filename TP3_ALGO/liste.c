//
// Created by Admin on 24/11/2022.
//
#include "liste.h"
#include <stdio.h>

booleen est_vide(liste L) {
    return L == liste_vide;
}

liste cons(typeElem E, liste L) {
    liste tmp = (liste) malloc(sizeof(typeListe));
    tmp->e = E;
    tmp->suiv = L;
    return tmp;
}

liste suite(liste L) {
    return L->suiv;
}

typeElem tete(liste L) {
    return L->e;
}

int longueur( liste L){
  int i=0 ;
  while( !est_vide(L)){
    i++ ;
    L= suite(L) ;
  }
  return i ;
}

void afficher( liste L){
  while(!est_vide(L)){
    printf(" %d", tete(L)) ;
    L= suite(L);
  }
  printf("\n");
}

booleen islast( liste L){
  if(est_vide(suite(L)))
    return True;
  else
    return False;

}

typeElem last(liste L){
  while(!est_vide(L)){
    if(islast(L))return(tete(L));
    L= suite(L);
  }
}

typeElem maxL( liste L){
  int max = -99999;

  if(!est_vide(L)){
    while(!est_vide(L)){
      if(tete(L) > max){
        max = tete(L);
      }
      L= suite(L);
    }
    return max;
  }
  else
    return -max;
}

typeElem rec_maxL( liste L){
  static int max = 0;

    if(!est_vide(L)){
      if(tete(L) > max){
        max = tete(L);
      }
      rec_maxL(suite(L)) ;
    }

  return max;
 }

booleen recherche(typeElem X ,liste L){

  while( !est_vide(L)){
    if(X == tete(L))
      return True ;
    L= suite(L);
  }

  return False;
}
