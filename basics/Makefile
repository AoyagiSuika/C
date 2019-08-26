# @Author: Dahak Déborah <suika>
# @Date:   26-08-2019
# @Email:  dahak.deborah@gmail.com
# @Project: Reprise
# @Filename: Makefile
# @Last modified by:   suika
# @Last modified time: 26-08-2019

CC = gcc

RM = rm -f

CFLAGS += -g -W -Wall -Wextra -Werror -L../lib/my/ -lmy
CFLAGS += -ansi -pedantic -I./include -I../lib/include -I../include

NAME =

SRCS =

OBJS = $(SRCS:.c=.o)

all: $(NAME) clean

$(NAME): $(OBJS)
$(CC) $(OBJS) -o $(NAME) $(CFLAGS)
	@echo "Compiling $(NAME) ..."

lib:
	@echo "Compiling libmy.a ..."
	@make --no-print-directory -C lib/my/

clean:
	@echo "Cleaning object files ..."
$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning executable ..."
$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
