# @Author: Dahak Déborah <suika>
# @Date:   26-08-2019
# @Email:  dahak.deborah@gmail.com
# @Project: Reprise
# @Filename: Makefile
# @Last modified by:   suika
# @Last modified time: 26-08-2019

CC	= @gcc

RM	= @rm -f

CFLAGS	+= -W -Wall -Wextra -Werror -g -ansi -pedantic
CFLAGS	+= -I./include

NAME	= ./my/octolib.a

SRCS	= main.c \
				str.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME) clean

$(NAME):	$(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Creating object files..."
	@echo "Compiling octolib..."

clean:
	$(RM) $(OBJS)
	@echo "Removing object files..."

fclean: clean
	$(RM) $(NAME)
	@echo "Removing octolib.a..."

re: fclean all

.PHONY: all clean fclean re
