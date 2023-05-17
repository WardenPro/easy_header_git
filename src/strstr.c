/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 00:50:25 2023
 * 1st author:  user
 * description: strstr.c
*/

#include "stu.h"

char *stu_strstr(const char *haystack, const char *needle)
{
    int pos;
    int i;
    int j;

    if (!haystack || !needle)
        return (NULL);
    i = 0;
    j = 0;
    while (haystack[i]) {
        pos = i;
        while (haystack[i] == needle[j]) {
            i += 1;
            j += 1;
            if (needle[j] == '\0')
                return ((char *) &haystack[pos]);
        }
        i += 1;
    }
    return (NULL);
}
