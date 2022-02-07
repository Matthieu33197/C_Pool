##
## EPITECH PROJECT, 2019
## makefile
## File description:
## make to file
##

SRC     =	cat.c			\

OBJ	=	$(SRC:.c=.o)

NAME 	= 	cat

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy

clean:
	make clean -C lib/my
	rm -rf $(OBJ)

re:	fclean all

fclean: clean
	rm -rf $(NAME)

.PHONY: all clean fclean re
