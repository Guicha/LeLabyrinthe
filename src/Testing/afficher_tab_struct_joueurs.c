//
// Created by guych on 25/12/2022.
//

#include "../../header.h"

void afficher_tab_struct_joueurs(t_joueur tab[4], int nb_joueurs) {

    system("cls");

    printf("**** AFFICHAGE DU TABLEAU DE STRUCTURES JOUEURS **** \n");

    int i;
    int j;

    for (i=0; i<nb_joueurs; i++) {

        printf("**** AFFICHAGE DU JOUEUR %d \n", i);
        printf("\n");

        printf("Pseudo: %s \n", tab[i].pseudo);

        printf("Le pion est: %c \n", tab[i].pion);

        printf("Tresors du joueur %d: ", i);
        for (j=0; j<12; j++) {

            printf("%c ", tab[i].tresors[j]);
        }

        printf("\n");

        printf("Le score est de: %d", tab[i].score);

        printf("\n");

        printf("La couleur est: %d", tab[i].couleur);

        printf("\n");
        printf("\n");
    }

    system("pause");
}