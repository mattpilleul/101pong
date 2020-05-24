/*
** EPITECH PROJECT, 2019
** my_check_f.c
** File description:
** etett
*/

#include <stdlib.h>

void my_check_f(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] <= '9' && str[i] >= '0') || str[i] == '.' || str[i] == '-')
            i++;
        else
            exit(84);
    }
}
