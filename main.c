#include "header.h"

int main() {

    // === VARIABLES MENU ===
    int choix = 0;
    int alive = 0;

    // === INITIALISATION DE L'ALEATOIRE ===
    srand(time(NULL));



    // === MATRICES DU PLATEAU DE JEU ===
    char plateau_de_jeu[9][9] = { {' ', ' ',              25,  ' ',       25,  ' ',       25,  ' ',       ' '},
                                  {' ', tuile_L_2, ' ', tuile_T_1, ' ', tuile_T_1, ' ', tuile_L_3, ' '},
                                  {26,  ' ',              ' ', ' ',       ' ', ' ',       ' ', ' ',       27 },
                                  {' ', tuile_T_2,        ' ', tuile_T_2, ' ', tuile_T_1, ' ', tuile_T_3, ' '},
                                  {26,  ' ',              ' ', ' ',       ' ', ' ',       ' ', ' ',       27},
                                  {' ', tuile_T_2,        ' ', tuile_T_4, ' ', tuile_T_3, ' ', tuile_T_3, ' '},
                                  {26,  ' ',              ' ', ' ',       ' ', ' ',       ' ', ' ',       27},
                                  {' ', tuile_T_1,        ' ', tuile_T_4, ' ', tuile_T_4, ' ', tuile_L_4, ' '},
                                  {' ', ' ',              24,  ' ',       24,  ' ',       24,  ' ',       ' '}
    };


    for (int i = 0; i<3; i++) {
        for (int j=0; j<3; j++) {

            printf("%c", plateau_de_jeu[i][j]);

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
