/*
** EPITECH PROJECT, 2019
** utils.c
** File description:
** utils
*/

#include "include/my.h"

float degToRad(float x)
{
    float result;

    result = (x * M_PI / 180);
    return (result);
}

void multiple_matrice(double *m, double *m2)
{
  double m3[9] = {m[0], m[1], m[2], m[3], m[4], m[5], m[6], m[7], m[8]};

  m[0] = m3[0] * m2[0] + m3[1] * m2[3] + m3[2] * m2[6];
  m[1] = m3[0] * m2[1] + m3[1] * m2[4] + m3[2] * m2[7];
  m[2] = m3[0] * m2[2] + m3[1] * m2[5] + m3[2] * m2[8];
  m[3] = m3[3] * m2[0] + m3[4] * m2[3] + m3[5] * m2[6];
  m[4] = m3[3] * m2[1] + m3[4] * m2[4] + m3[5] * m2[7];
  m[5] = m3[3] * m2[2] + m3[4] * m2[5] + m3[5] * m2[8];
  m[6] = m3[6] * m2[0] + m3[7] * m2[3] + m3[8] * m2[6];
  m[7] = m3[6] * m2[1] + m3[7] * m2[4] + m3[8] * m2[7];
  m[8] = m3[6] * m2[2] + m3[7] * m2[5] + m3[8] * m2[8];
}

void matrice_rotation(double *matrice_r, double r0, double r1)
{
    matrice_r[0] = r0;
    matrice_r[1] = -r1;
    matrice_r[2] = 0;
    matrice_r[3] = r1;
    matrice_r[4] = r0;
    matrice_r[5] = 0;
    matrice_r[6] = 0;
    matrice_r[7] = 0;
    matrice_r[8] = 1;

    for (int i = 0; i < 9; i++)
        if (matrice_r[i] == 0)
            matrice_r[i] = 0;
}

void matrice_sym(double *matrice_s, double s0, double s1)
{
    matrice_s[0] = s0;
    matrice_s[1] = s1;
    matrice_s[2] = 0;
    matrice_s[3] = s1;
    matrice_s[4] = -s0;
    matrice_s[5] = 0;
    matrice_s[6] = 0;
    matrice_s[7] = 0;
    matrice_s[8] = 1;
    
    for (int i = 0; i < 9; i++)
        if (matrice_s[i] == 0)
            matrice_s[i] = 0;
}
