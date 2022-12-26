//
// Created by guych on 25/12/2022.
//

#include "../../header.h"

void options_joueur(t_joueur joueur_actuel, int num_joueur, int *coulisser) {

    printf("C'est au tour de ");

    Color(joueur_actuel.couleur, 0);

    printf("%s (Joueur %d) ", joueur_actuel.pseudo, num_joueur+1);

    Color(15, 0);
    printf("de jouer ! \n");

    printf("\n");

    printf("Merci de selectionner une colonne ou ligne a faire coulisser: \n");

    do {

        Color(4, 0);

        printf(">> ");

        Color(15, 0);
        scanf("%d", coulisser);

    } while ((*coulisser != 1) && (*coulisser != 2) && (*coulisser != 3) && (*coulisser != 4) && (*coulisser != 5) && (*coulisser != 6) && (*coulisser != 7) && (*coulisser != 8) && (*coulisser != 9) && (*coulisser != 10) && (*coulisser != 11) && (*coulisser != 12));

    

}