/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 00:50:25 2023
 * 1st author:  user
 * description: strdupcat.c
*/

#include "stu.h"

char *stu_strdupcat(const char *s1, const char *s2)
{
    char *dest;
    int s1_size;
    int s2_size;

    if (!s1 && !s2)
        return (NULL);
    if (!s1)
        return (stu_strdup(s2));
    if (!s2)
        return (stu_strdup(s1));
    s1_size = stu_strlen(s1);
    s2_size = stu_strlen(s2);
    dest = malloc(sizeof(char) * (s1_size + s2_size + 1));
    if (!s1 || !s2) {
        return (dest);
    }
    stu_strcpy(dest, s1);
    stu_strcpy(&dest[s1_size], s2);
    return (dest);
}