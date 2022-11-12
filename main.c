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

    while (nombreEntre != nombreMystere) { // On execute la boucle "tant que" on n'a pas trouve le bon nombre.
        // printf("Chuuut, voici le nombre mystere : %d\n", nombreMystere); // Cheat pour le debug !
        printf("Entrez un nombre entre 1 et 100 \n");
        scanf("%d", &nombreEntre); // On recupere la valeur saisie par l'utilisateur et on la stock dans nombreEntre.
            if (nombreEntre < nombreMystere) { // Si c'est trop petit, 
                printf("Desole, trop petit !\nEssayez encore\n\n"); // On affiche ça,
            }
            else if (nombreEntre > nombreMystere) { // Si c'est trop grand,
                printf("Desole, trop grand !\nEssayez encore\n\n"); // On affiche ça,
            }
            else { // Sinon c'est qu'on a trouve,
                printf("Bravo !\n Vous avez trouve le nombre mystere !\n"); // Donc on affiche ça,
            } 
    }

        return 0;
}