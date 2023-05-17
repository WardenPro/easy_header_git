/*
 * E89 Pedagogical & Technical Lab
 * project:     easy_header
 * created on:  Sat May  6 19:59:20 2023
 * 1st author:  user
 * description: search_file.c
*/

#include "stu.h"

int search_file(char *path)
{
    struct dirent *dir;
    char *dir_name;
    DIR *d;
    DIR *q;

    if (!(q = opendir(path))) {
        write(2, strerror(errno), stu_strlen(strerror(errno)));
        write(2, "\n", 1);
        return (1);
    }
    while ((dir = readdir(q))) {
        if (stu_strstrbin(dir->d_name, "Makefile") == 1) {
            print_makefile_header(path, dir->d_name, path);
        } else if (stu_strstrbin(dir->d_name, ".c") == 1 ||
                   stu_strstrbin(dir->d_name, ".h") == 1)
            print_header(path, dir->d_name, path);
        dir_name = fpath(path ,dir->d_name);
        if ((d = opendir(dir_name))) {
            while ((dir = readdir(d))) {
                if (stu_strstrbin(dir->d_name, ".c") == 1 ||
                    stu_strstrbin(dir->d_name, ".h") == 1)
                    print_header(dir_name, dir->d_name, path);
            }
            closedir(d);
        }
        free(dir_name);
    }
    closedir(q);
    return (0);
}