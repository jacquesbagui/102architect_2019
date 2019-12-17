##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile 102architect
##

NAME    =	102architect

SRC     =	main.c	\
			102architect.c	\
			architec_tools.c	\
			do_error.c	\
			my_str_isnum.c	\
			my_strlen.c	\
			utils.c
OBJ     =	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	cc $(OBJ) -o $(NAME) -lm
clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
