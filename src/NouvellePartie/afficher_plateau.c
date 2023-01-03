//
// Created by guych on 20/12/2022.
//

#include "../../header.h"

void afficher_plateau(char *plateau[81], t_joueur tab_joueurs[4], int nb_joueurs) {

    // === VARIABLES DU PLATEAU DE JEU ===
    char chaine_temp[20];


    int ligne = LIGNE_DEFAUT;
    int ligne_precedente = LIGNE_DEFAUT;
    int colonne = COLONNE_DEFAUT;

    int ligne_tuile_supp = LIGNE_DEFAUT + 3;
    int colonne_tuile_supp = COLONNE_DEFAUT + 41;

    int color_swap = 1;
    int color_ligne = 0;

    gotoligcol(LIGNE_DEFAUT-2, COLONNE_DEFAUT+4);

    Color(3, 0);

    printf("= PLATEAU DE JEU =");

    gotoligcol(LIGNE_DEFAUT-2, COLONNE_DEFAUT+ 30);

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

        if (strcmp(chaine_temp, "f_h") == 0) { // Fleche vers le haut

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

        } else if (strcmp(chaine_temp, "f_b") == 0) { // Fleche vers le bas

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

        } else if (strcmp(chaine_temp, "f_g") == 0) { // Fleche de gauche

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

        } else if (strcmp(chaine_temp, "f_d") == 0) { // Fleche de droite

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

            // Affichage des tuiles
            for (int j = 0; j < 9; ++j) {

                if (i == 71) {

                    // pass

                } else if (i == 10) {

                    if (j == 4) {

                        Color(1, 0);

                        printf("%c", chaine_temp[j]);

                        Color(5, 0);

                    } else {

                        printf("%c", chaine_temp[j]);

                    }


                    if (j==2 || j==5 || j==8) {

                        ligne = ligne + 1;
                        gotoligcol(ligne, colonne);
                    }


                } else if (i == 16) {

                    if (j == 4) {

                        Color(2, 0);

                        printf("%c", chaine_temp[j]);

                        Color(5, 0);

                    } else {

                        printf("%c", chaine_temp[j]);

                    }


                    if (j==2 || j==5 || j==8) {

                        ligne = ligne + 1;
                        gotoligcol(ligne, colonne);
                    }

                } else if (i == 64) {

                    if (j == 4) {

                        Color(14, 0);

                        printf("%c", chaine_temp[j]);

                        Color(5, 0);

                    } else {

                        printf("%c", chaine_temp[j]);

                    }


                    if (j==2 || j==5 || j==8) {

                        ligne = ligne + 1;
                        gotoligcol(ligne, colonne);
                    }

                } else if (i == 70) {

                    if (j == 4) {

                        Color(12, 0);

                        printf("%c", chaine_temp[j]);

                        Color(5, 0);

                    } else {

                        printf("%c", chaine_temp[j]);

                    }


                    if (j==2 || j==5 || j==8) {

                        ligne = ligne + 1;
                        gotoligcol(ligne, colonne);
                    }

                } else {

                    printf("%c", chaine_temp[j]);

                    if (j==2 || j==5 || j==8) {

                        ligne = ligne + 1;
                        gotoligcol(ligne, colonne);
                    }

                }

            }
        }


        // Saut de ligne en bout de ligne et changement de couleur
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

    // Affichage de la tuile supplémentaire
    gotoligcol(ligne_tuile_supp, colonne_tuile_supp);
    strcpy(chaine_temp, plateau[71]);

    for (int i=0; i<9; i++) {

        printf("%c", chaine_temp[i]);

        if (i==2 || i==5 || i==8) {

            ligne_tuile_supp = ligne_tuile_supp + 1;
            gotoligcol(ligne_tuile_supp, colonne_tuile_supp);
        }
    }

    // Affichage des numeros des colonnes et lignes
    Color(10, 0);

    gotoligcol(LIGNE_DEFAUT, COLONNE_DEFAUT+7);
    printf("1");

    gotoligcol(LIGNE_DEFAUT, COLONNE_DEFAUT+13);
    printf("2");

    gotoligcol(LIGNE_DEFAUT, COLONNE_DEFAUT+19);
    printf("3");

    gotoligcol(LIGNE_DEFAUT+7, COLONNE_DEFAUT+27);
    printf("4");

    gotoligcol(LIGNE_DEFAUT+13, COLONNE_DEFAUT+27);
    printf("5");

    gotoligcol(LIGNE_DEFAUT+19, COLONNE_DEFAUT+27);
    printf("6");

    gotoligcol(LIGNE_DEFAUT+26, COLONNE_DEFAUT+19);
    printf("7");

    gotoligcol(LIGNE_DEFAUT+26, COLONNE_DEFAUT+13);
    printf("8");

    gotoligcol(LIGNE_DEFAUT+26, COLONNE_DEFAUT+7);
    printf("9");

    gotoligcol(LIGNE_DEFAUT+19, COLONNE_DEFAUT-2);
    printf("10");

    gotoligcol(LIGNE_DEFAUT+13, COLONNE_DEFAUT-2);
    printf("11");

    gotoligcol(LIGNE_DEFAUT+7, COLONNE_DEFAUT-2);
    printf("12");



    for (int i=0; i<nb_joueurs; i++) {

        Color(tab_joueurs[i].couleur, 0);

        if (tab_joueurs[i].pion == 36) {

            gotoligcol(tab_joueurs[i].ligne, tab_joueurs[i].colonne);
            printf("%c", tab_joueurs[i].pion);


        } else if (tab_joueurs[i].pion == 156) {

            gotoligcol(tab_joueurs[i].ligne, tab_joueurs[i].colonne);
            printf("%c", tab_joueurs[i].pion);

        } else if (tab_joueurs[i].pion == 157) {

            gotoligcol(tab_joueurs[i].ligne, tab_joueurs[i].colonne);
            printf("%c", tab_joueurs[i].pion);

        } else if (tab_joueurs[i].pion == 190) {

            gotoligcol(tab_joueurs[i].ligne, tab_joueurs[i].colonne);
            printf("%c", tab_joueurs[i].pion);

        }
    }


    Color(15, 0);
    gotoligcol(ligne, 0);

    printf("\n");
    printf("\n");


    //system("pause");

}