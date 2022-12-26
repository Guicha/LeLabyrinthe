//
// Created by guych on 25/12/2022.
//

#include "../../header.h"

void options_joueur(t_joueur joueur_actuel, int num_joueur) {

    printf("C'est au tour de ");

    if (num_joueur == 0) { // Joueur 1

        Color(12, 0);

    } else if (num_joueur == 1) { // Joueur 2

        Color(1, 0);

    } else if (num_joueur == 2) { // Joueur 3

        Color(2, 0);

    } else if (num_joueur == 3) { // Joueur 4

        Color(14, 0);

    }

    printf("%s (Joueur %d) ", joueur_actuel.pseudo, num_joueur+1);

    Color(15, 0);
    printf("de jouer ! \n");
}