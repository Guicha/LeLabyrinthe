//
// Created by guych on 25/12/2022.
//

#include "../../header.h"

void options_joueur(t_joueur tab_joueurs[4], int index_joueur, int *choix_joueur, int coulissage) {

    printf("C'est au tour de ");

    Color(tab_joueurs[index_joueur].couleur, 0);

    printf("%s (Joueur %d) ", tab_joueurs[index_joueur].pseudo, index_joueur+1);

    Color(15, 0);
    printf("de jouer ! | ");

    Color(3, 0);
    printf("Score: %d \n", tab_joueurs[index_joueur].score);

    Color(15, 0);

    printf("Les options grisees sont inaccessibles pour le moment ! \n");

    printf("\n");


    if (coulissage == 0) {

        printf("1) Faire coulisser une ligne/colonne \n");
        Color(8, 0);
        printf("2) Deplacer joueur \n");
        Color(15, 0);
        printf("3) Afficher le prochain tresor a chercher \n");
        printf("4) Options \n");

        printf("\n");

        do {

            Color(4, 0);

            printf(">> ");

            Color(15, 0);
            scanf("%d", choix_joueur);

        } while ((*choix_joueur != 1) && (*choix_joueur != 3) && (*choix_joueur != 4));


    } else if (coulissage == 1) {

        Color(8, 0);
        printf("1) Faire coulisser une ligne/colonne \n");
        Color(15, 0);
        printf("2) Deplacer joueur \n");
        printf("3) Afficher le prochain tresor a chercher \n");
        printf("4) Options \n");

        printf("\n");

        do {

            Color(4, 0);

            printf(">> ");

            Color(15, 0);
            scanf("%d", choix_joueur);

        } while ((*choix_joueur != 2) && (*choix_joueur != 3) && (*choix_joueur != 4));
    }




    printf("\n");



}