#ifndef MAIN_H
#define MAIN_H

/**
*AUTHOR: EZE CHIADIKAOBI
*DATE: 11-JULY-2023
*FILE: MAIN.H FILE
*DESCRIPTION: HEADER FILE CONTAINING ALL
*FUNCTIONS FOR MALLOC AND FREE TASK
*/

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *s);

#endif /** MAIN.H **/
