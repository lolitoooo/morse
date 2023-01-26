#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

void inputString(char *string, int size);
void encode(char string[], char tab[26][2][5]);
void decode(char morse[], char tab[26][2][5]) ;

#endif // LIBRARY_H_INCLUDED