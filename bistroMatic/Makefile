##
## EPITECH PROJECT, 2019
## make
## File description:
## make a file
##

CC		=		gcc -g3

RM		=		rm -rf

SRC		=		do_op.c		\
				dp.c		\
				main.c		\
				maths/infin_add.c		\
				maths/infin_sub.c		\
				utils/is_operand.c		\
				utils/my_evil_str.c		\
				utils/my_getnbr.c		\
				utils/my_putchar.c		\
				utils/my_put_nbr.c		\
				utils/my_putstr.c		\
				utils/my_revstr.c		\
				utils/my_strcmp_multi.c		\
				utils/my_strcmp_sub.c		\
				utils/my_strlen.c		\
				utils/my_swap.c

OBJ		=		$(SRC:.c=.o)

NAME		=		calc

all: $(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(CFLAGS) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all
