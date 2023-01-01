//
// Created by guych on 30/12/2022.
//

#include "../../header.h"

void deplacement_joueur(char *plateau1[81], t_joueur tab_joueurs1[4], int index_joueur, int nb_joueurs1) {

    int carac;
    int deplacement = 1;

    char *chaine_temp;

    /*
     * === GLOSSAIRE DES DIRECTIONS ===
     *
     * haut = 1
     * bas = 2
     * gauche = 3
     * droite = 4
     *
     * */


    while (deplacement) {

        do {

            system("cls");

            afficher_plateau(plateau1, tab_joueurs1, nb_joueurs1);

            printf("\n");

            printf("Utiliser ZQSD pour se deplacer | X pour mettre un terme au deplacement (ou rester directement immobile) \n");

            printf("\n");

            Color(4, 0);

            printf(">> ");

            Color(15, 0);

            carac = getch();


        } while (((char) carac != 'z') && ((char) carac != 'q') && ((char) carac != 's') && ((char) carac != 'd') && ((char) carac != 'x'));


        if (carac == 'z') {

            if (plateau1[tab_joueurs1[index_joueur].position-9][7] != '#' && plateau1[tab_joueurs1[index_joueur].position][1] != '#' && plateau1[tab_joueurs1[index_joueur].position-9][0] == '#') {

                tab_joueurs1[index_joueur].ligne = tab_joueurs1[index_joueur].ligne - 3;
                tab_joueurs1[index_joueur].position = tab_joueurs1[index_joueur].position - 9;

            }

        } else if ((char) carac == 'q') {

            if (plateau1[tab_joueurs1[index_joueur].position-1][5] != '#' && plateau1[tab_joueurs1[index_joueur].position][3] != '#' && plateau1[tab_joueurs1[index_joueur].position-1][0] == '#') {

                tab_joueurs1[index_joueur].colonne = tab_joueurs1[index_joueur].colonne - 3;
                tab_joueurs1[index_joueur].position = tab_joueurs1[index_joueur].position - 1;

            }

        } else if ((char) carac == 's') {

            if (plateau1[tab_joueurs1[index_joueur].position+9][1] != '#' && plateau1[tab_joueurs1[index_joueur].position][7] != '#' && plateau1[tab_joueurs1[index_joueur].position+9][0] == '#') {

                tab_joueurs1[index_joueur].ligne = tab_joueurs1[index_joueur].ligne + 3;
                tab_joueurs1[index_joueur].position = tab_joueurs1[index_joueur].position + 9;

            }

        } else if ((char) carac == 'd') {

            if (plateau1[tab_joueurs1[index_joueur].position+1][3] != '#' && plateau1[tab_joueurs1[index_joueur].position][5] != '#' && plateau1[tab_joueurs1[index_joueur].position+1][0] == '#') {

                tab_joueurs1[index_joueur].colonne = tab_joueurs1[index_joueur].colonne + 3;
                tab_joueurs1[index_joueur].position = tab_joueurs1[index_joueur].position + 1;

            }

        } else if ((char) carac == 'x') {

            if (plateau1[tab_joueurs1[index_joueur].position][4] == tab_joueurs1[index_joueur].tresors[tab_joueurs1[index_joueur].score]) {

                tab_joueurs1[index_joueur].score = tab_joueurs1[index_joueur].score + 1;

                chaine_temp = malloc(11 * sizeof (char));

                strcpy(chaine_temp, plateau1[tab_joueurs1[index_joueur].position]);

                chaine_temp[4] = ' ';

                plateau1[tab_joueurs1[index_joueur].position] = chaine_temp;

                free(chaine_temp);
            }

            deplacement = 0;
        }

    }

}