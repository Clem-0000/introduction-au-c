//
// Created by Admin on 24/11/2022.
//
#include <stdlib.h>

#ifndef MAIN_C_PARTIE1_H
#define MAIN_C_PARTIE1_H

#define booleen int
#define False 0
#define True 1
#define typeElem int
#define liste_vide NULL

typedef struct ll {
    typeElem e;
    struct ll *suiv;
} typeListe;

typedef typeListe *liste;

int est_vide(liste);

liste cons(typeElem, liste);

void cons_(typeElem, liste *);

liste suite(liste);

typeElem tete(liste);

//PARTIE 1
int longueur(liste);

void afficher(liste);

booleen islast(liste);

typeElem last(liste);

typeElem maxL(liste);

typeElem rec_maxL(liste);

booleen recherche(typeElem, liste);

//PARTIE 2
int nb_Occu(typeElem, liste);

typeElem kieme(liste, int);

int pos(liste, typeElem);

liste adr(liste, typeElem);

//PARTIE 3
void iter_inverse(liste *);
#endif //MAIN_C_PARTIE1_H
