#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x;
    int y;

    printf("Quelle est la valeur de x ?\n");  // on demande la valeur de a
    scanf("%i", &x);  //  recopie la saisie de l'utilisateur
    printf("Quelle est la valeur de y ?\n");  // on demande la valeur de b
    scanf("%i", &y); //  recopie la saisie

    printf("x is %i and y is %i\n", x, y);  // imprime la valeur de x et y
    swap(&x, &y); // échange x et y
    printf("x is %i and y is %i\n", x, y);
}


void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
