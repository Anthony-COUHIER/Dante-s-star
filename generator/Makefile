##
## EPITECH PROJECT, 2019
## CPE_dante_2019
## File description:
## Makefile
##

NAME	= generator

CC	= gcc

RM	= rm -f

SRCS	= ./src/generator.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -I ../lib/include/
CFLAGS += -I ./include/
CFLAGS += -Wall -Wextra -g3

LDFLAGS = -g3

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
