cmake_minimum_required(VERSION 3.23)
project(Projet_semestre_1 C)

set(CMAKE_C_STANDARD 23)

add_executable(Projet_semestre_1 main.c header.h src/Menu/menu_principal.c src/Menu/credits-regles.c src/Menu/color.c src/Menu/consulter_sauvegardes.c src/Menu/menu_ingame.c src/Menu/cursor.c src/NouvellePartie/creer_partie.c src/NouvellePartie/init_plateau.c src/NouvellePartie/afficher_plateau.c src/NouvellePartie/notice_joueurs.c src/Testing/afficher_tab_struct_joueurs.c src/NouvellePartie/options_joueur.c Affichagecomptagetresor.c src/NouvellePartie/coulissage_tuiles.c src/NouvellePartie/deplacement_joueur.c)

