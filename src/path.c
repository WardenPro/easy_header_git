/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 19:56:46 2023
 * 1st author:  user
 * description: path.c
*/

#include "stu.h"

char *fpath(char *directory, char *file)
{
    char *path;
    void *to_free;

    if (!directory) {
        path = stu_strdup(file);
    } else {
        path = stu_strdupcat(directory, "/");
        to_free = path;
        path = stu_strdupcat(path, file);
        free(to_free);
    }
    return (path);
}