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

int longueur(liste L) {
    int i = 0;
    while (!est_vide(L)) {
        i++;
        L = suite(L);
    }
    return i;
}

int longueurRec(liste L) {
    if (est_vide(L)) return 0;
    return 1 + longueurRec(suite(L));
}

void afficher(liste L) {
    while (!est_vide(L)) {
        printf("%d ", tete(L));
        L = suite(L);
    }
    printf("\n");
}

void afficherRec(liste L) {
    if (!est_vide(L)) {
        printf("%d ", tete(L));
        afficherRec(suite(L));
    }
    else printf("\n");
}

booleen islast(liste L) {
    return est_vide(suite(L));
}

typeElem last(liste L) {
    while (!est_vide(L)) {
        L = suite(L);
    }
    return tete(L);
}

typeElem maxL(liste L) {

    // qui retourne l’élément maximal d’une liste non vide (en itératif)
    return 0;
}

typeElem rec_maxL(liste L) {
    // qui retourne l’élément maximal d’une liste non vide (en récursif)
    return 0;
}

booleen recherche(typeElem X, liste L) {
    while (!est_vide(L)) {
        if (X == tete(L)) return vrai;
        L = suite(L);
    }
    return faux;
}
