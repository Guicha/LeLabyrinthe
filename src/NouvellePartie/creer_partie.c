//
// Created by guych on 20/12/2022.
//

#include "../../header.h"

void creer_partie(int *selection, int *nb_joueurs, t_joueur tab_joueurs[4]) {

    int confirmer;
    int nb_pions = 4;
    int choix_pion;
    int liste_pion[5] = {36, 156, 157, 190};   //    36 = $  |  156 = £  |   157 = Ø     |   190 = ¥     |;


    system("cls");

    printf("\n");

    Color(3, 0);

    printf("CREER NOUVELLE PARTIE \n");

    Color(15, 0);

    printf("Merci de saisir le nombre de joueurs: \n");

    printf("\n");
    printf("De 2 a 4 joueurs possibles\n");

    printf("\n");

    do {

        Color(4, 0);

        printf(">> ");

        Color(15, 0);
        scanf("%d", nb_joueurs);

    } while ((*nb_joueurs != 2) && (*nb_joueurs != 3) && (*nb_joueurs != 4));


    printf("\n");

    Color(10, 0);

    printf("Partie de %d joueurs selectionee \n", *nb_joueurs);

    Color(15, 0);

    printf("\n");


    for (int i=1; i<*nb_joueurs+1; i++)
    {
        printf("\nChoissisez le pion du joueur %d : \n", i);

        // === AFFICHAGE DES CARACTERES DISPONIBLES POUR CHOIX PIONS ===

        for (int j = 0; j < nb_pions; j++)
        {
            printf("\n %d) %c \n",j+1, liste_pion[j]);
        }
        do
        {
            Color(4, 0);

            printf(">> ");

            Color(15, 0);
            scanf("%d",&choix_pion);

        }while( (choix_pion > nb_pions) || (choix_pion < 1) ); // Blindage de la saisie

        choix_pion -= 1;

        // === ATTRIBUTIONS DES PIONS ===

        if (i == 1)
        {
            tab_joueurs[0].pion = liste_pion[choix_pion];
        }
        else if ( i == 2)
        {
            tab_joueurs[1].pion = liste_pion[choix_pion];
        }
        else if ( i == 3)
        {
            tab_joueurs[2].pion = liste_pion[choix_pion];
        }
        else if ( i == 4)
        {
            tab_joueurs[3].pion = liste_pion[choix_pion];
        }

        // === REDUCTION DE LA LISTE DE PIONS ===

        for(int k = choix_pion; k < nb_pions; k++)
        {
            liste_pion[k] = liste_pion[k+1];
        }

        nb_pions--;
    }

    printf("\n");

    for (int i=0; i<*nb_joueurs; i++) {

        printf("Merci de saisir le pseudo du ");

        if (i == 0) {

            Color(12, 0);
            printf("joueur %d", i+1);
            Color(15, 0);

            printf(": \n");

            do {

                Color(4, 0);

                printf(">> ");

                Color(15, 0);

                fflush(stdin);
                gets(tab_joueurs[0].pseudo);

            } while (strlen(tab_joueurs[0].pseudo) > TAILLE_PSEUDO_JOUEUR);

            printf("\n");


        } else if (i == 1) {

            Color(1, 0);
            printf("joueur %d", i+1);
            Color(15, 0);

            printf(": \n");


            do {

                Color(4, 0);

                printf(">> ");

                Color(15, 0);

                fflush(stdin);
                gets(tab_joueurs[1].pseudo);


            } while ((strcmp(tab_joueurs[0].pseudo, tab_joueurs[1].pseudo) == 0) || (strlen(tab_joueurs[1].pseudo) > TAILLE_PSEUDO_JOUEUR));

            printf("\n");

        } else if (i == 2) {

            Color(2, 0);
            printf("joueur %d", i+1);
            Color(15, 0);

            printf(": \n");

            do {

                Color(4, 0);

                printf(">> ");

                Color(15, 0);

                fflush(stdin);
                gets(tab_joueurs[2].pseudo);

            } while (((strcmp(tab_joueurs[0].pseudo, tab_joueurs[2].pseudo) == 0) || (strcmp(tab_joueurs[1].pseudo, tab_joueurs[2].pseudo) == 0)) || (strlen(tab_joueurs[2].pseudo) > TAILLE_PSEUDO_JOUEUR));

            printf("\n");


        } else if (i == 3) {

            Color(14, 0);
            printf("joueur %d", i+1);
            Color(15, 0);

            printf(": \n");


            do {

                Color(4, 0);

                printf(">> ");

                Color(15, 0);

                fflush(stdin);
                gets(tab_joueurs[3].pseudo);


            } while (((strcmp(tab_joueurs[0].pseudo, tab_joueurs[3].pseudo) == 0) || (strcmp(tab_joueurs[1].pseudo, tab_joueurs[3].pseudo) == 0) || (strcmp(tab_joueurs[2].pseudo, tab_joueurs[3].pseudo) == 0)) || (strlen(tab_joueurs[3].pseudo) > TAILLE_PSEUDO_JOUEUR));

            printf("\n");

        }


    }


    printf("\n");

    Color(3, 0);

    printf("CONFIRMER CREATION DE LA PARTIE ? \n");

    printf("\n");

    Color(10, 0);

    printf("1) Confirmer la creation de la partie \n");

    Color(12, 0);

    printf("0) Retour au menu principal \n");

    Color(15, 0);

    printf("\n");

    do {

        Color(4, 0);

        printf(">> ");

        Color(15, 0);
        scanf("%d", &confirmer);

    } while ( confirmer != 0 && confirmer != 1);

    if (confirmer == 0) {

        *selection = 0;

    }

}