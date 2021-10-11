#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;

    printf("Quelle est la valeur de a ?\n");  // on demande la valeur de a
    scanf("%i", &a);  //  recopie la saisie de l'utilisateur
    printf("Quelle est la valeur de b ?\n");  // on demande la valeur de b
    scanf("%i", &b); //  recopie la saisie
    c = a * b;    // calcul du produit
    printf("Le produit est égal à %i\n", c);  // impression du résultat
    return 0;
}
