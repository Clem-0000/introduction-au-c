//
// Created by Admin on 24/11/2022.
//
#include "liste.h"
#include <stdio.h>
#include <limits.h>

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

//PARTIE 1
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
  int max = INT_MIN;

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

  while(!est_vide(L)){
    if(X == tete(L))
      return True ;
    L= suite(L);
  }

  return False;
}

//PARTIE 2
int nb_Occu(typeElem X ,liste L){
    int compteur = 0;
    while(!est_vide(L)){
        if(X == tete(L)) compteur++ ;
        L= suite(L);
    }
    return compteur;
}

typeElem kieme(liste L, int k) {
    typeElem valeur = -1;
    if(longueur(L) >= k) {
        for(int i=1; i<k; i++) L=suite(L);
        valeur = tete(L);
    }
    return valeur;
}

int pos(liste L, typeElem E) {
    int pos = -1;
    if (recherche(E, L)){
        pos = 1;
        while(!est_vide(L)){
            if(E == tete(L)) return pos;
            L= suite(L);
            pos++;
        }
    }
    return pos;
}

liste adr(liste L, typeElem E) {
    if (recherche(E, L)){
        while(!est_vide(L)){
            if(E == tete(L)) return L;
            L= suite(L);
        }
    } else return liste_vide;
}
