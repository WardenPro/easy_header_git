/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 19:48:22 2023
 * 1st author:  user
 * description: stu.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <time.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#ifndef STU_H
#define STU_H

char *stu_strrchr(const char *str, char search);
char *stu_strndup(const char *str, unsigned int nmb);
char *stu_strdup(const char *str);
char *stu_strdupcat(const char *a, const char *b);
int stu_strstrbin(const char *haystack, const char *needle);
char *stu_strstr(const char *haystack, const char *needle);
unsigned int stu_strlen(const char *str);
char *stu_strcat(char *dest, const char *src);
char *stu_strcpy(char *dest, const char *src);
int stu_strcmp(const char *a, const char *b);
char *fpath(char *directory, char *file);
char *save(FILE *stream, char *path);
void print_header(char *dir_name, char *file, char *project);
void print_makefile_header(char *dir_name, char *file, char *project);
char *header_to_write(int i, char *dir_name, char *file);
int search_file(char *path);

#endif // STU_H
