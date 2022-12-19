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

// === MENU ===
void menu_principal(int *selection);
void menu_ingame();
void credits(int *selection);
void consulter_sauvegardes(int *selection);

// === ICONES DE TRESORS ET POSITIONS ===

    // === TUILES L ===
char tuile_L_1[3][3] = { {'#', ' ', '#'},
                         {'#', ' ', ' ',},
                         {'#', '#', '#'},
};

char tuile_L_2[3][3] = { {'#', '#', '#'},
                         {'#', ' ', ' ',},
                         {'#', ' ', '#'},
};

char tuile_L_3[3][3] = { {'#', '#', '#'},
                         {' ', ' ', '#',},
                         {'#', ' ', '#'},
};

char tuile_L_4[3][3] = { {'#', ' ', '#'},
                         {' ', ' ', '#',},
                         {'#', '#', '#'},
};




    // === TUILES I ===
char tuile_I_1[3][3] = { {'#', ' ', '#'},
                         {'#', ' ', '#',},
                         {'#', ' ', '#'},
};

char tuile_I_2[3][3] = { {'#', '#', '#'},
                         {' ', ' ', ' ',},
                         {'#', '#', '#'},
};





    // === TUILES T ===
char tuile_T_1[3][3] = { {'#', '#', '#'},
                         {' ', ' ', ' ',},
                         {'#', ' ', '#'},
};

char tuile_T_2[3][3] = { {'#', ' ', '#'},
                         {'#', ' ', ' ',},
                         {'#', ' ', '#'},
};

char tuile_T_3[3][3] = { {'#', '#', '#'},
                         {' ', ' ', '#',},
                         {'#', ' ', '#'},
};

char tuile_T_4[3][3] = { {'#', ' ', '#'},
                         {' ', ' ', ' ',},
                         {'#', '#', '#'},
};


#endif //PROJET_SEMESTRE_1_HEADER_H
