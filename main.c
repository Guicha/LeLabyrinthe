#include "header.h"

int main() {


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


    char sac_de_tresors[24] = {'C', 'B', 'E', 'e', 'f', 'b', 'T', 'K', 128, 'c', 'S', 'L', 2, 'I', 'H', 225, 'l', 's', 'F', 'M', 'N', 'W', 'X', 'D'};


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

    // C = Cavalier
    // B = Bougie
    // E = Epée
    // e = Emeraude
    // b = bague
    // f = coffre
    // S = Sac de trésor
    // T = Tete de Mort
    // L = Livre
    // K = Clé
    // c = Carte
    // 128 = couronne


    // 231 = pion bleu
    // V = pion vert
    // R = pion rouge
    // J = pion jaune

    char *chaine_temp_init_plateau = NULL;

    // === GENERATION DES TRESORS ET POSITIONS DE DEPART DES TUILES FIXES ===
    for (int i = 0; i < 81; ++i)
    {

        chaine_temp_init_plateau = malloc(11 * sizeof (char));


        if (i  == 10)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 231; /// pions  bleu

            plateau_de_jeu[i] = chaine_temp_init_plateau;

        }


        if (i  == 12)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'C'; /// Cavalier

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 14)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'B'; /// Bougie

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 16)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'V'; /// Pion vert

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 28)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'E'; /// Epée

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 30)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'e'; /// Emeraude

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 32)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'f'; /// Coffre

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 34)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'b'; /// Bague

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 46)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'T'; /// Tete de mort/crane

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 48)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'K'; /// Clé

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 50)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 128; /// Couronne

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 52)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'c'; /// Carte au trésor

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 64)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'J'; /// Pion Jaune

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 66)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'S'; /// Sac de trésor

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 68)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'L'; /// Livre

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }


        if(i == 70)
        {
            strcpy(chaine_temp_init_plateau, plateau_de_jeu[i]);

            chaine_temp_init_plateau[4] = 'R'; /// Pion Rouge

            plateau_de_jeu[i] = chaine_temp_init_plateau;
        }

    }

    free(chaine_temp_init_plateau);


    // === VARIABLES MENU ===
    int random_seed = time(NULL);
    int choix = 0;
    int alive = 1;
    int init_partie = 1; // Demarrage de l'initialisation de la partie
    int notice = 1; // Affichage de la notice de jeu

    // === VARIABLES SECRET SETTINGS ===
    int choix_secret_settings;


    // === VARIABLES (NOUVELLE) PARTIE ===
    t_joueur joueur1;
    t_joueur joueur2;
    t_joueur joueur3;
    t_joueur joueur4;
    t_joueur tableau_joueurs[4] = {joueur1, joueur2, joueur3, joueur4};
    t_joueur joueur_en_cours;
    int index_joueur_en_cours;
    int nombre_joueurs = 0;
    int nombre_tresors_joueurs = 0;
    int remise_tresors[24] = {99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99};
    int selecteur_tresor_aleatoire = 0;
    int ligne_a_coulisser = 99;
    int precedente_ligne_a_coulisser = 99;
    int affichage_menu = 1;
    int choix_option_joueur;
    int switch_coulissage = 0;

    int ligne_rouge = LIGNE_DEFAUT+22;
    int colonne_rouge = COLONNE_DEFAUT+22;

    int ligne_bleue = LIGNE_DEFAUT+4;
    int colonne_bleue = COLONNE_DEFAUT+4;

    int ligne_verte = LIGNE_DEFAUT+4;
    int colonne_verte = COLONNE_DEFAUT+22;

    int ligne_jaune =   LIGNE_DEFAUT+22;
    int colonne_jaune = COLONNE_DEFAUT+4;


    while (alive) {

        // === INITIALISATION DE L'ALEATOIRE ===
        srand(random_seed);

        if (choix == 0) {

            system("cls");

            init_partie = 1;
            notice = 1;

            for (int i=0; i<24; i++) {

                remise_tresors[i] = 99;
            }

            for (int i=0; i<4; i++) {

                tableau_joueurs[i].score = 0;
            }

            menu_principal(&choix);

        } else if (choix == 1) {

            if (init_partie == 1) {

                // === CREATION DE LA PARTIE ET INITIALISATION DU PLATEAU ===
                // === CREATION DE LA PARTIE ===
                creer_partie(&choix, &nombre_joueurs, tableau_joueurs);

                // === INITIALISATION DU PLATEAU (GENERATION DES TRESORS ET DES TUILES ALEATOIRES) ===

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
                int j;
                int k;
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

                // = TUILES T =
                int fantome = 99;
                int magicienne = 99;
                int nain = 99;
                int esprit = 99;
                int chauvesouris = 99;
                int dragon = 99;

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

                                } while (selecteur_interne == araignee || selecteur_interne == insecte || selecteur_interne == hibou ||selecteur_interne == souris || selecteur_interne == lezard || selecteur_interne == scarabee);


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


                               
                                    chaine_temp[4] = 225; // Souris

                                    souris = 3;

                                } else if (selecteur_interne == 4) {


                                    

                                    chaine_temp[4] = 'l'; // Lézard

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

                        selecteur_interne = 99;


                    } else if (selecteur_aleatoire >= 4 && selecteur_aleatoire <= 7) { // On tombe sur les tuiles T (avec tresor)


                        if (compteur_tuiles_T_tresor < 6) {

                            strcpy(chaine_temp, sac_de_tuiles[selecteur_aleatoire]);

                            do {

                                selecteur_interne = rand() % (5 - 0 + 1) + 0;

                            } while (selecteur_interne == fantome || selecteur_interne == magicienne || selecteur_interne == nain ||selecteur_interne == esprit || selecteur_interne == chauvesouris || selecteur_interne == dragon);


                            if (selecteur_interne == 0) {

                                chaine_temp[4] = 'F'; // Fantome
                                fantome = 0;

                            } else if (selecteur_interne == 1) {

                                chaine_temp[4] = 'M'; // Magicienne
                                magicienne = 1;

                            } else if (selecteur_interne == 2) {

                                chaine_temp[4] = 'N'; // Nain
                                nain = 2;

                            } else if (selecteur_interne == 3) {

                                chaine_temp[4] = 'W'; // Esprit
                                esprit = 3;

                            } else if (selecteur_interne == 4) {

                                chaine_temp[4] = 'X'; // Chauvesouris
                                chauvesouris = 4;

                            } else if (selecteur_interne == 5) {

                                chaine_temp[4] = 'D'; // Dragon
                                dragon = 5;

                            }


                            plateau_de_jeu[index_tableau] = chaine_temp;


                        }

                        compteur_tuiles_T_tresor = compteur_tuiles_T_tresor + 1;

                        selecteur_interne = 99;

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

                // === DISTRIBUTION DES TRESORS ===
                nombre_tresors_joueurs = 24 / nombre_joueurs;


                for (i=0; i<nombre_joueurs; i++) {

                    for (j=0; j<nombre_tresors_joueurs; j++) {

                        do {

                            selecteur_tresor_aleatoire = rand() % (23 - 0 + 1) + 0;

                        } while (selecteur_tresor_aleatoire == remise_tresors[selecteur_tresor_aleatoire]);

                        remise_tresors[selecteur_tresor_aleatoire] = selecteur_tresor_aleatoire;

                        tableau_joueurs[i].tresors[j] = sac_de_tresors[selecteur_tresor_aleatoire];

                    }

                    for (j=nombre_tresors_joueurs; j<12; j++) {

                        tableau_joueurs[i].tresors[j] = NULL;
                    }

                }



                // === DESIGNATION ALEATOIRE DU JOUEUR COMMENCANT LA PARTIE ===
                selecteur_aleatoire = rand() % ((nombre_joueurs-1) - 0 + 1) + 0;

                joueur_en_cours = tableau_joueurs[selecteur_aleatoire];
                index_joueur_en_cours = selecteur_aleatoire;

                // === SPAWN DES JOUEURS SUR LES CASES ATTITREES ===
                for (i=0; i<nombre_joueurs; i++) {

                    if (tableau_joueurs[i].pion == 36) {

                        tableau_joueurs[i].ligne = ligne_rouge;
                        tableau_joueurs[i].colonne = colonne_rouge;

                    } else if (tableau_joueurs[i].pion == 156) {

                        tableau_joueurs[i].ligne = ligne_bleue;
                        tableau_joueurs[i].colonne = colonne_bleue;

                    } else if (tableau_joueurs[i].pion == 157) {

                        tableau_joueurs[i].ligne = ligne_verte;
                        tableau_joueurs[i].colonne = colonne_verte;

                    } else if (tableau_joueurs[i].pion == 190) {

                        tableau_joueurs[i].ligne = ligne_jaune;
                        tableau_joueurs[i].colonne = colonne_jaune;

                    }
                }

                // A activer pour le debug 
                //afficher_tab_struct_joueurs(tableau_joueurs, nombre_joueurs);

                init_partie = 0;

            }

            if (choix != 0) {

                system("cls");

                if (notice == 1) {

                    notice_joueurs();

                    notice = 0;

                    system("cls");
                }

                // === NOUVEAU TOUR ===
                //Joueur en cours ===>  tableau_joueurs[index_joueur_en_cours];

                while (affichage_menu) {

                    // === AFFICHAGE DU TITRE ===
                    gotoligcol(0, 0);

                    printf("\n");

                    Color(3, 0);

                    printf("PARTIE DE ");

                    Color(12, 0);

                    printf("=== LABYRINTHE ===");

                    Color(3, 0);

                    printf(" => %d JOUEURS EN JEU !", nombre_joueurs);

                    Color(15, 0);

                    // === AFFICHAGE DU PLATEAU ===
                    afficher_plateau(plateau_de_jeu, tableau_joueurs, nombre_joueurs);


                    // === AFFICHAGE DES OPTIONS ===
                    options_joueur(tableau_joueurs, index_joueur_en_cours, &choix_option_joueur, switch_coulissage);

                    if (choix_option_joueur == 1) {

                        printf("Merci de selectionner une colonne ou ligne a faire coulisser: \n");

                        printf("\n");

                        do {

                            Color(4, 0);

                            printf(">> ");

                            Color(15, 0);
                            scanf("%d", &ligne_a_coulisser);

                        } while ((ligne_a_coulisser != 1) && (ligne_a_coulisser != 2) && (ligne_a_coulisser != 3) && (ligne_a_coulisser != 4) && (ligne_a_coulisser != 5) && (ligne_a_coulisser != 6) && (ligne_a_coulisser != 7) && (ligne_a_coulisser != 8) && (ligne_a_coulisser != 9) && (ligne_a_coulisser != 10) && (ligne_a_coulisser != 11) && (ligne_a_coulisser != 12)  || (ligne_a_coulisser == precedente_ligne_a_coulisser));

                        // Implémenter un sous-programme pour faire coulisser les lignes/colonnes
                        coulissage_tuiles(plateau_de_jeu, tableau_joueurs, ligne_a_coulisser, &precedente_ligne_a_coulisser);

                        switch_coulissage = 1;
                        system("cls");

                    } else if (choix_option_joueur == 2) { // Deplacement du joueur

                        deplacement_joueur(plateau_de_jeu, tableau_joueurs, index_joueur_en_cours, nombre_joueurs);

                        affichage_menu = 0;

                    } else if (choix_option_joueur == 3) { // Afficher tresor suivant

                        // Suggestion: afficher le tresor sur un autre écran apres avoir clear la console et il faut appuyer pour continuer
                        // Ou bien faire apparaitre le tresor quelques secondes (mettre la notice qui propose aux autres de pas regarder)
                        system("cls");

                        printf("\n");

                        Color(3, 0);

                        printf("AFFICHAGE DU PROCHAIN TRESOR DE ");

                        Color(tableau_joueurs[index_joueur_en_cours].couleur, 0);

                        printf("%s (Joueur %d)", tableau_joueurs[index_joueur_en_cours].pseudo, index_joueur_en_cours+1);

                        Color(3, 0);

                        printf(" ! \n");

                        printf("\n");

                        Color(12, 0);

                        printf("Pour le bon deroulement de la partie, merci de faire preuve de fair-play et de s'abstenir de regarder l'ecran lorsqu'un joueur consulte ses cartes tresors, censees rester secretes a la vue des autres joueurs.\n ");

                        printf("\n");

                        Color(15, 0);

                        printf("Prochain tresor a aller chercher: %c \n", tableau_joueurs[index_joueur_en_cours].tresors[tableau_joueurs[index_joueur_en_cours].score]);

                        printf("\n");

                        system("pause");
                        system("cls");

                    } else if (choix_option_joueur == 4) { // Options ingame / menu ingame

                        // 2 choix: 1) revenir au menu dans la boucle en l'adaptant pour la partie
                        // ou bien 2) appeler le sous programme "menu_ingame.c" en le modifiant bien sur

                        menu_ingame(&choix);

                        if (choix == 0) {

                            affichage_menu = 0;
                        }
                    }

                }

                affichage_menu = 1;
                switch_coulissage = 0;




                printf("\n\n");
                system("pause");

                if (index_joueur_en_cours == (nombre_joueurs-1)) {

                    index_joueur_en_cours = 0;

                } else {

                    index_joueur_en_cours = index_joueur_en_cours + 1;
                }
            }

            for (int i=0; i<nombre_joueurs; i++) {

                if (tableau_joueurs[i].score == nombre_tresors_joueurs) {

                    victoire(tableau_joueurs[i]);

                    choix = 0;
                }
            }


        } else if (choix == 2) {

            consulter_sauvegardes(&choix);

        } else if (choix == 3) {

            credits(&choix);

        } else if (choix == 4) {

            printf(" \n");
            Color(12, 0);
            printf("Merci d'avoir joue a Labyrinthe ! \n");
            alive = 0;

        } else if (choix == 14082004) {

            system("cls");

            Color(10, 0);

            printf("                                               ...:....                                             \n"
                   "                                    .:      .^~~^:::...::.                          :~~^            \n"
                   "           ^~^:                    .JY~.   ^?Y5Y?~:::...:^^.                        J??Y7  .:.      \n"
                   "    ~!~:. :YJJY:                    :^^~!^!?JYYYPG5!^^^^!JY?.  :~!.                 7YY5J:7!!77     \n"
                   "   .J7!?Y..5YY5:                        ^77J55BBYBG5?5BBBPJJ!:^^~~.                .J??J?!JJY57     \n"
                   "    ^555Y7:Y7!77               .~.    .~!~~~~!7J77~^^^?5GG!J!^.   ^                7?77?J??YGJ~~^:  \n"
                   ".~~^^JGJ777?!~~7:              ~G5JJY5BY??JYYY5GBPJ7~~~!!!~^::7YJPG?       .... .~7?777?7?JY5?!!Y7  \n"
                   ".JJ7?YY5?!!~~~~~!^.          .:7BBPPG#BJY5PP5YJYPBBBGPPPYYJ7!~7##BGP^     ~J7!!77!7??7!777??JYY5^   \n"
                   "  ~Y5J?J!~!!7!!!!~~~^..:^^:::.:7B#GG#&5J5PYPP5YJ?7777~^^^~JPY!JBBBGB?..   .!JJYYJ?77?J?77777JY55!7!^\n"
                   "...:P5?~^~7?77?!!~~!7???!!!7?..!#BB###YJJJJB@#BG5Y7J!???YY7??!G##BBB?...... :7YJ??77?JJ?77?777JJYY??\n"
                   "!!7?JJ!!!7?7??!~~~~7??JYJ7!~:..!B#&###PJJYJ?&@&&&&##PB#&#Y!!~!###BGG?:.:::::..:??7????7!777?7?YY7^^^\n"
                   "JJJ5Y?~!77!77!!!!!!7?YJ!^:::.::J##&&&&#PYYJ?7G#BBBBGGB#5!!7!75##&###5^:^~~^^^^:7GPJJJ?77!777J?~.    \n"
                   " ..:?J??7!7!~!?????YJ!^^~~~~~~!B&&#&&&&#GYYYJ7?JJYYY?7!7?7?Y5PB##B###7!77!!~~~755GG5JJJJ?JY5!.      \n"
                   "     .?J???7?JY5Y5BBJ^~~!!7?775&&&&&&&&#&BYYYYYYYJJJY5PYJ5P55B#&#G#&&PJ???7777YPYYY555555P57:.      \n"
                   "      ~?55YYY55PGBG557!77?JJ??#&&&&#&&&&&&#P5Y555555555PGY75#&&&#B#&&#5YYYJJ??J5YJJJJJJJJ?7~^       \n"
                   "      ~!7Y55Y5PPP5555JJYJJJJ?J&&&&&#&&&&&&&&#BGP55555PP5YP#&&#&&&#&&&&7^:::^~7?YJJJJJJ????7^        \n"
                   "       ^!7?JJJJJY555Y?~:    :G&&&##&&&&&&&&&&&&#BGGBBGB#&&&&&&&&&&#&&&         .:~!7??7!~:          \n"
                   "        .^!7??J55YJ~.       ^&&&&#&&&&&&&&&&&&&&&##&GG#&&&&&&&&&&&&&&#                              \n"
                   "            ..::..          ~&&&&&#&#&&#&&&&&&#5?7?GY^?#&&&&&&&&&&&&&J                              \n"
                   "                             Y#####&&&&&&&&&&&5~^^~~~^!P#&&&&&&&&&&#G.                              \n"
                   "                             !7?JJY5PP5PPPPP5Y!^::::^^~75PPPPPPYYJ??^                               \n"
                   "                            .7777!!!77!~~~^^^:::...::^^~~~!!!!7!7!!~~.                              \n"
                   "                             ~77!!!7~~^^::.:::::...::^^^^~~~!!77!!~~^                               \n"
                   "                             .7777!!!~~~::.:::....:::::::^~~!!!!777!.                               \n"
                   "                             .5J????77!!~^^^^^^::::::::^^~!!~!7777?~                                \n"
                   "                             7YGG5JJJ???777!~~^^^^::::^~~~~!7??JYP5!.                               \n"
                   "                            77!7JPGGP55YJJJJJ?77!!!!!!!!77JYY5PGG5?77:                              \n"
                   "                           !?????JYYPGBBGGPPPP5555YYY5PPPGGGGPYYJ?JJ?7^                             \n"
                   "                          7Y???JJYYJJJJY55PGGGG######BGGP55YYYYJJ??77?77                            \n"
                   "                         :5JJJJYJJJYYYJJYYYYYYY55555555Y55555YJJ???YG###P.                          \n"
                   "                        .G#GGP55YYYYYYYY55555555555555P55PPP5YY55B#####BB5                          \n"
                   "                        P#B######BBBGY?JY555PPP5555P555YJ?!^::!5######BB#P                          \n"
                   "                       7BGB#####&&#J^    ..::::^^^^::..        ^&##B####&~                          \n"
                   "                       PGGB###&&5^                             J&######&5                           \n"
                   "                     ^?GB#B####!                               :#######P                            \n"
                   "                     Y@&####&G.                                .B#####B:                            \n"
                   "                    ^#@@@&&&@!                                 G&&&&&&&#                            \n"
                   "                  :P@@&&&&&&@?                                :&&&&&@@@&G                           \n"
                   "                !B&&&&&&&&&#5.                               .&@&&&&@@&&&BJ^                        \n"
                   "              7&&&&&&&&&&#!                                  !@@@&&&&&&&&&&&#P7.                    \n"
                   "              ?##&&&&#BG?                                     :7YPG#&&@@&&&&&&&&G~                  \n"
                   "                ..::..                                               .^?PB#&&&&&&B                  \n"
                   "                                                                           ..:::. ");

            Color(15, 0);
            printf("\n");
            printf("\n");
            system("pause");

            choix = 0;

        } else if (choix == 32765) {

            system("cls");

            printf("\n");

            Color(10, 0);

            printf("SECRET SETTINGS MENU \n");
            printf("\n");

            Color(12, 0);
            printf("/!\\ DANGER ZONE: Modifier ces parametres pourrait empecher le jeu de fonctionner correctement /!\\ \n");
            printf("\n");

            Color(10, 0);

            printf("1) Modifier le srand (seed d'aleatoire) \n");
            printf("0) Retour au menu principal \n");

            do {

                Color(4, 0);

                printf(">> ");

                Color(15, 0);
                scanf("%d", &choix_secret_settings);

            } while ((choix_secret_settings != 0) && (choix_secret_settings != 1));

            Color(10, 0);

            if (choix_secret_settings == 0) {

                choix = 0;

            } else if (choix_secret_settings == 1) {

                printf("\n");
                printf("Merci d'entrer une nouvelle seed pour l'agorithme d'aleatoire (compris entre 0 et 4,294,967,295): \n");

                do {

                    Color(4, 0);

                    printf(">> ");

                    Color(15, 0);
                    scanf("%u", &random_seed);

                } while ( (random_seed > 4294967294) || (random_seed <= 0) );

                printf("\n");

                printf("La valeur de la seed aleatoire a bien ete changee.");

                printf("\n");

                Color(15, 0);

                system("pause");
                system("cls");

                choix = 0;

            }

        }
    }

    printf("\n");


    Color(15, 0);
    system("pause");

    return 0;
}
