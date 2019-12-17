/*
** EPITECH PROJECT, 2019
** 102architec
** File description:
** architect
*/

#include "include/my.h"

void do_architec(double *result, double *matrice, char **argv, int argc)
{
    int i = 3;

    while (i < argc) {
        if ((argv[0] == '-' && argv[1] == 't') || (argv[0] == '-' && argv[1] == 'z')) {
            if ((i + 3) <= argc) {
                if (argv[0] == '-' && argv[1] == 't') {
                    translation(argv, i, &result[0], &matrice[0]);
                } else {
                    scaling(argv, i, &result[0], &matrice[0]);
                }
            } else {
                return (84);
            }
            i = i + 3;
        } else if((argv[0] == '-' && argv[1] == 'r') || (argv[0] == '-' && argv[1] =='s')) {
             if ((i + 2) <= argc) {
                if (argv[0] == '-' && argv[1] == 'r') {
                    rotation(argv, i, &result[0], &matrice[0]);
                } else {
                    symetry(argv, i, &result[0], &matrice[0]);
                }
            } else {
                return (84);
            }
            i = i + 2;
        } else {
            return (84);
        }

    }
}
