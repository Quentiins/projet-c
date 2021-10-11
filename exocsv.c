#include <stdio.h>
#include <string.h>

int main(void)
{
    //Open CSV file
    FILE *file = fopen("exocsv.csv", "a");
    //premier argument est le nom du fichier
    //deuxième argument est soit r, soit w, soit a,...

    if (!file)
    {
        return 1;
    }

    char modele[50];
    char plaque[50];
    printf("Quelle est le modèle de la voiture ?\n");  // on demande le modèle de la voiture
    scanf("%s", modele);  //  recopie la saisie de l'utilisateur
    printf("Quelle est la plaque de la voiture ?\n");  // on demande la plaque de la voiture
    scanf("%s", plaque);  //  recopie la saisie de l'utilisateur

    //écrire dans le fichier csv
    fprintf(file, "%s , %s\n", modele, plaque);

    //fermer le fichier CSV
    fclose(file);
}
