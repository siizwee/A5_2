#include "ang.h"
#include <stdio.h>
#include <stdlib.h>
#define ARR_GROSSE 10

int main() {
    int i;
    angestellter * array[ARR_GROSSE]= {NULL};

    while (1) {
        printf("Bitte geben sie ein zahl: ");
        scanf("%d",&i);
        do {} while (getchar() != '\n');

        if (i < 0 || i > 9) {
            break;
        }
        if (array[i] == NULL) {
            array[i] = (angestellter *) malloc(sizeof(angestellter));

            printf("Name: ");
            scanf("%40[^\n]", array[i]->name);

            printf("personalnummer: ");
            scanf("%d",&array[i]->personalnummer);

            printf("gehalt: ");
            scanf("%f", &array[i]->gehalt);


        } else {
            free(array[i]);
            array[i] = NULL;
        }

        for (int i = 0; i < ARR_GROSSE; i++) {
            if(array[i] != NULL){

                printf("%s\n ", array[i]->name);
                printf("%d\n ", array[i]->personalnummer);
                printf("%.2f\n ", array[i]->gehalt);
            }

        }

    }

    return 0;
}
