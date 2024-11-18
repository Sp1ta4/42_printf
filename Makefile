CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(shell find . -maxdepth 1 -name "*.c")

INCS = ft_printf.h

NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o: %.c $(INCS) Makefile
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
