//
// Created by guych on 01/01/2023.
//

#include "../../header.h"

void victoire(t_joueur gagnant) {

    int affichage = 1;
    int couleur;

    system("cls");

    while(affichage) {

        couleur = rand() % (15 - 1 + 1) + 1;

        gotoligcol(0, 0);

        printf("\n");

        Color(3, 0);

        printf("LA PARTIE EST TERMINEE ! LE GRAND GAGNANT EST : \n");

        printf("\n");

        Color(gagnant.couleur, 0);

        printf("\t\t %s \n", gagnant.pseudo);

        printf("\n");

        Color(couleur, 0);

        printf("                                               \n"
               "                                               \n"
               "        GGGGGGGGGGGGG        GGGGGGGGGGGGG     \n"
               "     GGG::::::::::::G     GGG::::::::::::G     \n"
               "   GG:::::::::::::::G   GG:::::::::::::::G     \n"
               "  G:::::GGGGGGGG::::G  G:::::GGGGGGGG::::G     \n"
               " G:::::G       GGGGGG G:::::G       GGGGGG     \n"
               "G:::::G              G:::::G                   \n"
               "G:::::G              G:::::G                   \n"
               "G:::::G    GGGGGGGGGGG:::::G    GGGGGGGGGG     \n"
               "G:::::G    G::::::::GG:::::G    G::::::::G     \n"
               "G:::::G    GGGGG::::GG:::::G    GGGGG::::G     \n"
               "G:::::G        G::::GG:::::G        G::::G     \n"
               " G:::::G       G::::G G:::::G       G::::G     \n"
               "  G:::::GGGGGGGG::::G  G:::::GGGGGGGG::::G     \n"
               "   GG:::::::::::::::G   GG:::::::::::::::G     \n"
               "     GGG::::::GGG:::G     GGG::::::GGG:::G     \n"
               "        GGGGGG   GGGG        GGGGGG   GGGG");


        printf("\n\n\n");

        Color(15, 0);

        printf("Appuyer sur une touche pour retourner au menu principal ! \n");

        if (kbhit()) {

            affichage = 0;
        }

        Sleep(2000);

        system("cls");

    }


}