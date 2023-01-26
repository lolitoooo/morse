/*
 * Description: Ce programme a pour but d'encoder une chaine de carractere en morse ou de la decoder
 * Autor      : Pena Loan
 * Date       : 25/01/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void inputString(char *string, int size);
void encode(char string[], char tab[26][2][5]);
void decode(char morse[], char tab[26][2][5]);

int main(int argc, char **argv){

    int size = 255;
    char word[255];
    int choice = 0;
    int restart = 0;
    int c;
    char morse [26][2][5] = {
            {"a" , ".-"},
            {"b","-..."},
            {"c","-.-."},
            {"d","-.."},
            {"e","."},
            {"f","..-."},
            {"g","--."},
            {"h","...."},
            {"i",".."},
            {"j",".---"},
            {"k","-.-"},
            {"l",".-.."},
            {"m","--"},
            {"n","-."},
            {"o","---"},
            {"p",".--."},
            {"q","--.-"},
            {"r",".-."},
            {"s","..."},
            {"t","-"},
            {"u","..-"},
            {"v","...-"},
            {"w",".--"},
            {"x","-..-"},
            {"y","-.--"},
            {"z","--.."}
    };

    do{

        printf("1.....Encoder du morse\n");
        printf("2.....Decoder du morse\n");
        printf("choix : ");
        scanf("%d", &choice);

        while ((c = getchar()) != '\n' && c != EOF); // fflush en mieux

        switch (choice){
            case 1:
                printf("Saisir la chaine a encoder: ");
                inputString(word, size);
                encode(word, morse);
                break;

            case 2:
                printf("Saisir la chaine a decoder: ");
                inputString(word, size);
                decode(word, morse);
                break;

            default:
                printf("Mauvais boutton :(\n");
                break;
        }

        printf("Voulez-vous recommencer [1]Oui | [0]Non :");
        scanf("%d", &restart);
    } while(restart != 0);

    return EXIT_SUCCESS;
}


