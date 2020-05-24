/*
** EPITECH PROJECT, 2019
** my_strcmp.2.c
** File description:
** strcmp2
*/

#include "../../include/my.h"

int my_strcmp2(char *s1, char *s2)
{
    int i = 0;

    if (my_strlen(s1) - my_strlen(s2) != 0)
        return (0);
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return (0);
        }
        i++;
    }
    return (1);
}
