#include "header.h"

int main() {

    // === VARIABLES MENU ===
    int choix = 0;
    int alive = 0;

    // === INITIALISATION DE L'ALEATOIRE ===
    srand(time(NULL));



    // === MATRICES DU PLATEAU DE JEU ===
    /*char plateau_de_jeu[9][9] = { {' ', ' ',              25,  ' ',       25,  ' ',       25,  ' ',       ' '},
                                  {' ', tuile_L_2, ' ', tuile_T_1, ' ', tuile_T_1, ' ', tuile_L_3, ' '},
                                  {26,  ' ',              ' ', ' ',       ' ', ' ',       ' ', ' ',       27 },
                                  {' ', tuile_T_2,        ' ', tuile_T_2, ' ', tuile_T_1, ' ', tuile_T_3, ' '},
                                  {26,  ' ',              ' ', ' ',       ' ', ' ',       ' ', ' ',       27},
                                  {' ', tuile_T_2,        ' ', tuile_T_4, ' ', tuile_T_3, ' ', tuile_T_3, ' '},
                                  {26,  ' ',              ' ', ' ',       ' ', ' ',       ' ', ' ',       27},
                                  {' ', tuile_T_1,        ' ', tuile_T_4, ' ', tuile_T_4, ' ', tuile_L_4, ' '},
                                  {' ', ' ',              24,  ' ',       24,  ' ',       24,  ' ',       ' '}
    };*/


    char *plateau_de_jeu[81] = {};

    char chaine_temp[20];

    int ligne = 0;
    int ligne_precedente = 0;
    int colonne = 0;
    int color_swap = 1;

    gotoligcol(0, 0);

    for (int i = 0; i < 2; ++i) {

        if (color_swap == 1) {

            Color(15, 0);
            color_swap = 0;

        } else if (color_swap == 0) {

            Color(8, 0);
            color_swap = 1;
        }

        gotoligcol(ligne, colonne);
        strcpy(chaine_temp, plateau_de_jeu[i]);

        for (int j = 0; j < 9; ++j) {

            printf("%c", chaine_temp[j]);

            if (j==2 || j==5 || j==8) {

                ligne = ligne + 1;
                gotoligcol(ligne, colonne);
            }
        }

        ligne = ligne_precedente;
        colonne = colonne + 3;

        if ( i==8 || i==17 || i==26 || i==35 || i==44 || i==53 || i==62 || i==71 || i==80) {

            colonne = 0;
            ligne_precedente = ligne_precedente + 3;
        }

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
