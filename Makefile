CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes # spell-checker: disable-line

SRCS = $(shell find ./sources -maxdepth 1 -name "*.c")
OBJS = $(SRCS:.c=.o)
SRCS_B = $(shell find ./sources_bonus -maxdepth 1 -name "*_bonus.c")
OBJS_B = $(SRCS_B:.c=.o)
NAME = libftprintf.a # spell-checker: disable-line

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

bonus: $(OBJS_B)
	ar -rcs $(NAME) $^

%.o: %.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_B)

fclean: clean # spell-checker: disable-line
	rm -f $(NAME) a.out

re: fclean all # spell-checker: disable-line

.PHONY: all clean fclean re bonus # spell-checker: disable-line
