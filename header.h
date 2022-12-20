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

// === PROGRAMMES DE COULEUR ===
void Color(int couleurDuTexte,int couleurDeFond);

// === PROGRAMMES DE CURSEUR ===
void gotoligcol( int lig, int col );

// === MENU ===
void menu_principal(int *selection);
void menu_ingame();
void credits(int *selection);
void consulter_sauvegardes(int *selection);

// === NOUVELLE PARTIE ===
void creer_partie(int *selection);

// === ICONES DE TRESORS ET POSITIONS ===
extern char fleche_haut[11];

extern char fleche_bas[11];

extern char fleche_gauche[11];

extern char fleche_droite[11];


    // === TUILES ESPACE ===
extern char tuile_esp[11];

    // === TUILES L ===
extern char tuile_L_1[11]; // ╚

extern char tuile_L_2[11]; // ╔

extern char tuile_L_3[11]; // ╗

extern char tuile_L_4[11]; // ╝




    // === TUILES I ===
extern char tuile_I_1[11]; // ║

extern char tuile_I_2[11]; // ═





    // === TUILES T ===
extern char tuile_T_1[11]; // ╦

extern char tuile_T_2[11]; // ╠

extern char tuile_T_3[11]; // ╣

extern char tuile_T_4[11]; // ╩


#endif //PROJET_SEMESTRE_1_HEADER_H
