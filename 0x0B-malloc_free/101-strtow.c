#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
*word_len - Locates the index marking the end of the
*first word contained within a string.
*@str: The string to be searched.
*
*Return: The index marking the end of the initial 
*word pointed to by str.
*/
int word_len(char *str)
{
int i = 0, l = 0;
while (*(str + i) && *(str + i) != ' ')
{
l++;
i++;
}
return (l);
}

/**
*count_words - Counts the number of words contained within a string.
*@str: The string to be searched.
*
*Return: The number of words contained within str.
*/
int count_words(char *str)
{
int i = 0, words = 0, l = 0;
for (i = 0; *(str + i); i++)
l++;
for (i = 0; i < l; i++)
{
if (*(str + i) != ' ')
{
words++;
i += word_len(str + i);
}
}
return (words);
}

/**
*strtow - Splits a string into words.
*@str: The string to be split.
*
*Return: If str = NULL, str = "", or the function fails - NULL.
*otherwise - a pointer to an array of strings (words).
*/
char **strtow(char *str)
{
char **s;
int i = 0, words, w, letters, l;
if (str == NULL || str[0] == '\0')
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL);
strings = malloc(sizeof(char *) * (words + 1));
if (s == NULL)
return (NULL);
for (w = 0; w < words; w++)
{
while (str[i] == ' ')
i++;
letters = word_len(str + i);
s[w] = malloc(sizeof(char) * (letters + 1));
if (s[w] == NULL)
{
for (; w >= 0; w--)
free(s[w]);
free(s);
return (NULL);
}
for (l = 0; l < letters; l++)
s[w][l] = str[i++];
s[w][l] = '\0';
}
s[w] = NULL;
return (s);
}
