/*
** EPITECH PROJECT, 2019
** 102architec
** File description:
** architect
*/

#include "include/my.h"

int is_flag(char *argv, char flag)
{
    if (argv[0] == '-' && argv[1] == flag) {
        return (1);
    }
	return (0);
}

void do_architec(double *result, double *matrice, char **argv, int argc)
{
    int i = 3;

    while (i < argc) {
        if (is_flag(argv[i], 't') || is_flag(argv[i], 'z')) {
            if ((i + 3) <= argc) {
                if (is_flag(argv[i], 't')) {
                    translation(argv, i, &result[0], &matrice[0]);
                } else {
                    scaling(argv, i, &result[0], &matrice[0]);
                }
            } else {
                printf("After -t/-h option, you must enter two numbers.\n");
                return (84);
            }
            i = i + 3;
        } else if(is_flag(argv[i], 'r') || is_flag(argv[i], 's')) {
             if ((i + 2) <= argc) {
                if (is_flag(argv[i], 'r')) {
                    rotation(argv, i, &result[0], &matrice[0]);
                } else {
                    symetry(argv, i, &result[0], &matrice[0]);
                }
            } else {
                printf("After -t/-h option, you must enter two numbers.\n");
                return (84);
            }
            i = i + 2;
        } else {
            printf("Error.\n");
            return (84);
        }

    }
}
