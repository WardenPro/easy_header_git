/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 00:50:25 2023
 * 1st author:  user
 * description: strdup.c
*/

#include "stu.h"

char *stu_strdup(const char *str)
{
    int i;
    char *test;

    if (!str)
        return (NULL);
    test = malloc(sizeof(char) * stu_strlen(str) + 1);
    i = 0;
    while (str[i]) {
        test[i] = str[i];
        i += 1;
    }
    test[i] = '\0';
    return (test);
}
