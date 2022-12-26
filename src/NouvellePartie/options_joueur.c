//
// Created by guych on 25/12/2022.
//

#include "../../header.h"

void options_joueur(t_joueur joueur_actuel, int num_joueur, int *coulisser) {

    int choix_joueur;

    printf("C'est au tour de ");

    Color(joueur_actuel.couleur, 0);

    printf("%s (Joueur %d) ", joueur_actuel.pseudo, num_joueur+1);

    Color(15, 0);
    printf("de jouer ! \n");

    printf("\n");

    printf("1) Faire coulisser une ligne/colonne \n");
    printf("2) Afficher le prochain tresor a chercher \n");
    printf("3) Options \n");

    do {

        Color(4, 0);

        printf(">> ");

        Color(15, 0);
        scanf("%d", &choix_joueur);

    } while ( (choix_joueur != 1) && (choix_joueur != 2) && (choix_joueur != 3));

    printf("\n");

    if (choix_joueur == 1) {

        printf("Merci de selectionner une colonne ou ligne a faire coulisser: \n");

        do {

            Color(4, 0);

            printf(">> ");

            Color(15, 0);
            scanf("%d", coulisser);

        } while ((*coulisser != 1) && (*coulisser != 2) && (*coulisser != 3) && (*coulisser != 4) && (*coulisser != 5) && (*coulisser != 6) && (*coulisser != 7) && (*coulisser != 8) && (*coulisser != 9) && (*coulisser != 10) && (*coulisser != 11) && (*coulisser != 12));

    } else if (choix_joueur == 2) {

        // Suggestion: afficher le tresor sur un autre écran apres avoir clear la console et il faut appuyer pour continuer
        // Ou bien faire apparaitre le tresor quelques secondes (mettre la notice qui propose aux autres de pas regarder)


    } else if (choix_joueur == 3) {

        // 2 choix: 1) revenir au menu dans la boucle en l'adaptant pour la partie
        // ou bien 2) appeler le sous programme "menu_ingame.c" en le modifiant bien sur

    }




}