//
// Created by guych on 30/12/2022.
//

#include "../../header.h"

void coulissage_tuiles(char *plateau[81], t_joueur tab_joueurs[4], int coulisser, int *old_coulisser) {

    int i;
    int j;

    int deplacer_joueur;
    char *tuile_supp;
    char *ligne_temp[7];

    tuile_supp = malloc(11 * sizeof (char));

    if (coulisser == 1) {

        j = 11;

        strcpy(tuile_supp, plateau[65]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j + 9;
        }

        j = 11;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j + 9;
        }


        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=11; j<65; j=j+9) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position + 9;
                    tab_joueurs[i].ligne = tab_joueurs[i].ligne + 3;

                    deplacer_joueur = 0;
                }

            }

            if (tab_joueurs[i].position == 65 && deplacer_joueur == 1) {

                tab_joueurs[i].position = 11;
                tab_joueurs[i].ligne = tab_joueurs[i].ligne - 18;

                deplacer_joueur = 0;
            }
        }

        *old_coulisser = 9;

    } else if (coulisser == 2) {

        j = 13;

        strcpy(tuile_supp, plateau[67]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j + 9;
        }

        j = 13;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j + 9;
        }

        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=13; j<67; j=j+9) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position + 9;
                    tab_joueurs[i].ligne = tab_joueurs[i].ligne + 3;

                    deplacer_joueur = 0;
                }

            }

            if (tab_joueurs[i].position == 67 && deplacer_joueur == 1) {

                tab_joueurs[i].position = 13;
                tab_joueurs[i].ligne = tab_joueurs[i].ligne - 18;

                deplacer_joueur = 0;
            }
        }

        *old_coulisser = 8;

    } else if (coulisser == 3) {

        j = 15;

        strcpy(tuile_supp, plateau[69]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j + 9;
        }

        j = 15;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j + 9;
        }

        *old_coulisser = 7;

        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=15; j<69; j=j+9) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position + 9;
                    tab_joueurs[i].ligne = tab_joueurs[i].ligne + 3;

                    deplacer_joueur = 0;
                }

                if (tab_joueurs[i].position == 69 && deplacer_joueur == 1) {

                    tab_joueurs[i].position = 15;
                    tab_joueurs[i].ligne = tab_joueurs[i].ligne - 18;

                    deplacer_joueur = 0;
                }

            }
        }


    } else if (coulisser == 4) {

        j = 25;

        strcpy(tuile_supp, plateau[19]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j - 1;
        }

        j = 25;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j - 1;
        }

        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=25; j>19; j=j-1) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position - 1;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne - 3;

                    deplacer_joueur = 0;
                }

                if (tab_joueurs[i].position == 19 && deplacer_joueur == 1) {

                    tab_joueurs[i].position = 25;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne + 18;

                    deplacer_joueur = 0;
                }

            }
        }

        *old_coulisser = 12;

    } else if (coulisser == 5) {

        j = 43;

        strcpy(tuile_supp, plateau[37]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j - 1;
        }

        j = 43;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j - 1;
        }

        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=43; j>37; j=j-1) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position - 1;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne - 3;

                    deplacer_joueur = 0;
                }

                if (tab_joueurs[i].position == 37 && deplacer_joueur == 1) {

                    tab_joueurs[i].position = 43;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne + 18;

                    deplacer_joueur = 0;
                }

            }
        }

        *old_coulisser = 11;

    } else if (coulisser == 6) {

        j = 61;

        strcpy(tuile_supp, plateau[55]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j - 1;
        }

        j = 61;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j - 1;
        }

        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=61; j>55; j=j-1) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position - 1;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne - 3;

                    deplacer_joueur = 0;
                }

                if (tab_joueurs[i].position == 55 && deplacer_joueur == 1) {

                    tab_joueurs[i].position = 61;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne + 18;

                    deplacer_joueur = 0;
                }

            }
        }

        *old_coulisser = 10;

    } else if (coulisser == 7) {

        j = 69;

        strcpy(tuile_supp, plateau[15]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j - 9;
        }

        j = 69;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j - 9;
        }

        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=69; j>15; j=j-9) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position - 9;
                    tab_joueurs[i].ligne = tab_joueurs[i].ligne - 3;

                    deplacer_joueur = 0;
                }

                if (tab_joueurs[i].position == 15 && deplacer_joueur == 1) {

                    tab_joueurs[i].position = 69;
                    tab_joueurs[i].ligne = tab_joueurs[i].ligne + 18;

                    deplacer_joueur = 0;
                }

            }
        }

        *old_coulisser = 3;

    } else if (coulisser == 8) {

        j = 67;

        strcpy(tuile_supp, plateau[13]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j - 9;
        }

        j = 67;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j - 9;
        }

        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=67; j>13; j=j-9) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position - 9;
                    tab_joueurs[i].ligne = tab_joueurs[i].ligne - 3;

                    deplacer_joueur = 0;
                }

                if (tab_joueurs[i].position == 13 && deplacer_joueur == 1) {

                    tab_joueurs[i].position = 67;
                    tab_joueurs[i].ligne = tab_joueurs[i].ligne + 18;

                    deplacer_joueur = 0;
                }

            }
        }

        *old_coulisser = 2;

    } else if (coulisser == 9) {

        j = 65;

        strcpy(tuile_supp, plateau[11]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j - 9;
        }

        j = 65;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j - 9;
        }

        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=65; j>11; j=j-9) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position - 9;
                    tab_joueurs[i].ligne = tab_joueurs[i].ligne - 3;

                    deplacer_joueur = 0;
                }

                if (tab_joueurs[i].position == 11 && deplacer_joueur == 1) {

                    tab_joueurs[i].position = 65;
                    tab_joueurs[i].ligne = tab_joueurs[i].ligne + 18;

                    deplacer_joueur = 0;
                }

            }
        }

        *old_coulisser = 1;

    } else if (coulisser == 10) {

        j = 55;

        strcpy(tuile_supp, plateau[61]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j + 1;
        }

        j = 55;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j + 1;
        }

        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=55; j<61; j=j+1) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position + 1;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne + 3;

                    deplacer_joueur = 0;
                }

                if (tab_joueurs[i].position == 61 && deplacer_joueur == 1) {

                    tab_joueurs[i].position = 55;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne - 18;

                    deplacer_joueur = 0;
                }

            }
        }

        *old_coulisser = 6;

    } else if (coulisser == 11) {

        j = 37;

        strcpy(tuile_supp, plateau[43]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j + 1;
        }

        j = 37;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j + 1;
        }

        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=37; j<43; j=j+1) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position + 1;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne + 3;

                    deplacer_joueur = 0;
                }

                if (tab_joueurs[i].position == 43 && deplacer_joueur == 1) {

                    tab_joueurs[i].position = 37;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne - 18;

                    deplacer_joueur = 0;
                }

            }
        }

        *old_coulisser = 5;

    } else if (coulisser == 12) {

        j = 19;

        strcpy(tuile_supp, plateau[25]); // On prend la nouvelle tuile supp

        ligne_temp[0] = plateau[71]; // On insère l'ancienne tuile supp dans le debut de la ligne

        for (i=1; i<7; i++) {

            ligne_temp[i] = plateau[j];

            j = j + 1;
        }

        j = 19;

        for (i=0; i<7; i++) {

            plateau[j] = ligne_temp[i];

            j = j + 1;
        }

        for (i=0; i<4; i++) {

            deplacer_joueur = 1;

            for (j=19; j<25; j=j+1) {

                if (tab_joueurs[i].position == j && deplacer_joueur == 1) {

                    tab_joueurs[i].position = tab_joueurs[i].position + 1;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne + 3;

                    deplacer_joueur = 0;
                }

                if (tab_joueurs[i].position == 25 && deplacer_joueur == 1) {

                    tab_joueurs[i].position = 19;
                    tab_joueurs[i].colonne = tab_joueurs[i].colonne - 18;

                    deplacer_joueur = 0;
                }

            }
        }

        *old_coulisser = 4;

    }

    plateau[71] = tuile_supp;

    free(tuile_supp);
}