NAME	=	ex04

SRC		=	main.cpp \

OBJ		=	$(SRC:.cpp=.o)

CC		=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

.PHONY	:	all clean fclean re

all 	:	$(NAME)

$(NAME)	: 	$(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@rm -f $(NAME)

re		:	fclean all