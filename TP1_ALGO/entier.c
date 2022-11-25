// Exercice 2

#include "boolean.h"

int maxint() {
    return 32767;
}

int minint() {
    return 0;
}

int add(int a, int b) {
    if ((a + b) > minint()) {
        if ((a + b) < maxint()) return a + b;
        else return maxint();
    } else return minint();
}

int subs(int a, int b) {
    if ((a - b) > minint()) {
        if ((a - b) < maxint()) return a - b;
        else return maxint();
    } else return minint();
}

int mul(int a, int b) {
    int res = 0;
    while (b > 0) {
        res = res + a;
        b--;
    }
    if (res > minint()) {
        if (res < maxint()) return res;
        else return maxint();
    } else return minint();
}

int divi(int a, int b) {
    int quotient = 0;

    if (b != 0) {
        while (a >= b) {
            a -= b;
            quotient++;
        }
    } else return maxint();

    if (quotient > minint()) {
        if (quotient < maxint()) return quotient;
        else return maxint();
    } else return minint();
}

int modulo(int a, int b) {
    int quotient = 0;

    if (b != 0) {
        while (a >= b) {
            a -= b;
            quotient++;
        }
    } else return a;

    if (a > minint()) {
        if (a < maxint()) return a;
        else return maxint();
    } else return minint();
}

int puissance(int a, int b) {
    int puis = 1;
    for (int i = 1; i < b; i++) {
        puis = mul(puis, a);
    }
    if (puis > minint()) {
        if (puis < maxint()) return puis;
        else return maxint();
    } else return minint();
}

int PGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return PGCD(b, modulo(a, b));
}

int succ(int a) {
    if (a + 1 > minint()) {
        if (a + 1 < maxint()) return a + 1;
        else return maxint();
    } else return minint();
}

int pred(int a) {
    if (a - 1 > minint()) {
        if (a - 1 < maxint()) return a - 1;
        else return maxint();
    } else return minint();
}

int equal(int a, int b)
{
    return (a == b) ? true(): false();
}

int noequal(int a, int b)
{
    return (a != b) ? true(): false();
}

int lt(int a, int b)
{
    return (a < b) ? true(): false();
}

int lte(int a, int b)
{
    return (a <= b) ? true(): false();
}

int gt(int a, int b)
{
    return (a > b) ? true(): false();
}
