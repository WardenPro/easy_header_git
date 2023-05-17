/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 19:56:46 2023
 * 1st author:  user
 * description: copy_file.c
*/

#include "stu.h"

char *save(FILE *stream, char *path)
{
    struct stat fsize;
    char *buffer;

    stat(path, &fsize);
    buffer = malloc(sizeof(char) * fsize.st_size + 1);
    fread(buffer, sizeof(char), fsize.st_size, stream);
    buffer[fsize.st_size] = '\0';
    if (stu_strstr(buffer, " * project:     ") ||
        stu_strstr(buffer, "# project:     ")) {
        free(buffer);
        return (NULL);
    }
    return (buffer);
}