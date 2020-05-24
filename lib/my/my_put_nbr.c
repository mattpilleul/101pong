/*
** EPITECH PROJECT, 2019
** Project
** File description:
** my_put_nbr
*/

#include <unistd.h>
#include <math.h>
#include "../../include/my.h"

int my_put_nbr(int nb)
{
    if (nb < 0){
        my_putchar('-');
        if (nb < -2147483647){
            nb += 2000000000;
            my_putchar('2');
        }
        nb = -nb;
    }
    if (nb >= 10){
        my_put_nbr(nb/10);
        my_put_nbr(nb%10);
    }
    else my_putchar(nb+48);
}
