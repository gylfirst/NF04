#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Exercice 1
    int valeurs[100];
    int i, max, posi;

    max = 0;
    valeurs[0] = 0;
    for (i = 1; i < 100; i = i + 1)
    {
        if (valeurs[i - 1] != 30)
        {
            printf("Saisir un entier : ");
            scanf("%d", &valeurs[i]);
            if (valeurs[i] > max && valeurs[i] != 30)
            {
                max = valeurs[i];
                posi = i;
            }
        }
        else
            break;
    }
    printf("La plus grande valeur est : %d, sa position est : %d", max, posi);

    // Exercice 2
    int Tmp, N, posMin, i, j;
    int Tab[99];

    printf("Combien de valeurs voulez-vous saisir ? ");
    scanf("%d", &N);
    printf("Saisir maintenant les valeurs du tableau : ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &Tab[i]);
    }
    for (i = 0; i < N - 1; i++)
    {
        posMin = i;
        for (j = i + 1; j < N; j++)
        {
            if (Tab[j] < Tab[posMin])
            {
                posMin = j;
            }
        }
        if (posMin != i)
        {
            Tmp = Tab[i];
            Tab[i] = Tab[posMin];
            Tab[posMin] = Tmp;
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d", Tab[i]);
    }

    // Exercice 3
    float CoA[2], CoB[2], CoC[2], CoD[2], CoE[2], CoP[2];
    int i, j, k, l, m, n;
    float distAP, distBP, distCP, distDP, distEP;
    printf("Saisir les coordonnees du point A : ");
    for (i = 0; i < 2; i++)
    {
        scanf("%f", &CoA[i]);
    }
    printf("Saisir les coordonnees du point B : ");
    for (j = 0; j < 2; j++)
    {
        scanf("%f", &CoB[j]);
    }
    printf("Saisir les coordonnees du point C : ");
    for (k = 0; k < 2; k++)
    {
        scanf("%f", &CoC[k]);
    }
    printf("Saisir les coordonnees du point D : ");
    for (l = 0; l < 2; l++)
    {
        scanf("%f", &CoD[l]);
    }
    printf("Saisir les coordonnees du point E : ");
    for (m = 0; m < 2; m++)
    {
        scanf("%f", &CoE[m]);
    }
    printf("Saisir les coordonnees du point P : ");
    for (n = 0; n < 2; n++)
    {
        scanf("%f", &CoP[n]);
    }
    distAP = sqrt((CoA[0] - CoP[0]) * (CoA[0] - CoP[0]) + (CoA[1] - CoP[1]) * (CoA[1] - CoP[1]));
    distBP = sqrt((CoB[0] - CoP[0]) * (CoB[0] - CoP[0]) + (CoB[1] - CoP[1]) * (CoB[1] - CoP[1]));
    distCP = sqrt((CoC[0] - CoP[0]) * (CoC[0] - CoP[0]) + (CoC[1] - CoP[1]) * (CoC[1] - CoP[1]));
    distDP = sqrt((CoD[0] - CoP[0]) * (CoD[0] - CoP[0]) + (CoD[1] - CoP[1]) * (CoD[1] - CoP[1]));
    distEP = sqrt((CoE[0] - CoP[0]) * (CoE[0] - CoP[0]) + (CoE[1] - CoP[1]) * (CoE[1] - CoP[1]));
    if (distAP < distBP && distAP < distCP && distAP < distDP && distAP < distEP)
    {
        printf("Le point le plus proche est le point A, ses coordonnees sont : x=%f et y=%f ", CoA[0], CoA[1]);
    }
    if (distBP < distAP && distBP < distCP && distBP < distDP && distBP < distEP)
    {
        printf("Le point le plus proche est le point B, ses coordonnees sont : x=%f et y=%f ", CoB[0], CoB[1]);
    }
    if (distCP < distAP && distCP < distBP && distCP < distDP && distCP < distEP)
    {
        printf("Le point le plus proche est le point C, ses coordonnees sont : x=%f et y=%f ", CoC[0], CoC[1]);
    }
    if (distDP < distAP && distDP < distBP && distDP < distCP && distDP < distEP)
    {
        printf("Le point le plus proche est le point D, ses coordonnees sont : x=%f et y=%f ", CoD[0], CoD[1]);
    }
    if (distEP < distAP && distEP < distBP && distEP < distCP && distEP < distDP)
    {
        printf("Le point le plus proche est le point E, ses coordonnees sont : x=%f et y=%f ", CoE[0], CoE[1]);
    }

    return 0;
}
