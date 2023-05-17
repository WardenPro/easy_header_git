/*
 * E89 Pedagogical & Technical Lab
 * project:     89
 * created on:  Sat May  6 18:00:28 2023
 * 1st author:  user
 * description: strcmp.c
*/


#include "stu.h"

int stu_strcmp(const char *a, const char *b)
{
    unsigned int i;

    i = 0;
    if (!a && b) {
        return (-1);
    } else if (a && !b) {
        return (1);
    }
    while (i < stu_strlen(a) || i < stu_strlen(b)) {
        if (a[i] < b[i]) {
            return (-1);
        } else if (a[i] > b[i]) {
            return (1);
        }
        i += 1;
    }
    return (0);
}