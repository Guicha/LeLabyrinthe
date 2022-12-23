//
// Created by guych on 14/12/2022.
//

#include "../../header.h"


void menu_principal(int *selection) {

    system("cls");

    int couleur = rand() % (15 - 1 + 1) + 1;

    Color(couleur, 0);

    printf("$$\\        $$$$$$\\  $$$$$$$\\ $$\\     $$\\ $$$$$$$\\  $$$$$$\\ $$\\   $$\\ $$$$$$$$\\ $$\\   $$\\ $$$$$$$$\\  \n");
    printf("$$ |      $$  __$$\\ $$  __$$\\\\$$\\   $$  |$$  __$$\\ \\_$$  _|$$$\\  $$ |\\__$$  __|$$ |  $$ |$$  _____| \n");
    printf("$$ |      $$ /  $$ |$$ |  $$ |\\$$\\ $$  / $$ |  $$ |  $$ |  $$$$\\ $$ |   $$ |   $$ |  $$ |$$ |       \n");
    printf("$$ |      $$$$$$$$ |$$$$$$$\\ | \\$$$$  /  $$$$$$$  |  $$ |  $$ $$\\$$ |   $$ |   $$$$$$$$ |$$$$$\\     \n");
    printf("$$ |      $$  __$$ |$$  __$$\\   \\$$  /   $$  __$$<   $$ |  $$ \\$$$$ |   $$ |   $$  __$$ |$$  __|    \n");
    printf("$$ |      $$ |  $$ |$$ |  $$ |   $$ |    $$ |  $$ |  $$ |  $$ |\\$$$ |   $$ |   $$ |  $$ |$$ |       \n");
    printf("$$$$$$$$\\ $$ |  $$ |$$$$$$$  |   $$ |    $$ |  $$ |$$$$$$\\ $$ | \\$$ |   $$ |   $$ |  $$ |$$$$$$$$\\  \n");
    printf("\\________|\\__|  \\__|\\_______/    \\__|    \\__|  \\__|\\______|\\__|  \\__|   \\__|   \\__|  \\__|\\________| \n");

    Color(15, 0);

    /*Sleep(2000);

    system("cls");*/

    printf(" \n");

    printf("Fait avec %c par ", 0x03);

    Color(12, 0);
    printf("Hugo DE OLIVEIRA");

    Color(15, 0);
    printf(", ");

    Color(10, 0);
    printf("Yonathan NAHON ");

    Color(15, 0);
    printf("et ");

    Color(9, 0);
    printf("Guy-Charbel KAIROUZ \n");

    Color(15, 0);

    printf(" \n");

    printf("MERCI DE SELECTIONNER UNE OPTION: \n");

    printf(" \n");

    printf("1) Nouvelle partie \n");
    printf("2) Charger partie \n");
    printf("3) Afficher regles/credits \n");
    printf("4) Quitter le jeu \n");

    printf(" \n");



    do {

        Color(4, 0);

        printf(">> ");

        Color(15, 0);
        scanf("%d", selection);

    } while ( (*selection != 1) && (*selection != 2) && (*selection != 3) && (*selection != 4) && (*selection != 14082004));

}

