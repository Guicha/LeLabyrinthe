//
// Created by guych on 20/12/2022.
//

#include "../../header.h"

void init_plateau(char *plateau[81], char *tab_tuiles[10]) {


    // === INITIALISATION DU TABLEAU AVEC DE L'ALEATOIRE ===
    /*
     * NOMBRE DE TUILES NECESSAIRES POUR L'ALEATOIRE DU DEBUT
     *
     * 6x tuiles en T (avec trésor)
     * 6x tuiles en L (avec trésor)
     * 10x tuiles en L
     * 12x tuiles en I
     *
     *{tuile_L_1, tuile_L_2, tuile_L_3, tuile_L_4, tuile_T_1, tuile_T_2, tuile_T_3, tuile_T_4, tuile_I_1, tuile_I_2};
     *
     * */

    int i;
    int selecteur_aleatoire;
    int selecteur_incrementation = 0;
    int index_tableau = 11;
    char tuile_selectionee[11];

    int compteur_tuiles_T_tresor = 0;
    int compteur_tuiles_L_tresor = 0;
    int compteur_tuiles_L = 0;
    int compteur_tuiles_I = 0;

    for (i=0; i<34; i++) {

        do {

            selecteur_aleatoire = rand() % (9 - 0 + 1) + 0;

        } while ( ((selecteur_aleatoire >= 0 && selecteur_aleatoire <= 3) && compteur_tuiles_L == 16) || ((selecteur_aleatoire >= 4 && selecteur_aleatoire <= 7) && compteur_tuiles_T_tresor == 6) || ((selecteur_aleatoire >= 8 && selecteur_aleatoire <= 9) && compteur_tuiles_I == 12));



        if (selecteur_aleatoire >= 0 && selecteur_aleatoire <= 3) { // On tombe sur les tuiles L (sans tresor)


            plateau[index_tableau] = tab_tuiles[selecteur_aleatoire];

            compteur_tuiles_L = compteur_tuiles_L + 1;

        } else if (selecteur_aleatoire >= 4 && selecteur_aleatoire <= 7) { // On tombe sur les tuiles T (avec tresor)

            plateau[index_tableau] = tab_tuiles[selecteur_aleatoire];

            compteur_tuiles_T_tresor = compteur_tuiles_T_tresor + 1;

        } else if (selecteur_aleatoire >= 8 && selecteur_aleatoire <= 9) { // On tombe sur les tuiles I

            plateau[index_tableau] = tab_tuiles[selecteur_aleatoire];

            compteur_tuiles_I = compteur_tuiles_I + 1;

        }



        if (index_tableau == 15) {

            index_tableau = 18;

            selecteur_incrementation = 1;

        } else if (index_tableau == 25) {

            index_tableau = 27;

            selecteur_incrementation = 0;

        } else if (index_tableau == 33) {

            index_tableau = 36;

            selecteur_incrementation = 1;

        } else if (index_tableau == 43) {

            index_tableau = 45;

            selecteur_incrementation = 0;

        } else if (index_tableau == 51) {

            index_tableau = 54;

            selecteur_incrementation = 1;

        } else if (index_tableau == 61) {

            index_tableau = 63;

            selecteur_incrementation = 0;
        }



        if (selecteur_incrementation == 0) {

            index_tableau = index_tableau + 2;

        } else if (selecteur_incrementation == 1) {

            index_tableau = index_tableau + 1;
        }
    }



}