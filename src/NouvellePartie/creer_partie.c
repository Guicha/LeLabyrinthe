//
// Created by guych on 20/12/2022.
//

#include "../../header.h"

void creer_partie(int *selection, int *nb_joueurs, t_joueur tab_joueurs[4]) {

    int confirmer;
    int pion;
    int choix_pion1;
    int choix_pion2;
    int choix_pion3;
    int choix_pion4;

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

    for (int i=0; i<*nb_joueurs; i++) {

        printf("\n");

        printf("Merci de saisir le pion du ");

        if (i == 0) {

            Color(12, 0);
            printf("joueur %d", i+1);
            Color(15, 0);

            printf(": \n");

            printf("1) A \n");
            printf("2) B \n");
            printf("3) C \n");
            printf("4) D \n");

            printf("\n");

            do {

                Color(4, 0);

                printf(">> ");

                Color(15, 0);

                scanf("%d", &pion);


            } while (pion != 1 && pion != 2 && pion != 3 && pion != 4);

            if (pion == 1) {

                strcpy(tab_joueurs[0].pion, "A");

            } else if (pion == 2) {

                strcpy(tab_joueurs[0].pion, "B");

            } else if (pion == 3) {

                strcpy(tab_joueurs[0].pion, "C");

            } else if (pion == 4) {

                strcpy(tab_joueurs[0].pion, "D");

            }

            choix_pion1 = pion;

        } else if (i == 1) {

            Color(1, 0);
            printf("joueur %d", i+1);
            Color(15, 0);

            printf(": \n");

            printf("1) A \n");
            printf("2) B \n");
            printf("3) C \n");
            printf("4) D \n");

            printf("\n");

            do {

                Color(4, 0);

                printf(">> ");

                Color(15, 0);

                scanf("%d", &pion);


            } while ((pion != 1 && pion != 2 && pion != 3 && pion != 4) || (pion == choix_pion1));

            if (pion == 1) {

                strcpy(tab_joueurs[1].pion, "A");

            } else if (pion == 2) {

                strcpy(tab_joueurs[1].pion, "B");

            } else if (pion == 3) {

                strcpy(tab_joueurs[1].pion, "C");

            } else if (pion == 4) {

                strcpy(tab_joueurs[1].pion, "D");

            }

            choix_pion2 = pion;

        } else if (i == 2) {

            Color(2, 0);
            printf("joueur %d", i+1);
            Color(15, 0);

            printf(": \n");

            printf("1) A \n");
            printf("2) B \n");
            printf("3) C \n");
            printf("4) D \n");

            printf("\n");

            do {

                Color(4, 0);

                printf(">> ");

                Color(15, 0);

                scanf("%d", &pion);


            } while ((pion != 1 && pion != 2 && pion != 3 && pion != 4) || (pion == choix_pion1) || (pion == choix_pion2));

            if (pion == 1) {

                strcpy(tab_joueurs[2].pion, "A");

            } else if (pion == 2) {

                strcpy(tab_joueurs[2].pion, "B");

            } else if (pion == 3) {

                strcpy(tab_joueurs[2].pion, "C");

            } else if (pion == 4) {

                strcpy(tab_joueurs[2].pion, "D");

            }

            choix_pion3 = pion;

        } else if (i == 3) {

            Color(14, 0);
            printf("joueur %d", i+1);
            Color(15, 0);

            printf(": \n");

            printf("1) A \n");
            printf("2) B \n");
            printf("3) C \n");
            printf("4) D \n");

            printf("\n");

            do {

                Color(4, 0);

                printf(">> ");

                Color(15, 0);

                scanf("%d", &pion);


            } while ((pion != 1 && pion != 2 && pion != 3 && pion != 4) || (pion == choix_pion1) || (pion == choix_pion2) || (pion == choix_pion3));

            if (pion == 1) {

                strcpy(tab_joueurs[3].pion, "A");

            } else if (pion == 2) {

                strcpy(tab_joueurs[3].pion, "B");

            } else if (pion == 3) {

                strcpy(tab_joueurs[3].pion, "C");

            } else if (pion == 4) {

                strcpy(tab_joueurs[3].pion, "D");

            }

            choix_pion4 = pion;

        }



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