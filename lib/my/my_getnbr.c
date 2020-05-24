/*
** EPITECH PROJECT, 2019
** Project
** File description:
** getnbr
*/

#include <stdlib.h>
#include "../../include/my.h"

int my_getnbr(char *str)
{
    int resultat = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            resultat *= 10;
            resultat += str[i] - 48;
            i++;
        } else {
            exit(84);
        }
    }
    return (resultat);
}
