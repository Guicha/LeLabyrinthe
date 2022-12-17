#include "header.h"


int main() {

    // === VARIABLES MENU ===
    int choix = 0;
    int alive = 1;

    // === INITIALISATION DE L'ALEATOIRE ===
    srand(time(NULL));

    while (alive) {

        if (choix == 0) {

            system("cls");
            menu_principal(&choix);

        } else if (choix == 1) {


        } else if (choix == 2) {

            consulter_sauvegardes(&choix);
        } else if (choix == 3) {

            credits(&choix);

        } else if (choix == 4) {

            printf(" \n");
            Color(12, 0);
            printf("Merci d'avoir joue a Labyrinthe ! \n");
            alive = 0;
        }
    }

    printf("\n");

    Color(15, 0);
    system("pause");

    return 0;
}
