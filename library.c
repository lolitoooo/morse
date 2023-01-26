#include<stdio.h>
#include<string.h>

void inputString(char *string, int size){
    fgets(string, size, stdin);
    if(string[strlen(string) - 1] == '\n')
        string[strlen(string) - 1] = '\0';
    else
        fflush(stdin);
}

void encode(char string[], char tab[36][2][6]){
    int i;
    int j;
    char morse[255] = "";
    for (i = 0; i < strlen(string); i++){
        for (j = 0; j < 36; j++){
            if(strchr(tab[j][0], string[i]) != NULL) {
                strcat(morse, tab[j][1]);
                strcat(morse, " ");
            }
        }
    }
    printf("%s\n", morse);
}

void decode(char morse[], char tab[36][2][6]) {
    char *letter = strtok(morse, " ");
    while (letter != NULL) {
        for (int i = 0; i < 36; i++) {
            if (strcmp(letter, tab[i][1]) == 0) {
                printf("%c", tab[i][0][0]);
            }
        }
        letter = strtok(NULL, " ");
    }
    printf("\n");
}