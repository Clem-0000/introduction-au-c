// Created by Clément on 24/11/2022.
// TP 3 : Liste chainées

#include <stdio.h>
#include "liste.h"
#include "partie2.h"
#include "partie3.h"
#include "partie4.h"

int main() {
    liste liste_chaine = cons(12, liste_vide);
    liste_chaine = cons(36, liste_chaine);
    liste_chaine = cons(67, liste_chaine);
    liste_chaine = cons(37, liste_chaine);
    liste_chaine = cons(126, liste_chaine);
    liste_chaine = cons(98, liste_chaine);

    printf("TETE = %d \n", tete(liste_chaine));
    printf("LISTE EST VIDE : %d \n", est_vide(liste_chaine));

/* ************************************************************************************************
 * Partie 1
 * ***********************************************************************************************/
    printf("LONGUEUR : %d \n", longueur(liste_chaine));

    afficher(liste_chaine);

    printf("IS_LAST : %d \n", islast(cons(12, liste_vide))); // VALIDÉ PAR M. DJEBALI MAIS NON FONCTIONNEL --> renvoie false (1)
    printf("LAST ELEM : %d \n", last(liste_chaine));

    printf("VALEUR MAX (ITER) : %d\n", maxL(liste_chaine));
    printf("VALEUR MAX (RECUR) : %d\n", rec_maxL(liste_chaine));

    printf("RECHERCHE 32 IN LISTE : %d\n", recherche(32, liste_chaine));
    printf("RECHERCHE 36 IN LISTE : %d\n", recherche(36, liste_chaine));
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
