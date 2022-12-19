#include "header.h"

int main() {

    // === VARIABLES MENU ===
    int choix = 0;
    int alive = 0;

    // === INITIALISATION DE L'ALEATOIRE ===
    srand(time(NULL));



    // === MATRICES DU PLATEAU DE JEU ===
    char plateau_de_jeu[8][8] = { {' ', ' ', 25, ' ', 25, ' ', 25, ' '},
                                  {},
                                  {},
                                  {},
                                  {},
                                  {},
                                  {},
                                  {},
    };


    for (int i = 0; i<3; i++) {
        for (int j=0; j<3; j++) {

            printf("%c", tuile_L_1[i][j]);

            printf(" ");

        }
        printf("\n");
    }

    while (alive) {

        if (choix == 0) {

            system("cls");
            menu_principal(&choix);

        } else if (choix == 1) {


        } else if (choix == 2) {

            consulter_sauvegardes(&choix);

        } else if (choix == 3) {

            credits(&choix);

        } else if (choix == 4) {

            printf(" \n");
            Color(12, 0);
            printf("Merci d'avoir joue a Labyrinthe ! \n");
            alive = 0;
        }
    }

    printf("\n");

    Color(15, 0);
    system("pause");

    return 0;
}
