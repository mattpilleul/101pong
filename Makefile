##
## EPITECH PROJECT, 2019
## Project
## File description:
## Makefile
##

SRCS	=	main.c			\
		lib/my/my_getnbr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_strlen.c	\
		lib/my/my_getfloat.c	\
		lib/my/man_disp.c	\
		lib/my/my_putstr.c	\
		lib/my/my_check_f.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_strcmp2.c

OBJ	=	$(SRCS:.c=.o)

NAME	=	101pong

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)	-lm

clean:
	rm -f $(OBJ)
	rm -f vgcore.*

fclean:	clean
	rm -f $(NAME)

re:	fclean all
