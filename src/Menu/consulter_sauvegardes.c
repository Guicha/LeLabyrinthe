//
// Created by guych on 17/12/2022.
//

#include "../../header.h"

void consulter_sauvegardes(int *selection) {

    system("cls");

    int numero_sauvegarde = 1;
    int compteur = 0;
    *selection = 999;

    printf("\n");

    Color(3, 0);

    printf("CONSULTER SAUVEGARDES \n");

    Color(15, 0);

    printf("Liste des sauvegardes disponibles sur l'ordinateur: \n");

    printf("\n");

    DIR* rep = NULL;

    struct dirent* fichierLu = NULL; // Déclaration d'un pointeur vers la structure dirent.

    rep = opendir("../saves");

    if (rep == NULL) {

        Color(12, 0);

        printf("    Impossible de retrouver le repertoire \"saves\" de sauvegardes :/ Merci de verifier l'integrite des fichiers du jeu");

        printf("\n");

        Color(15, 0);

    } else {

        while ((fichierLu = readdir(rep)) != NULL) {

            if ( (strcmp(fichierLu->d_name, ".") == 0) || (strcmp(fichierLu->d_name, "..") == 0)) {
                //rien a faire: on exclut les repertoires

            } else {

                printf("    Sauvegarde %d: %s\n", numero_sauvegarde, fichierLu->d_name);
                numero_sauvegarde = numero_sauvegarde + 1;
                compteur = compteur + 1;
            }
        }

        if (compteur == 0) {

            printf("Il n'y aucune sauvegarde enregistree :/");
            printf("\n");
        }
    }


    printf("\n");

    printf("Merci de selectionner une sauvegarde a charger ou entrer le chiffre 0 afin de retourner au menu: \n");

    printf("\n");

    do {

        Color(4, 0);

        printf(">> ");

        Color(15, 0);
        scanf("%d", selection);

    } while ( (*selection != 0) && !(*selection >= 1 && *selection < numero_sauvegarde));

    if (*selection == 0) {

        // On retourne au menu
    } else {

        printf("\n");

        seekdir(rep, *selection+1);
        printf("\n%s\n", readdir(rep)->d_name);

        printf("\n");

        system("pause");

        *selection = 0;
    }

    // Ouvrir les fichiers :: faire la suite du programme

}