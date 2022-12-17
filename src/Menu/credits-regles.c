//
// Created by guych on 16/12/2022.
//

#include "../../header.h"

void credits(int *selection) {

    system("cls");

    printf(" \n");

    Color(3, 0);

    printf("LABYRINTHE \n");

    Color(15, 0);

    printf("Credits orginaux du jeu: \n");

    printf("\n");

    printf("Auteur : Max J. Kobbert \n");
    printf("Illustrations : Joachim Krause \n");
    printf("Design : DE Ravensburger \n");
    printf("Vera Bolze (notice) \n");
    printf("Photos : Becker Studios \n");

    printf(" \n");

    printf("Jeu numerise par: \nHugo DE OLIVEIRA, Yonathan NAHON et Guy-Charbel KAIROUZ dans le cadre du projet semestriel 1 de l'ECE Paris \n");

    printf("\n");



    Color(3, 0);

    printf("REGLES DE JEU \n");

    Color(15, 0);

    printf("Vous penetrez dans un labyrinthe enchante a la\n"
           "recherche de fabuleux tresors et de mysterieuses\n"
           "creatures. Chacun d'entre vous essaye de creer des\n"
           "chemins pour atteindre le tresor qu'il convoite en faisant\n"
           "coulisser astucieusement les couloirs.\n"
           "Le joueur qui aura trouve tous ses tresors et rejoint sa\n"
           "case depart le premier sera declare vainqueur. \n");

    printf("\n");

    printf("Pour plus d'informations, consultez: \n");

    Color(9, 0);

    printf("https://www.ravensburger.fr/spielanleitungen/ecm/Spielanleitungen/26743_Labyrinthe_00.pdf?ossl=pds_text_Spielanleitung \n");

    Color(15, 0);

    printf("\n");

    system("pause");

    *selection = 0;

    system("cls");

}