#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Moyenne
    printf("Methode 1\n");
    float moyenne, somme, valeur;
    int N, i;
    printf("Saisir la valeur de N : ");
    scanf("%d", &N);
    somme = 0;
    for (i = 0; i < N; i = i + 1)
    {
        printf("Saisir la valeur : ");
        scanf("%f", &valeur);
        somme = somme + valeur;
    }
    moyenne = somme / N;
    printf("La moyenne des %d valeurs saisies vaut %f", N, moyenne);

    printf("Methode 2\n");
    float moyenne, somme, valeur;
    int N, i;
    printf("Saisir la valeur de N : ");
    scanf("%d", &N);
    somme = 0;
    i = 0;
    while (i < N)
    {
        printf("Saisir la valeur : ");
        scanf("%f", &valeur);
        somme = somme + valeur;
        i = i + 1;
    }
    moyenne = somme / N;
    printf("La moyenne des %d valeurs saisies vaut %f", N, moyenne);

    printf("Methode 3\n");
    float moyenne, somme, valeur;
    int N, i;
    somme = 0;
    N = 0;
    while (valeur != 30)
    {
        printf("Saisir la valeur : ");
        scanf("%f", &valeur);
        if (valeur != 30)
        {
            somme = somme + valeur;
            N = N + 1;
        }
    }
    moyenne = somme / N;
    printf("La moyenne des %d valeurs saisies vaut %f", N, moyenne);

    // LN
    printf("Aglorithme LN\n");
    float LN, x, Xpuiss;
    int n, signe, i;
    printf("Saisir la valeur de x : ");
    scanf("%f", &x);
    printf("Saisir la valeur de n : ");
    scanf("%d", &n);
    LN = 0;
    Xpuiss = 1;
    signe = 1;
    for (i = 1; i < n; i = i + 1)
    {
        LN = LN + (signe * x * Xpuiss) / i;
        Xpuiss = Xpuiss * x;
        signe = -1 * signe;
    }
    printf("LN vaut %f", LN);

    return 0;
}
