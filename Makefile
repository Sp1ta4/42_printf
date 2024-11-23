CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes

SRCS = $(shell find ./sources -maxdepth 1 -name "*.c")
OBJS = $(SRCS:.c=.o)
SRCS_B = $(shell find ./sources_bonus -maxdepth 1 -name "*_bonus.c")
OBJS_B = $(SRCS_B:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

bonus: $(OBJS_B)
	ar -rcs $(NAME) $^

%.o: %.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
