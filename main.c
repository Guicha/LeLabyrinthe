#include "header.h"

int main() {

    // === VARIABLES MENU ===
    int choix = 0;
    int alive = 0;

    // === INITIALISATION DE L'ALEATOIRE ===
    srand(time(NULL));

    // === PLATEAU DE JEU ===
    char *plateau_de_jeu[81] = {tuile_esp, tuile_esp, fleche_bas, tuile_esp, fleche_bas, tuile_esp, fleche_bas, tuile_esp, tuile_esp,
                                tuile_esp, tuile_L_2, tuile_esp, tuile_T_1, tuile_esp, tuile_T_1, tuile_esp, tuile_L_3, tuile_esp,
                                fleche_droite, tuile_esp, tuile_esp, tuile_esp, tuile_esp, tuile_esp, tuile_esp, tuile_esp, fleche_gauche,
                                tuile_esp, tuile_T_2, tuile_esp, tuile_T_2, tuile_esp, tuile_T_1, tuile_esp, tuile_T_3, tuile_esp,
                                fleche_droite, tuile_esp, tuile_esp, tuile_esp, tuile_esp, tuile_esp, tuile_esp, tuile_esp, fleche_gauche,
                                tuile_esp, tuile_T_2, tuile_esp, tuile_T_4, tuile_esp, tuile_T_3, tuile_esp, tuile_T_3, tuile_esp,
                                fleche_droite, tuile_esp, tuile_esp, tuile_esp, tuile_esp, tuile_esp, tuile_esp, tuile_esp, fleche_gauche,
                                tuile_esp, tuile_L_1, tuile_esp, tuile_T_4, tuile_esp, tuile_T_4, tuile_esp, tuile_L_4, tuile_esp,
                                tuile_esp, tuile_esp, fleche_haut, tuile_esp, fleche_haut, tuile_esp, fleche_haut, tuile_esp, tuile_esp };

    // === VARIABLES DU PLATEAU DE JEU ===
    char chaine_temp[20];

    int ligne = 0;
    int ligne_precedente = 0;
    int colonne = 0;
    int color_swap = 1;


    // === GLOSSAIRE ===
    /*
     * f_h = fleche vers le haut
     * f_b = fleche vers le bas
     * f_d = fleche vers la droite
     * f_g = fleche vers la gauche
     *
     * */

    gotoligcol(0, 0);

    for (int i = 0; i < 81; ++i) {

        if (color_swap == 1 && strlen(plateau_de_jeu[i]) > 3) {

            Color(15, 0);
            color_swap = 0;

        } else if (color_swap == 0 && strlen(plateau_de_jeu[i]) > 3) {

            Color(8, 0);
            color_swap = 1;

        } else {

            Color(10, 0);
        }

        gotoligcol(ligne, colonne);
        strcpy(chaine_temp, plateau_de_jeu[i]);

        if (strcmp(chaine_temp, "f_h") == 0) {

            printf(" ");
            printf(" ");
            printf(" ");

            ligne=ligne+1;
            gotoligcol(ligne, colonne);

            printf(" ");
            printf("%c", 0x1E);
            printf(" ");

            ligne=ligne+1;
            gotoligcol(ligne, colonne);

            printf(" ");
            printf(" ");
            printf(" ");

        } else if (strcmp(chaine_temp, "f_b") == 0) {

            printf(" ");
            printf(" ");
            printf(" ");

            ligne=ligne+1;
            gotoligcol(ligne, colonne);

            printf(" ");
            printf("%c", 0x1F);
            printf(" ");

            ligne=ligne+1;
            gotoligcol(ligne, colonne);

            printf(" ");
            printf(" ");
            printf(" ");

        } else if (strcmp(chaine_temp, "f_g") == 0) {

            printf(" ");
            printf(" ");
            printf(" ");

            ligne=ligne+1;
            gotoligcol(ligne, colonne);

            printf(" ");
            printf("%c", 0x11);
            printf(" ");

            ligne=ligne+1;
            gotoligcol(ligne, colonne);

            printf(" ");
            printf(" ");
            printf(" ");

        } else if (strcmp(chaine_temp, "f_d") == 0) {

            printf(" ");
            printf(" ");
            printf(" ");

            ligne=ligne+1;
            gotoligcol(ligne, colonne);

            printf(" ");
            printf("%c", 0x10);
            printf(" ");

            ligne=ligne+1;
            gotoligcol(ligne, colonne);

            printf(" ");
            printf(" ");
            printf(" ");

        } else {

            for (int j = 0; j < 9; ++j) {

                printf("%c", chaine_temp[j]);

                if (j==2 || j==5 || j==8) {

                    ligne = ligne + 1;
                    gotoligcol(ligne, colonne);
                }
            }
        }



        if ( i==8 || i==17 || i==26 || i==35 || i==44 || i==53 || i==62 || i==71 || i==80) {

            colonne = 0;
            ligne_precedente = ligne_precedente + 3;

        } else {

            ligne = ligne_precedente;
            colonne = colonne + 3;
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
