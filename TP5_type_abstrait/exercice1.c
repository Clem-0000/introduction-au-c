#include <stdio.h>

// Created by Clément and Arthur on 14/11/2022.
// TP 1 : le type abstrait booléen
// Exercice 1
/* ******************************
 * Function TRUE
 * ******************************/
int true() { return 1; }

/* ******************************
 * Function FALSE
 * ******************************/
int false() { return 0; }

/* ******************************
 * Function NOT
 * ******************************/
int not(int bool) { return !bool; }

/* ******************************
 * Function AND
 * ******************************/
int and(int bool1, int bool2) { return bool1 && bool2; }

/* ******************************
 * Function OR
 * ******************************/
int or(int bool1, int bool2) { return bool1 || bool2; }

/* ******************************
 * Function MAIN
 * ******************************/
int main() {
    int vrai = true();
    int faux = false();

    printf("bool 1 => %d bool 0 => %d\n", vrai, faux);

    printf("not bool 1 => %d\n", not(vrai));
    printf("not bool 0 => %d\n", not(faux));

    printf("and => %d\n", and(vrai, faux));
    printf("or bool => %d\n\n", or(vrai, faux));

/****************************** 2 - Vérifiez les égalités suivantes ******************************/
    printf("---Vérification égalités---\n\n");
// ¬ vrai V faux == faux V faux
    printf("not %d or %d == %d or %d  <=> %d == %d\n", vrai, faux, faux, faux,
           or(not(vrai), faux), or(faux, faux));

// ¬ vrai V faux == faux
    printf("not %d or %d == %d  <=> %d == %d\n", vrai, faux, faux,
           or(not(vrai), faux), faux);

// vrai ⋀ faux = faux
    printf("%d and %d == %d  <=> %d == %d\n", vrai, faux, faux,
           and(vrai, faux), faux);

// ¬ (vrai ⋀ faux) == ¬ ¬ vrai
    printf("not (%d and %d) == not not %d <=> %d == %d\n", vrai, faux, vrai,
           not(and(vrai,faux)), not(not(vrai)));

// ¬ (vrai ⋀ faux) == vrai
    printf("not (%d and %d) == %d  <=> %d == %d\n\n", vrai, faux, vrai,
           not(and(vrai, faux)), vrai);


/****************************** 3- Vérifiez les égalités suivantes (loi de De Morgan) ******************************/
    printf("---Loi de De Morgan---\n\n");
    int A = vrai;
    int B = faux;

// ¬ (A V B) = (¬A) ⋀ (¬B)
    printf("not (%d or %d) == not %d and not %d  <=> %d == %d\n", A, B, A, B,
           not(or(A, B)), and(not(A), not(B)));

// ¬ (A ⋀ B) = (¬A) V (¬B)
    printf("not (%d and %d) == not %d or not %d  <=> %d == %d\n", A, B, A, B,
           not(and(A, B)), or(not(A), not(B)));
    return 0;
}