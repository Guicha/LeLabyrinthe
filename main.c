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
        char tuile_L_1[11] = "# #"
                             "#  "
                             "###"; // ╚

        char tuile_L_2[11] = "###"
                             "#  "
                             "# #"; // ╔

        char tuile_L_3[11] = "###"
                             "  #"
                             "# #"; // ╗

        char tuile_L_4[11] = "# #"
                             "  #"
                             "###"; // ╝




    // === TUILES I ===
        char tuile_I_1[11] = "# #"
                             "# #"
                             "# #"; // ║

        char tuile_I_2[11] = "###"
                             "   "
                             "###"; // ═




    // === TUILES T ===
        char tuile_T_1[11] = "###"
                             "   "
                             "# #"; // ╦

        char tuile_T_2[11] = "# #"
                             "#  "
                             "# #"; // ╠

        char tuile_T_3[11] = "# #"
                             "  #"
                             "# #"; // ╣

        char tuile_T_4[11] = "# #"
                             "   "
                             "###"; // ╩


    // === TUILES T Trésor ===
    
    char tuile_T_bougie[11] = "###"
                              " B "
                              "# #";
    
    char tuile_T_Emeraude[11] = "# #"
                                "#E#"
                                "# #";
    
    
    
    // === TABLEAU/SAC DE TUILES ===
    char *sac_de_tuiles[10] = {tuile_L_1, tuile_L_2, tuile_L_3, tuile_L_4, tuile_T_1, tuile_T_2, tuile_T_3, tuile_T_4, tuile_I_1, tuile_I_2};

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
                creer_partie(&choix, &nombre_joueurs, tableau_joueurs);

                // === INITIALISATION DU PLATEAU ===

                init_plateau(plateau_de_jeu, sac_de_tuiles);

                init_partie = 0;


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
