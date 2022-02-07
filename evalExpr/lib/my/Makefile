##
## EPITECH PROJECT, 2019
## makefile
## File description:
## Compile the libmy.
##

SRC	=	my_strlen.c		\
		my_strcpy.c		\
		my_putchar.c		\
		my_putstr.c		\
		my_put_nbr.c		\
		my_evil_str.c		\
		my_getnbr.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a


all:	$(NAME)
$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
	cp $(NAME) ../
	mkdir -p ../../include
	cp my.h ../../include
clean:
		rm -f *.o core
		rm -f *~ core

fclean:		clean
		rm $(NAME)
