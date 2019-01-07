##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	my_cat

SRC	=	cat.cpp

SRC_TEST	=

SRC_UT		=

LDFLAGS		=	-lcriterion -lgcov --coverage

OBJ	=	$(SRC:.cpp=.o)


CC	=	g++


CFLAGS	=	-W -Wall -Wextra -pedantic -Werror -std=c++14 -Iinclude/ -g3


RM	=	rm -f


all:	$(NAME)


tests_run:
		g++ -o unit-tests $(LDFLAGS) $(SRC_TEST) $(SRC_UT) $(CFLAGS)
		./unit-tests
		gcov *
		mkdir gc
		mv *.gcda *.gcno *.gcov gc/

$(NAME) :	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)


clean :
	$(RM) $(OBJ)
	rm -rf *.gcda *.gcno *.gcov
	rm -rf unit-tests

fclean : clean
	$(RM) $(NAME)

re : fclean all


.PHONY : all clean fclean re
