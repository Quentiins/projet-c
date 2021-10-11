#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;

    printf("Quelle est la valeur de x ?\n");  // on demande la valeur de a
    scanf("%i", &x);  //  recopie la saisie de l'utilisateur
    printf("Quelle est la valeur de y ?\n");  // on demande la valeur de b
    scanf("%i", &y); //  recopie la saisie
    printf("Quelle est la valeur de z ?\n");  // on demande la valeur de b
    scanf("%i", &z); //  recopie la saisie


    if (x > y && x > z)
    {
        printf("%i est plus grand que %i et %i\n", x, y, z);
    }
    else if (y > x && y > z)
    {
        printf("%i est plus grand que %i et %i\n", y, x, z);
    }
    else if (z > x && z > y)
    {
        printf("%i est plus grand que %i et %i\n", z, x, y);
    }
}
