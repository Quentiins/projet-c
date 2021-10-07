#include <stdio.h>
#include <cs50.h>


int main(void)
{
    string filmCategorieEnfant[3]; // assignement des films pour enfants , ados et adultes.
    filmCategorieEnfant[0] = "Cars";
    filmCategorieEnfant[1] = "La Reine des Neiges";
    filmCategorieEnfant[2] = "Tom et Jerry";

    string filmCategorieAdos[3];
    filmCategorieAdos[0] = "Harry Potter";
    filmCategorieAdos[1] = "Le Labyrinthe";
    filmCategorieAdos[2] = "Ready Player One";

    string filmCategorieAdulte[3];
    filmCategorieAdulte[0] = "The Shining";
    filmCategorieAdulte[1] = "La Nonne";
    filmCategorieAdulte[2] = "Conjuring";


    int age = get_int("Quel est votre âge?\n");

    if (age < 11){ // Si l'âge est inférieur à 11 ans , alors les films pour enfants seront proposés. Si l'enfant répond non , deux autres films seront proposés sinon si l'enfant répond oui , le message lui indiquant d'aller dans la salle s'affiche.
        printf("Vous avez %i ans , vous devez donc regarder les films de catégorie enfant.\n", age);
         for ( int i = 0; i < 3; i++ ){
             char c = get_char("Voulez-vous voir le film %s ?\n", filmCategorieEnfant[i]);
             if (c== 'N' || c== 'n'){
             }else if (c== 'O' || c== 'o'){
                 printf("Vous pouvez aller voir votre film dans la salle correspondante.\n");
                 return 0;
             }
         }

    }else if(age >= 11 && age <18 ){ // Si l'âge est entre 11 ans et 18 ans , alors les films pour ados seront proposés. Si l'ado répond non , deux autres films seront proposés sinon si il répond oui , le message lui indiquant d'aller dans la salle s'affiche.
        printf("Vous avez %i ans , vous devez donc regarder les films de catégorie ado.\n", age);
         for ( int i = 0; i < 3; i++ ){
             char c = get_char("Voulez-vous voir le film %s ?\n", filmCategorieAdos[i]);
             if (c== 'N' || c== 'n'){
             }else if (c== 'O' || c== 'o'){
                 printf("Vous pouvez aller voir votre film dans la salle correspondante.\n");
                 return 0;
             }
         }
    }else if(age >= 18){ // Si l'âge est supérieur à 18 ans , alors les films pour adultes seront proposés. Si l'adulte répond non , deux autres films seront proposés sinon si il répond oui , le message lui indiquant d'aller dans la salle s'affiche.
        printf("Vous avez %i ans , vous devez donc regarder les films de catégorie adulte.\n", age);
         for ( int i = 0; i < 3; i++ ){
             char c = get_char("Voulez-vous voir le film %s ?\n", filmCategorieAdulte[i]);
             if (c== 'N' || c== 'n'){
             }else if (c== 'O' || c== 'o'){
                 printf("Vous pouvez aller voir votre film dans la salle correspondante.\n");
                 return 0;
             }
         }
    }
    }
