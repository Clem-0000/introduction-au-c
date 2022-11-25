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

liste suite(liste);

typeElem tete(liste);

int longueur(liste);

void afficher(liste);

booleen islast(liste);

typeElem last(liste);

typeElem maxL(liste);

typeElem rec_maxL(liste);

booleen recherche(typeElem, liste);

int nb_Occu(typeElem, liste);

typeElem kieme(liste, int);

#endif //MAIN_C_PARTIE1_H
