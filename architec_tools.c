/*
** EPITECH PROJECT, 2019
** architect_tools.c
** File description:
** tools architec
*/

#include "include/my.h"

void translation(char **argv, int i, double *result, double *matrice)
{
    double x = atof(argv[i + 1]);
    double y = atof(argv[i + 2]);

    v_error(argv[i + 1]);
    v_error(argv[i + 2]);

    printf("Translation along vector (%d, %d)\n",atoi(argv[i + 1]), atoi(argv[i + 2]));
    matrice[2] += x;
    matrice[5] += y;
    result[0]  = result[0] + x;
    result[1]  = result[1] + y;
}

void scaling(char **argv, int i, double *result, double *matrice)
{
    double x = atof(argv[i + 1]);
    double y = atof(argv[i + 2]);

    v_error(argv[i + 1]);
    v_error(argv[i + 2]);
    printf("Scaling by factors %d and %d\n", atoi(argv[i + 1]), atoi(argv[i + 2]));

    for (int p = 0; p < 6; p++) {
        if (p <= 2) {
         matrice[p] = matrice[p] * x;
        } else {
         matrice[p] = matrice[p] * y;
        }
    }

    result[0] = result[0] * x;
    result[1] = result[1] * y;
}

void rotation(char **argv, int i, double *result, double *matrice)
{
    double matrice_r[9];
    double x = 0;
    double y = 0;
    double z = result[0];

    printf("Rotation by a %s degree angle\n", argv[i + 1]);
    x = cos(atof(argv[i + 1]) * M_PI / 180);
    y = sin(atof(argv[i + 1]) * M_PI / 180);
    matrice_rotation(&matrice_r[0], x, y);
    multiple_matrice(&matrice[0], &matrice_r[0]);
    result[0] = z * matrice_r[0] + result[1] * matrice_r[1];
    result[1] = z * matrice_r[3] + result[1] * matrice_r[4];
}

void symetry(char **argv, int i, double *result, double *matrice)
{
    double matrice_s[9];
    double x = 0;
    double y = 0;
    double z = result[0];

    printf("Reflection over an axis with an inclination angle of %s degrees\n", argv[i + 1]);
    x = cos(2 * atof(argv[i + 1]) * M_PI / 180);
    y = sin(2 * atof(argv[i + 1]) * M_PI / 180);
    matrice_sym(&matrice_s[0], x, y);
    multiple_matrice(&matrice[0], &matrice_s[0]);
    result[0] = z * matrice_s[0] + result[1] * matrice_s[1];
    result[1] = z * matrice_s[3] + result[1] * matrice_s[4];
}
