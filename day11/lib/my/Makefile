##
## EPITECH PROJECT, 2019
## make
## File description:
## files
##

SRC	=	my_putchar.c			\
		my_putstr.c			\
		my_strcpy.c			\
		my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
		rm -rf *.o core

fclean:		clean
	rm -rf $(NAME)
