// Created by Clément and Arthur on 14/11/2022.
// TP 1 : le type abstrait booléen

#include <stdio.h>
#include "boolean.h"
#include "entier.h"

int main() {
/* ************************************************************************************************
 * Exercice 1
 * ***********************************************************************************************/
    int vrai = true();
    int faux = false();

    printf("bool 1 => %d bool 0 => %d\n", vrai, faux);

    printf("not bool 1 => %d\n", not(vrai));
    printf("not bool 0 => %d\n", not(faux));

    printf("and => %d\n", and(vrai, faux));
    printf("or bool => %d\n\n", or(vrai, faux));

/**** 2 - Vérifiez les égalités suivantes ****/
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


/**** 3- Vérifiez les égalités suivantes (loi de De Morgan) ****/
    printf("---Loi de De Morgan---\n\n");
    int A = vrai;
    int B = faux;

// ¬ (A V B) = (¬A) ⋀ (¬B)
    printf("not (%d or %d) == not %d and not %d  <=> %d == %d\n", A, B, A, B,
           not(or(A, B)), and(not(A), not(B)));

// ¬ (A ⋀ B) = (¬A) V (¬B)
    printf("not (%d and %d) == not %d or not %d  <=> %d == %d\n", A, B, A, B,
           not(and(A, B)), or(not(A), not(B)));

/* ************************************************************************************************
 * Exercice 2
 * ***********************************************************************************************/
    printf("---Entier ---\n\n");
    int a = 42;
    int b = 50;

    printf("MIN => %d et MAX => %d\n", minint(), maxint());
    printf("%d + %d => %d\n", a, b , add(a, b));
    printf("%d - %d => %d\n", a, b , subs(a, b));
    printf("%d * %d => %d\n", a, b, mul(a, b));
    printf("%d / %d => %d\n", a, b, divi(a, b));
    printf("%d modulo %d => %d\n", a, b, modulo(a, b));
    printf("%d ^ %d => %d\n", a, b, puissance(a, b));
    printf("PGCD(%d, %d) => %d\n", a, b, PGCD(a, b));
    printf("succ %d => %d\n", a, succ(a));
    printf("pred %d => %d\n", a, pred(a));
    printf("%d equal %d => %d\n", a, b, equal(a,b));
    printf("%d noequal %d => %d\n", a, b, noequal(a,b));
    printf("%d lt %d => %d\n", a, b, lt(a,b));
    printf("%d lte %d => %d\n", a, b, lte(a,b));
    printf("%d gt %d => %d\n", a, b, gt(a,b));

    return 0;
}