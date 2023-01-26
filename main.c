/*
 * Description: Ce programme a pour but d'encoder une chaine de carractere en morse ou de la decoder
 * Autor      : Pena Loan
 * Date       : 25/01/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main(int argc, char **argv){

    int size = 255;
    char word[255];
    int choice = 0;
    int restart = 0;
    int c;
    char morse [54][2][11] = {
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
            {"z","--.."},
            {"1",".----"},
            {"2","..---"},
            {"3","...--"},
            {"4","....-"},
            {"5","....."},
            {"6","-...."},
            {"7","--..."},
            {"8","---.."},
            {"9","----."},
            {"0","-----"},
            {".",".-.-.-"},
            {",","--..--"},
            {"?","..--.."},
            {"'",".----."},
            {"!","-.-.-----."},
            {"/","-..-."},
            {"(","-.--."},
            {")","-.--.-"},
            {"&",".-..."},
            {":","---..."},
            {";","-.-.-."},
            {"=","-...-"},
            {"+",".-.-."},
            {"-","-....-"},
            {"_","..--.-"},
            {"\"",".-..-."},
            {"$","...-..-"},
            {"@",".--.-."},
    };

    do{

        printf("1.....Encoder du morse\n");
        printf("2.....Decoder du morse\n");
        printf("choix : ");
        scanf("%d", &choice);

        while ((c = getchar()) != '\n' && c != EOF);

        switch (choice){
            case 1:
                printf("Saisir la chaine a encoder: ");
                inputString(word, size);
                if (is_alpha_string(word) == 0)
                    encode(word, morse);
                break;

            case 2:
                printf("Saisir la chaine a decoder: ");
                inputString(word, size);
                if (is_dash_and_dot(word) == 0)
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