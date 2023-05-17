/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 00:50:25 2023
 * 1st author:  user
 * description: strrchr.c
*/

#include "stu.h"

char *stu_strrchr(const char *str, char search)
{
    char *t;
    int i;

    if (!str)
        return (NULL);
    t = 0;
    i = 0;
    i = stu_strlen(str);
    while (i > 0) {
        if (str[i] == search) {
            t = (char *)&str[i];
            return (t);
        }
        i = i - 1;
    }
    return NULL;
}
