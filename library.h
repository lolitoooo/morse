#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

void inputString(char *string, int size);
void encode(char string[], char tab[36][2][6]);
void decode(char morse[], char tab[36][2][6]) ;

#endif // LIBRARY_H_INCLUDED