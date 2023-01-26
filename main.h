#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "library.h"

void inputString(char *string, int size);
void encode(char string[], char tab[26][2][5]);
void decode(char morse[], char tab[26][2][5]) ;

#endif