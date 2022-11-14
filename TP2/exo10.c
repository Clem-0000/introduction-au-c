#include <stdio.h>
//
// Created by Admin on 07/10/2022.
//

int est_bissextile(int);
int est_bissextile(int annee)
{
    if (anneeSaisie % 4 == 0)
    {
        if (anneeSaisie % 100 != 0)
        {
            return 1;
        }
        else{
            if (anneeSaisie % 400 == 0)
            {
                return 1;
            } else{
                return 0;
            }
        }
        return 0;
    } else
    {
        return 0;
    }
}
