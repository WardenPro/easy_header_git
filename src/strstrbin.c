/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 00:50:25 2023
 * 1st author:  user
 * description: strstrbin.c
*/

#include "stu.h"

int stu_strstrbin(const char *haystack, const char *needle)
{
    int i;
    int j;

    if (!haystack || !needle)
        return (0);
    i = 0;
    j = 0;
    while (haystack[i] != '\0') {
        if (haystack[i] == needle[j]) {
            j += 1;
            if (haystack[i +1] == '~') {
                return 0;
            }
            if (haystack[i + 1] == '#') {
                return 0;
            }
            if (needle[j] == '\0') {
                return 1;
            }
        } else {
            j = 0;
        }
        i += 1;
    }
    return 0;
}