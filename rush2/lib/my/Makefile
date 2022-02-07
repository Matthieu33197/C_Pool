##
## EPITECH PROJECT, 2019
## make
## File description:
## files
##

SRC	=	my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_find_prime_sup.c		\
		my_isneg.c			\
		my_is_prime.c			\
		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_strlen_of.c 			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncpy.c			\
		my_strupcase.c			\
		my_swap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
		rm -rf *.o

fclean:		clean

