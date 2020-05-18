##
## EPITECH PROJECT, 2019
## CPE_dante_2019
## File description:
## Makefile
##

TESTS		=	./tests/test_check_map.c \
				./solver/check_err.c

NAME		= unit_tests

RM			= rm -f

CRITERION	= --coverage -lcriterion -I ./solver/ -I ./generator/

all:
	make -C generator
	make -C solver

clean:
	make -C generator clean
	make -C solver clean
	$(RM) *.gcda *.gcno

fclean: clean
	make -C generator fclean
	make -C solver fclean
	$(RM) $(NAME);

re: fclean all

tests_run :
	make -C ./lib/
	gcc -o $(NAME) $(TESTS) $(CRITERION) ./lib/lib.a
	./unit_tests

.PHONY: all clean fclean re
