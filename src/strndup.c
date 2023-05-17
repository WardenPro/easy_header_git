/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 00:50:25 2023
 * 1st author:  user
 * description: strndup.c
*/

#include "stu.h"

char *stu_strndup(const char *str, unsigned int nmb)
{
    int i;
    char *dest;

    if (!str || nmb == 0)
        return (NULL);
    dest = malloc(sizeof(char) * stu_strlen(str) + 1);
    i = 0;
    while (str[i] != '\0' && nmb > 0) {
        dest[i] = str[i];
        i += 1;
        nmb -= 1;
    }
    dest[i] = '\0';
    return (dest);
}