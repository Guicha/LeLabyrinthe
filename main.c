#include "header.h"

int main() {

    // === INITIALISATION DE L'ALEATOIRE ===
    srand(time(NULL));

    // === VARIABLES MENU ===
    int choix = 0;
    int alive = 1;

    // === VARIABLES DU PLATEAU DE JEU ===
    char chaine_temp[20];

    int ligne = 0;
    int ligne_precedente = 0;
    int colonne = 0;
    int color_swap = 1;


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


    // === VARIABLES NOUVELLE PARTIE ===
    char joueur1_pseudo[TAILLE_PSEUDO_JOUEUR];
    char joueur2_pseudo[TAILLE_PSEUDO_JOUEUR];
    char joueur3_pseudo[TAILLE_PSEUDO_JOUEUR];
    char joueur4_pseudo[TAILLE_PSEUDO_JOUEUR];
    char joueur1_pion[TAILLE_PION_JOUEUR];
    char joueur2_pion[TAILLE_PION_JOUEUR];
    char joueur3_pion[TAILLE_PION_JOUEUR];
    char joueur4_pion[TAILLE_PION_JOUEUR];
    int nombre_joueurs = 0;


    while (alive) {

        if (choix == 0) {

            menu_principal(&choix);

        } else if (choix == 1) {

            creer_partie(&choix, &nombre_joueurs, joueur1_pseudo, joueur2_pseudo, joueur3_pseudo, joueur4_pseudo, joueur1_pion, joueur2_pion, joueur3_pion, joueur4_pion);

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
