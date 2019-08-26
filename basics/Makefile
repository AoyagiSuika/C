# @Author: Dahak Déborah <suika>
# @Date:   26-08-2019
# @Email:  dahak.deborah@gmail.com
# @Project: Reprise
# @Filename: Makefile
# @Last modified by:   suika
# @Last modified time: 26-08-2019

CC = gcc

RM = rm -f

CFLAGS += -Wextra -Wall -Werror
CFLAGS += -ansi -pedantic
CFLAGS += -I.

NAME =

SRCS =

OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
$(RM) $(OBJS)

fclean: clean
$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
