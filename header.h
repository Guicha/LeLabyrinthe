//
// Created by guych on 14/12/2022.
//

#ifndef PROJET_SEMESTRE_1_HEADER_H
#define PROJET_SEMESTRE_1_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <dirent.h> // Pour parcourir les fichiers d'un dossier

// === CONSTANTES ===
#define TAILLE_PSEUDO_JOUEUR 24




// === STRUCTURES ===
typedef struct carte_joueur {

    char pseudo[TAILLE_PSEUDO_JOUEUR];
    int pion;

} t_joueur;





// === PROGRAMMES DE COULEUR ===
void Color(int couleurDuTexte, int couleurDeFond);

// === PROGRAMMES DE CURSEUR ===
void gotoligcol(int lig, int col);

// === MENU ===
void menu_principal(int *selection);
void menu_ingame();
void credits(int *selection);
void consulter_sauvegardes(int *selection);

// === NOUVELLE PARTIE ===
void creer_partie(int *selection, int *nb_joueurs, t_joueur tab_joueurs[4]);
void afficher_plateau(char *plateau[81]);
void init_plateau(char *plateau[81], char *tab_tuiles[10]);
void notice_joueurs();




#endif //PROJET_SEMESTRE_1_HEADER_H
