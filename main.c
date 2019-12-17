/*
** EPITECH PROJECT, 2019
** main
** File description:
** 102Architec Main
*/

#include "include/my.h"

int main(int argc, char **argv)
{
    double matrice[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    double result[2];
    double x0;
    double y0;
    int j;
    int k;

    if (argc > 4) {
        x0 = atof(argv[1]);
        y0 = atof(argv[2]);
        result[0] = x0;
        result[1] = y0;

        do_architec(result, matrice, argv, argc);

        while (j < 9) {
            printf("%.2f", matrice[j]);
            j++;
            if (j % 3 == 0) {
                printf("\n");
            } else {
                printf("\t");
            }
        }
        printf("(%.2f, %.2f) => (%.2f, %.2f)", atof(argv[1]), atof(argv[2]), result[0], result[1]);
    } else {
        printf("error argument");
        return (84);
    }
    return (0);
}
