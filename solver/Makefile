##
## EPITECH PROJECT, 2019
## CPE_dante_2019
## File description:
## Makefile
##

NAME	= solver

CC	= gcc

RM	= rm -f

SRCS	= 	./src/solver.c \
			./src/free_arr.c \
			./src/check_err.c \
			./src/create_map.c \
			./src/clean.c \
			./src/path.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -I ../lib/include/
CFLAGS += -I ./include/
CFLAGS += -Wall -Wextra -g3 -Ofast -march=native

all: $(NAME)

$(NAME): $(OBJS)
	make -C ../lib/
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS) ../lib/lib.a

clean:
	make -C ../lib/ clean
	$(RM) $(OBJS)

fclean: clean
	make -C ../lib/ fclean
	$(RM) $(NAME)

re: fclean all
