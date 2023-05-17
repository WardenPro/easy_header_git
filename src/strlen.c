/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 16:09:40 2023
 * 1st author:  user
 * description: strlen.c
*/

#include "stu.h"

unsigned int stu_strlen(const char *str)
{
    int i;

    i = 0;
    if (!str)
        return (i);
    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}
