//
// Created by guych on 20/12/2022.
//

#include "../../header.h"

void afficher_plateau(char *plateau[81]) {

    // === VARIABLES DU PLATEAU DE JEU ===
    char chaine_temp[20];


    int ligne = LIGNE_DEFAUT;
    int ligne_precedente = LIGNE_DEFAUT;
    int colonne = COLONNE_DEFAUT;

    int ligne_tuile_supp = LIGNE_DEFAUT + 3;
    int colonne_tuile_supp = COLONNE_DEFAUT + 41;

    int color_swap = 1;
    int color_ligne = 0;

    gotoligcol(LIGNE_DEFAUT-1, COLONNE_DEFAUT+4);

    Color(3, 0);

    printf("= PLATEAU DE JEU =");

    gotoligcol(LIGNE_DEFAUT-1, COLONNE_DEFAUT+ 30);

    printf("= TUILE SUPPLEMENTAIRE =");

    Color(15, 0);


    gotoligcol(LIGNE_DEFAUT, COLONNE_DEFAUT);


    for (int i = 0; i < 81; ++i) {

        if (color_ligne == 0) {

            if (color_swap == 1 && strlen(plateau[i]) > 3) {

                Color(15, 0);
                color_swap = 0;

            } else if (color_swap == 0 && strlen(plateau[i]) > 3) {

                Color(8, 0);
                color_swap = 1;

            } else {

                Color(10, 0);
            }

        } else if (color_ligne == 1) {

            if (color_swap == 1 && strlen(plateau[i]) > 3) {

                Color(9, 0);
                color_swap = 0;

            } else if (color_swap == 0 && strlen(plateau[i]) > 3) {

                Color(5, 0);
                color_swap = 1;

            } else {

                Color(10, 0);
            }
        }

        gotoligcol(ligne, colonne);
        strcpy(chaine_temp, plateau[i]);

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

                if (i == 71) {

                    // pass

                } else {

                    printf("%c", chaine_temp[j]);

                    if (j==2 || j==5 || j==8) {

                        ligne = ligne + 1;
                        gotoligcol(ligne, colonne);
                    }

                }

            }
        }



        if ( i==8 || i==17 || i==26 || i==35 || i==44 || i==53 || i==62 || i==71 || i==80) {

            colonne = COLONNE_DEFAUT;

            ligne_precedente = ligne_precedente + 3;

            if (color_ligne == 0) {

                color_ligne = 1;

            } else if (color_ligne == 1) {

                color_ligne = 0;
            }

        } else {

            ligne = ligne_precedente;
            colonne = colonne + 3;
        }



    }

    gotoligcol(ligne_tuile_supp, colonne_tuile_supp);
    strcpy(chaine_temp, plateau[71]);

    for (int i=0; i<9; i++) {

        printf("%c", chaine_temp[i]);

        if (i==2 || i==5 || i==8) {

            ligne_tuile_supp = ligne_tuile_supp + 1;
            gotoligcol(ligne_tuile_supp, colonne_tuile_supp);
        }
    }

    gotoligcol(ligne, 0);


    printf("\n");
    printf("\n");


    system("pause");

}