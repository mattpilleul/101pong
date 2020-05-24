/*
** EPITECH PROJECT, 2019
** Project
** File description:
** getnbr
*/

#include <stdlib.h>
#include "../../include/my.h"

float my_getfloat(char *str)
{
    float resultat = 0;

    if (str != NULL && str[0] == '-'){
        return (-my_getnbr(&str[1]));
    }
    while ((*str >= '0') && (*str <= '9')){
        resultat = (resultat * 10) + (*str - '0');
        str++;
    }
    return (resultat);
}
