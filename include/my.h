/*
** EPITECH PROJECT, 2019
** my
** File description:
** 102architect function
*/

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <stdbool.h>

# ifndef MY_H
# define MY_H

void do_architec(double *result, double *matrice, char **argv, int argc);
void translation(char **argv, int i, double *result, double *matrice);
void scaling(char **argv, int i, double *result, double *matrice);
void rotation(char **argv, int i, double *result, double *matrice);
void symetry(char **argv, int i, double *result, double *matrice);
void multiple_matrice(double *m, double *m2);
void matrice_rotation(double *matrice_r, double r0, double r1);
void matrice_sym(double *matrice_s, double s0, double s1);
int v_error(char *str);
int my_str_isnum(char *str);
int my_strlen(char const *str);
float degToRad(float x);

# endif