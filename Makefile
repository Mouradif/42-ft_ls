NAME = ft_ls

SRC = src/main.c

CFLAGS = -Wall -Wextra -Werror

$(NAME): all

all:
	gcc $(CFLAGS) -Iinc -o $(NAME) $(SRC)

fclean:
	rm $(NAME)
