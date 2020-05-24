/*
** EPITECH PROJECT, 2019
** Project
** File description:
** main
*/

#include <math.h>
#include "./include/my.h"
#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265358979323846

float teta(float nbv[])
{
    float teta = acos((nbv[0]* nbv[0] + nbv[1] * nbv[1] -
    nbv[2]* nbv[2])/(sqrt(nbv[0] * nbv[0] + nbv[1] * nbv[1] + nbv[2] *
    nbv[2]) *sqrt(nbv[0] * nbv[0] + nbv[1] *
    nbv[1] + nbv[2] * nbv[2])))/2;
    teta = teta * 180/pi;
    return (teta);
    if (teta >= 90){
        teta = 180 - teta;
    }
}

int pong(int n, char **av)
{
    int i = 0;
    int j = 0;
    float nbv[3];
    float nbn[3];

    while (i < 3) {
        my_check_f(av[i + 4]);
        my_check_f(av[i + 1]);
        nbv[i] = atof(av[i + 4]) - atof(av[i + 1]);
        nbn[i] = atof(av[i + 1]) + (n+1) * nbv[i];
        i++;
    }
    disp_pong(nbv, n, nbn, av);
    return (0);
}

void disp_pong(float nbv[], int n, float nbn[], char **av)
{
    float angle = teta(nbv);
    printf("The velocity vector of the ball is:\n(%.2lf, %.2lf, %.2lf)",
    nbv[0], nbv[1], nbv[2]);
    printf("\nAt time t + %i, ball coordinates will be:", n);
    printf("\n(%.2lf, %.2lf, %.2lf)", nbn[0], nbn[1], nbn[2]);
    if (nbn[2] * atof(av[3]) && atof(av[3]) * atof(av[6]) > 0
    && nbv[0] != 0 && nbv[1] != 0 && nbv[2] != 0 && angle != 0){
        printf("\nThe incidence angle is:\n%.2lf degrees\n", angle);
    } else if (angle == 90.00 && atof(av[6]) * nbn[2] < 0) {
        printf("\nThe incidence angle is:\n%.2lf degrees\n", angle);
    } else {
        printf("\nThe ball won't reach the paddle.\n");
    }
    return (0);
}

int main(int ac, char **av)
{
    int n;

    if (av[1] == NULL)
        return (84);
    if (my_strcmp2(av[1], "-h") == 1) {
        man_disp();
        return (84);
    }
    if (ac != 8)
        return (84);
    if (av[7][0] == '-')
        return (84);
    n = my_getnbr(av[7]);
    pong(n, av);
    return (0);
}
