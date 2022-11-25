//
// Created by Admin on 24/11/2022.
//
#include <stdlib.h>

#ifndef MAIN_C_PARTIE1_H
#define MAIN_C_PARTIE1_H

#define booleen int
#define faux 0
#define vrai 1
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

int longueurRec(liste);

void afficher(liste);

void afficherRec(liste);

booleen islast(liste);

typeElem last(liste);

typeElem maxL(liste);

typeElem rec_maxL(liste);

booleen recherche(typeElem, liste);

#endif //MAIN_C_PARTIE1_H
