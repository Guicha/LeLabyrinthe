#include "header.h"

int main() {

    // === INITIALISATION DE L'ALEATOIRE ===
    srand(time(NULL));



    


    // === ICONES DE TRESORS ET POSITIONS ===

        char fleche_haut[11] = "f_h";

        char fleche_bas[11] = "f_b";

        char fleche_gauche[11] = "f_g";

        char fleche_droite[11] = "f_d";


    // === TUILES ESPACE ===
        char tuile_esp[11] = "         ";


    // === TUILES L ===
        char tuile_L_1[11] = "# #" // # ##  ###
                             "#  "
                             "###"; // ╚

        char tuile_L_2[11] = "###" // ####  # #
                             "#  "
                             "# #"; // ╔

        char tuile_L_3[11] = "###" // ###  ## #
                             "  #"
                             "# #"; // ╗

        char tuile_L_4[11] = "# #" // # #  ####
                             "  #"
                             "###"; // ╝




    // === TUILES I ===
        char tuile_I_1[11] = "# #" // # ## ## #
                             "# #"
                             "# #"; // ║

        char tuile_I_2[11] = "###" // ###   ###
                             "   "
                             "###"; // ═




    // === TUILES T ===
        char tuile_T_1[11] = "###" // ###   # #
                             "   "
                             "# #"; // ╦

        char tuile_T_2[11] = "# #" // # ##  # #
                             "#  "
                             "# #"; // ╠

        char tuile_T_3[11] = "# #" // # #  ## #
                             "  #"
                             "# #"; // ╣

        char tuile_T_4[11] = "# #" // # #   ###
                             "   "
                             "###"; // ╩

                           
    
    
    
    // === TABLEAU/SAC DE TUILES ===
    char sac_de_tuiles[10][11] = {"# ##  ###", "####  # #", "###  ## #", "# #  ####", "###   # #", "# ##  # #", "# #  ## #", "# #   ###", "# ## ## #", "###   ###"};
                                    //{tuile_L_1,         tuile_L_2,       tuile_L_3,     tuile_L_4,          tuile_T_1,      tuile_T_2,      tuile_T_3,       tuile_T_4,       tuile_I_1,       tuile_I_2}


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




    // === VARIABLES MENU ===
    int choix = 0;
    int alive = 1;


    // === VARIABLES (NOUVELLE) PARTIE ===
    t_joueur joueur1;
    t_joueur joueur2;
    t_joueur joueur3;
    t_joueur joueur4;
    t_joueur tableau_joueurs[4] = {joueur1, joueur2, joueur3, joueur4};
    int nombre_joueurs = 0;
    int init_partie = 1;
    int notice = 1;


    while (alive) {

        if (choix == 0) {

            menu_principal(&choix);

        } else if (choix == 1) {

            if (init_partie == 1) {

                // === CREATION DE LA PARTIE ===
                //creer_partie(&choix, &nombre_joueurs, tableau_joueurs);

                // === INITIALISATION DU PLATEAU ===
                //init_plateau(plateau_de_jeu, sac_de_tuiles);

                // === INITIALISATION DU TABLEAU AVEC DE L'ALEATOIRE ===
                /*
                 * NOMBRE DE TUILES NECESSAIRES POUR L'ALEATOIRE DU DEBUT
                 *
                 * 6x tuiles en T (avec trésor)
                 * 6x tuiles en L (avec trésor)
                 * 10x tuiles en L
                 * 12x tuiles en I
                 *
                 *
                 *
                 * */

                int i;
                int selecteur_aleatoire;
                int selecteur_interne;
                int selecteur_incrementation = 0;
                int index_tableau = 11;

                int compteur_tuiles_T_tresor = 0;
                int compteur_tuiles_L_tresor = 0;
                int compteur_tuiles_L = 0;
                int compteur_tuiles_I = 0;

                char *chaine_temp;

                // === INDICATEURS DE TUILES ===
                // = TUILES L =
                int araignee = 99;
                int insecte = 99;
                int hibou = 99;
                int souris = 99;
                int lezard = 99;
                int scarabee = 99;

                for (i=0; i<34; i++) {

                    chaine_temp = malloc(11 * sizeof (char));

                    do {

                        selecteur_aleatoire = rand() % (9 - 0 + 1) + 0;

                    } while ( ((selecteur_aleatoire >= 0 && selecteur_aleatoire <= 3) && compteur_tuiles_L == 16) || ((selecteur_aleatoire >= 4 && selecteur_aleatoire <= 7) && compteur_tuiles_T_tresor == 6) || ((selecteur_aleatoire >= 8 && selecteur_aleatoire <= 9) && compteur_tuiles_I == 12));



                    if (selecteur_aleatoire >= 0 && selecteur_aleatoire <= 3) { // On tombe sur les tuiles L (sans et avec tresor)

                        selecteur_interne = rand() % (1 - 0 + 1) + 0;

                        if (selecteur_interne == 1) {

                            if (compteur_tuiles_L_tresor < 6) {

                                strcpy(chaine_temp, sac_de_tuiles[selecteur_aleatoire]);

                                do {

                                    selecteur_interne = rand() % (5 - 0 + 1) + 0;

                                } while (selecteur_interne == araignee || selecteur_interne == insecte || selecteur_interne == hibou ||selecteur_interne == souris || selecteur_interne == souris || selecteur_interne == lezard || selecteur_interne == scarabee);


                                if (selecteur_interne == 0) {

                                    chaine_temp[4] = 2; // Araignée
                                    araignee = 0;

                                } else if (selecteur_interne == 1) {

                                    chaine_temp[4] = 'I'; // Insecte
                                    insecte = 1;

                                } else if (selecteur_interne == 2) {

                                    chaine_temp[4] = 'H'; // Hibou
                                    hibou = 2;

                                } else if (selecteur_interne == 3) {

                                    chaine_temp[4] = 'S'; // Souris
                                    souris = 3;

                                } else if (selecteur_interne == 4) {

                                    chaine_temp[4] = 'L'; // Lézard
                                    lezard = 4;

                                } else if (selecteur_interne == 5) {

                                    chaine_temp[4] = 's'; // Scarabée
                                    scarabee = 5;

                                }


                                plateau_de_jeu[index_tableau] = chaine_temp;

                                compteur_tuiles_L_tresor = compteur_tuiles_L_tresor + 1;


                            } else {

                                plateau_de_jeu[index_tableau] = sac_de_tuiles[selecteur_aleatoire];
                            }

                        } else if (selecteur_interne == 0) {

                            plateau_de_jeu[index_tableau] = sac_de_tuiles[selecteur_aleatoire];
                        }

                        compteur_tuiles_L = compteur_tuiles_L + 1;




                    } else if (selecteur_aleatoire >= 4 && selecteur_aleatoire <= 7) { // On tombe sur les tuiles T (avec tresor)

                        plateau_de_jeu[index_tableau] = sac_de_tuiles[selecteur_aleatoire];

                        compteur_tuiles_T_tresor = compteur_tuiles_T_tresor + 1;

                    } else if (selecteur_aleatoire >= 8 && selecteur_aleatoire <= 9) { // On tombe sur les tuiles I

                        plateau_de_jeu[index_tableau] = sac_de_tuiles[selecteur_aleatoire];

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

                free(chaine_temp);

                //init_partie = 0;

            }

            system("cls");

            if (notice == 1) {

                notice_joueurs();

                notice = 0;

                system("cls");
            }



            // === AFFICHAGE DU PLATEAU ===
            afficher_plateau(plateau_de_jeu);



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
