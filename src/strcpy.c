/*
 * E89 Pedagogical & Technical Lab
 * project:     89
 * created on:  Sat May  6 18:00:28 2023
 * 1st author:  user
 * description: strcpy.c
*/


#include <stddef.h>

char *stu_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    if (!src) return (NULL);
    while (src[i]) {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return (dest);
}
