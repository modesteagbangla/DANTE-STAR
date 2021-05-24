##
## EPITECH PROJECT, 2020
## B-CPE-200-COT-2-1-dante-yemalin.agbangla
## File description:
## Makefile
##

NAME	= solver

CC	= gcc

RM	= rm -f

SRCS	= $(shell find */*.c)

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
