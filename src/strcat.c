/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 19:48:22 2023
 * 1st author:  user
 * description: strcat.c
*/

#include "stu.h"

char *stu_strcat(char *dest, const char *src)
{
    int size;

    size = stu_strlen(dest);
    if (!src) return (dest);
    return (stu_strcpy(&dest[size], src));
}