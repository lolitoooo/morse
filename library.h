
#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

void inputString(char *string, int size);
int is_alpha_string(char *string);
int is_dash_and_dot(char *str);
void encode(char string[], char tab[54][2][11]);
void decode(char morse[], char tab[54][2][11]) ;

#endif // LIBRARY_H_INCLUDED