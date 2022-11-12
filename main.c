// main.c
//
// Program's name : plusOuMoins
//
// Created by David Atlan on 11/12/2022
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {

    srand(time(NULL));

    const int MAX = 100, MIN = 1; // On fixe la valeur max et la valeur min a utiliser dans la fonction rand().
    static int nombreMystere = 0; // On cree et on initialise la variable (globale fichier) nombreMystere.
    nombreMystere = rand() % (MAX + MIN); // On genere le nombre mystere dans un ecart grace au modulo.
    static int nombreEntre = 0; // On cree et on initialise la variable (globale fichier) nombreEntre.

    while (nombreEntre != nombreMystere) {
        // printf("Chuuut, voici le nombre mystere : %d\n", nombreMystere); // Cheat pour le debug !
        printf("Entrez un nombre entre 1 et 100 \n");
        scanf("%d", &nombreEntre);
            if (nombreEntre < nombreMystere) {
                printf("Desole, trop petit !\nEssayez encore\n\n");
            }
            else if (nombreEntre > nombreMystere) {
                printf("Desole, trop grand !\nEssayez encore\n\n");
            }
            else {
                printf("Bravo !\n Vous avez trouve le nombre mystere !\n");
            } 
    }

        return 0;
}