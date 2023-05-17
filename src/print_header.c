#include "stu.h"

void print_makefile_header(char *dir_name, char *file, char *project)
{
    char **text;
    char *ligne;
    char *path;
    char *cp_file;
    FILE *stream;
    int i;

    text = malloc(sizeof(char *) * 5);
    text[0] = "# project:     ";
    text[1] = "# created on:  ";
    text[2] = "# 1st author:  ";
    text[3] = "# description: ";
    text[4] = NULL;

    path = fpath(dir_name, file);
    stream = fopen(path, "r");
    cp_file = save(stream, path);
    if (!cp_file) {
        fclose(stream);
        free(path);
        free(text);
        return;
    }
    fclose(stream);
    stream = fopen(path, "w");
    fwrite("# E89 Pedagogical & Technical Lab\n", sizeof(char), 34, stream);
    i = 0;
    while (text[i]) {
        ligne = stu_strdupcat(text[i], header_to_write(i, project, file));
        fwrite(ligne, sizeof(char), stu_strlen(ligne), stream);
        free(ligne);
        fwrite("\n", sizeof(char), 1, stream);
        i += 1;
    }
    fwrite("\n", sizeof(char), 1, stream);
    fwrite(cp_file, sizeof(char), stu_strlen(cp_file), stream);
    fclose(stream);
    free(text);
    free(path);
    free(cp_file);
}

void print_header(char *dir_name, char *file, char *project)
{
    char **text;
    char *ligne;
    char *path;
    char *cp_file;
    FILE *stream;
    int i;

    text = malloc(sizeof(char *) * 5);
    text[0] = " * project:     ";
    text[1] = " * created on:  ";
    text[2] = " * 1st author:  ";
    text[3] = " * description: ";
    text[4] = NULL;

    path = fpath(dir_name, file);
    stream = fopen(path, "r");
    cp_file = save(stream, path);
    if (!cp_file) {
        fclose(stream);
        free(path);
        free(text);
        return;
    }
    fclose(stream);
    stream = fopen(path, "w");
    fwrite("/*\n", sizeof(char), 3, stream);
    fwrite(" * E89 Pedagogical & Technical Lab\n", sizeof(char), 35, stream);
    i = 0;
    while (text[i]) {
        ligne = stu_strdupcat(text[i], header_to_write(i, project, file));
        fwrite(ligne, sizeof(char), stu_strlen(ligne), stream);
        free(ligne);
        fwrite("\n", sizeof(char), 1, stream);
        i += 1;
    }
    fwrite("*/\n\n", sizeof(char), 4, stream);
    fwrite(cp_file, sizeof(char), stu_strlen(cp_file), stream);
    fclose(stream);
    free(text);
    free(path);
    free(cp_file);
}