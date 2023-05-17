/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 19:56:46 2023
 * 1st author:  user
 * description: header_to_write.c
*/

#include "stu.h"

char *header_to_write(int i, char *dir_name, char *file)
{
    char *str;
    time_t t;

    str = NULL;
    if (i == 0) {
        if (stu_strcmp(dir_name, ".") == 0) {
            str = stu_strrchr(getenv("PWD"), '/');
            str = &str[1];
        } else {
            str = stu_strdup(dir_name);
        }
    } else if (i == 1) {
        t = time(NULL);
        str = ctime(&t);
        str[stu_strlen(str) - 1] = '\0';
    } else if (i == 2) {
        str = getenv("USER");
    } else if (i == 3) {
        str = file;
    }
    return (str);
}