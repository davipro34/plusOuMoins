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

    const int MAX = 100, MIN = 1;
    static int nombreMystere = 0;
    nombreMystere = rand() % (MAX + MIN);

    int nombreEntre = 0;

    while (nombreEntre != nombreMystere) {
        printf("Chuuut, voici le nombre mystere : %d\n", nombreMystere);
        printf("Entrez un nombre entre 1 et 100 \n");
        scanf("%d", &nombreEntre);
            if (nombreEntre < nombreMystere) {
                printf("Desole, trop petit !\n Essayez encore\n");
            }
            if (nombreEntre > nombreMystere) {
                printf("Desole, trop grand !\n Essayez encore\n");
            }
            if (nombreEntre == nombreMystere) {
                printf("Bravo !\n Vous avez trouve le nombre mystere !\n");
            } 
    }

        return 0;
}