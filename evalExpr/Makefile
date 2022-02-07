##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile rush2
##

NAME	=	eval_expr

SRC	=	evalexpr.c		\

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) -Wall -Wextra -Werror -Llib/my -lmy
clean:
		rm -f $(OBJ)
		rm -f *~

fclean:		clean
		make fclean -C lib/my
		rm $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
