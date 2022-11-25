//
// Created by Admin on 24/11/2022.
//

#include "partie4.h"

//      17- Concaténer deux listes :
//      void catenate(liste *L1, liste *L2) concatène L2 à L1 :
//      ***** traiter les différents cas listes vide et|non vides etc..
//      - ne pas oublier le cas L1 = L2 (c’est-à-dire même liste ) concat(L,L), dans ce cas que faut-il
//              choisir copies (2 fois la liste L ) ou références (liste circulaire)?
//      On optera pour la liste circulaire.
//      void couper(liste *L1, liste *L2, liste *L3)
//      Obtenir deux listes L1, L2 à partir d’une liste L3 en préservant les éléments de cette
//              dernière.(les nombres positifs dans L1, les négatifs dans L2, les nuls seront ignorés.
//
//
//      18 - void fusion(liste *L1, liste *L2, liste *L3) Obtenir une 3ème liste L3 triée à partir de
//      deux L1 et L2 triées. (par ordre croissant).