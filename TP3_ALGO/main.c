// Created by Clément on 24/11/2022.
// TP 3 : Liste chainées

#include <stdio.h>
#include "liste.h"
#include "partie2.h"
#include "partie3.h"
#include "partie4.h"

int main() {
    liste liste_chaine_last = cons(12, liste_vide);
    liste liste_chaine = cons(36, liste_chaine_last);

    printf("TETE = %d \n", tete(liste_chaine));

    printf("LISTE EST VIDE : %d \n", est_vide(liste_chaine));

/* ************************************************************************************************
 * Partie 1
 * ***********************************************************************************************/
    printf("LONGUEUR : %d \n", longueur(liste_chaine));
    printf("LONGUEUR méthode récursive: %d \n", longueurRec(liste_chaine));

    afficher(liste_chaine);
    afficherRec(liste_chaine);

    liste chaine = cons(12, liste_vide);
    int result = islast(chaine);
    printf("IS_LAST : %d \n", result);
    printf("%d\n", last(liste_chaine));

//    printf("maxL : %d\n",maxL(liste));
//
//printf("%d\n", rec_maxL(liste));
//
//    booleen recherche(typeElem, liste);
/* ************************************************************************************************
 * Partie 2
 * ***********************************************************************************************/

/* ************************************************************************************************
 * Partie 3
 * ***********************************************************************************************/

/* ************************************************************************************************
 * Partie 4
 * ***********************************************************************************************/
    return 0;
}