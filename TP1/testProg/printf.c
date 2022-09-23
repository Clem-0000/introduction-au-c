#include <stdio.h>
int main()
{
int X;
float note ;
char prenom[25] ;
printf(" \n\t Entrez valeur ( entier ) de X :" );
scanf ("%d", &X) ;
printf(" \n\t Entrez valeur ( un reel ) de note ::" );
scanf ("%f", &note) ;
printf(" \n\t Entrez prenom (une chaine de caractere ) : " );
scanf ("%s", prenom) ;
printf(" \n\t A FFICHAGE DES DONNEES SAISIES : \n" );
printf(" \t valeur de X : %d\n", X );
printf(" \t La note saisie : %2.2f", note );
printf(" \n\t prenom : %s\n ",prenom );
return 0;
}
5