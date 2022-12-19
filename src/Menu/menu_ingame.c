//
// Created by guych on 19/12/2022.
//

#include "../../header.h"

void menu_ingame() {

    int selection;
    int sauvegarde = 0;

    system("cls");

    Color(3, 0);

    printf("MENU DE JEU \n");

    Color(15, 0);

    printf("\n");

    printf("MERCI DE SELECTIONNER UNE OPTION: \n");

    printf("\n");

    printf("1) Reprendre la partie \n");
    printf("2) Sauvegarder la partie \n");
    printf("3) Retour au menu principal \n");

    printf("\n");

    do {

        Color(4, 0);

        printf(">> ");

        Color(15, 0);
        scanf("%d", &selection);

    } while ( (selection != 1) && (selection != 2) && (selection != 3));

    if (selection == 1) {

        //pass
    } else if (selection == 2) {

        // sauvegarde a faire plus tard

    } else if (selection == 3) {

        // il faudra vérifier avant que l'utilisateur veut vrm quitter sans sauvegarder

    }
}