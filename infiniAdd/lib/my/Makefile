##
## EPITECH PROJECT, 2019
## make
## File description:
## files
##

SRC	=	my_putchar.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_strlen.c			\
		my_swap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
		rm -rf *.o
		rm -rf libmy.a

fclean:		clean

