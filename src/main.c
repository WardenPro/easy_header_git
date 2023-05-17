/*
 * E89 Pedagogical & Technical Lab
 * project:     ../../
 * created on:  Sat May  6 20:00:44 2023
 * 1st author:  user
 * description: main.c
*/

#include "stu.h"

int main(int ac, char **av)
{
    char *path;

    if (ac <= 1) {
        path = ".";
    } else if (ac != 2) {
        write(2, "Usage: ./easy_header <dirname>\n", 31);
        return (1);
    } else {
        path = av[1];
    }
    search_file(path);
    return (0);
}