/*
** EPITECH PROJECT, 2019
** man_disp.c
** File description:
** man_disp
*/

#include "../../include/my.h"

void man_disp(void)
{
    my_putstr("USAGE\n    ./101pong x0 y0 z0 x1 y1 z1 n\n\n");
    my_putstr("DESCRIPTION\n    x0  ball abscissa at time t - 1\n");
    my_putstr("    y0  ball ordinate at time t - 1\n    z0  ball alti");
    my_putstr("tude at time t - 1\n    x1  ball abscissa at time t\n");
    my_putstr("    y1  ball ordinate at time t\n    z1  ball altitude");
    my_putstr(" at time t\n    n   time shift (greater than or equal to");
    my_putstr(" zero, integer)\n");
}
