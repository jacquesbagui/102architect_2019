/*
** EPITECH PROJECT, 2019
** do_error.c
** File description:
** do_error
*/
#include "include/my.h"

int v_error(char *str)
{
	if (!my_str_isnum(str)) {
		write(2, str, my_strlen(str));
		return (84);
	}
}
