//
// Created by yonat on 30/12/2022.
//
# include "header.h"
void affichagecomptagetresor(t_joueur tab[4], int nb_joueurs)
{
    int nbtresorparjoueur = 0;
    int cptglobal = 0, cptjoueurs1 = 0, cptjoueurs2 = 0, cptjoueurs3 = 0, cptjoueurs4 = 0;
    int i = 0, j = 0, c = 0, d = 0;
    nbtresorparjoueur = 24 / nb_joueurs;
    for (i = 0; i < nb_joueurs; ++i)
    {
        for (j = 0; j <nbtresorparjoueur ; ++j)
        {
            cptglobal += 1;
        }
    }
    cptjoueurs1 = cptglobal;
    cptjoueurs2 = cptglobal;
    cptjoueurs3 = cptglobal;
    cptjoueurs4 = cptglobal;
    for ( c = 0; c < nb_joueurs; ++c)
    {
        printf("Tresors du joueur %d: ", c);
        for ( d = 0; d < 12; ++d)
        {
            if (tab[0].tresors[d] == tab[0].pion)
            {
                cptjoueurs1 -= 1;
                printf("%c",tab[0].tresors[d+1]);
            }
            if (tab[1].tresors[d] == tab[1].pion)
            {
                cptjoueurs2 -= 1;
                printf("%c",tab[1].tresors[d+1]);
            }
            if (tab[2].tresors[d] == tab[2].pion)
            {
                cptjoueurs3 -= 1;
                printf("%c",tab[2].tresors[d+1]);
            }
            if (tab[3].tresors[d] == tab[3].pion)
            {
                cptjoueurs4 -= 1;
                printf("%c",tab[3].tresors[d+1]);
            }
        }
        if (cptjoueurs1 == 0 && tab[0].pion == 36)
        {
            printf("Joueur %d : Pseudo: %s  gagne la partie !!!!!!!!!! \n", 1,tab[0].pseudo);
        }
        if (cptjoueurs2 == 0 && tab[1].pion == 156)
        {
            printf("Joueur %d : Pseudo: %s  gagne la partie !!!!!!!!!! \n", 2,tab[1].pseudo);
        }
        if (cptjoueurs3 == 0 && tab[2].pion == 157)
        {
            printf("Joueur %d : Pseudo: %s  gagne la partie !!!!!!!!!! \n", 3,tab[2].pseudo);
        }
        if (cptjoueurs4 == 0 && tab[3].pion == 190)
        {
            printf("Joueur %d : Pseudo: %s  gagne la partie !!!!!!!!!! \n", 4,tab[3].pseudo);
        }

        printf("\n");
        printf("\n");
    }
    system("pause");




}