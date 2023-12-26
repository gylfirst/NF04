#include <stdio.h>
#include <stdlib.h>

// Mini-Projet NF04 - Sujet Division euclidienne polynomiale
// Tourrette Matthieu

// On va créer une fonction pour afficher les résultats :
int result(int deg, float coeff[])
{
    int i;
    for (i = deg; i > -1; i--)
    {
        if (coeff[i] != 0 && coeff[i] != -0)
        {
            if (i != 0)
            {
                printf("+ %fx^%d ", coeff[i], i);
            }
            else
            {
                printf("+ %f ", coeff[i]);
            }
        }
    }
    return 0;
}

int main()
{
    int degA, degB, degR, degQ, degQf, ind;
    float TabCoeffA[21], TabCoeffB[21], TabCoeffQuotient[21], TabCoeffReste[21];

    printf("Entrer le degre du polynome A (20 maximum) : ");
    scanf("%d", &degA);
    printf("Entrer le degre du polynome B (20 maximum) : ");
    scanf("%d", &degB);

    // On configure la valeur du coeff de plus haut degré pour vérifier qu'elle est non nulle
    TabCoeffA[degA] = 0;
    TabCoeffB[degB] = 0;
    while (TabCoeffA[degA] == 0)
    {
        printf("Entrer le premier coefficient non nul de A : ");
        scanf("%f", &TabCoeffA[degA]);
    }
    while (TabCoeffB[degB] == 0)
    {
        printf("Entrer le premier coefficient non nul de B : ");
        scanf("%f", &TabCoeffB[degB]);
    }

    // On va entrer tous les coeefs de A, puis de B
    for (ind = degA - 1; ind > -1; ind = ind - 1)
    {
        printf("Entrer le coefficient de A : ");
        scanf("%f", &TabCoeffA[ind]);
    }
    for (ind = degB - 1; ind > -1; ind = ind - 1)
    {
        printf("Entrer le coefficient de B : ");
        scanf("%f", &TabCoeffB[ind]);
    }

    degR = degA;
    // On copie les coeffs de A dans les coeffs du reste
    for (ind = degR; ind > -1; ind = ind - 1)
    {
        TabCoeffReste[ind] = TabCoeffA[ind];
    }

    if (degA < degB)
    {
        printf("Le quotient des polynomes est nul et le reste est : ");
        printf(result(degR, TabCoeffReste));
    }
    else
    {
        degQf = degR - degB;
        while (degR >= degB)
        {
            degQ = degR - degB;
            TabCoeffQuotient[degQ] = TabCoeffReste[degR] / TabCoeffB[degB];
            for (ind = degB; ind > -1; ind--)
            {
                TabCoeffReste[ind + degQ] = TabCoeffReste[ind + degQ] - (TabCoeffB[ind] * TabCoeffQuotient[degQ]);
            }
            degR = degR - 1;
        }
        // On procède à l'affichage final :
        printf("Le quotient des polynomes est : ");
        printf(result(degQf, TabCoeffQuotient));
        printf("\nLe reste de la division euclidienne des polynomes est : ");
        printf(result(degR, TabCoeffReste));
    }
    return 0;
}
