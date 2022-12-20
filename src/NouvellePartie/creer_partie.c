//
// Created by guych on 20/12/2022.
//

#include "../../header.h"

void creer_partie(int *selection, int *nb_joueurs, char nom1[TAILLE_PSEUDO_JOUEUR], char nom2[TAILLE_PSEUDO_JOUEUR], char nom3[TAILLE_PSEUDO_JOUEUR], char nom4[TAILLE_PSEUDO_JOUEUR], char pion1[TAILLE_PION_JOUEUR], char pion2[TAILLE_PION_JOUEUR], char pion3[TAILLE_PION_JOUEUR], char pion4[TAILLE_PION_JOUEUR]) {

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

                strcpy(pion1, "A");

            } else if (pion == 2) {

                strcpy(pion1, "B");

            } else if (pion == 3) {

                strcpy(pion1, "C");

            } else if (pion == 4) {

                strcpy(pion1, "D");

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

                strcpy(pion2, "A");

            } else if (pion == 2) {

                strcpy(pion2, "B");

            } else if (pion == 3) {

                strcpy(pion2, "C");

            } else if (pion == 4) {

                strcpy(pion2, "D");

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

                strcpy(pion3, "A");

            } else if (pion == 2) {

                strcpy(pion3, "B");

            } else if (pion == 3) {

                strcpy(pion3, "C");

            } else if (pion == 4) {

                strcpy(pion3, "D");

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

                strcpy(pion4, "A");

            } else if (pion == 2) {

                strcpy(pion4, "B");

            } else if (pion == 3) {

                strcpy(pion4, "C");

            } else if (pion == 4) {

                strcpy(pion4, "D");

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
                gets(nom1);

            } while (strlen(nom1) > TAILLE_PSEUDO_JOUEUR);

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
                gets(nom2);


            } while ((strcmp(nom1, nom2) == 0) || (strlen(nom2) > TAILLE_PSEUDO_JOUEUR));

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
                gets(nom3);

            } while (((strcmp(nom1, nom3) == 0) || (strcmp(nom2, nom3) == 0)) || (strlen(nom3) > TAILLE_PSEUDO_JOUEUR));

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
                gets(nom4);


            } while (((strcmp(nom1, nom4) == 0) || (strcmp(nom2, nom4) == 0) || (strcmp(nom3, nom4) == 0)) || (strlen(nom4) > TAILLE_PSEUDO_JOUEUR));

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