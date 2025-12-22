NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a

SRC = mandatory/push_swap.c mandatory/ft_check.c mandatory/ft_help.c mandatory/ft_help1.c\
	mandatory/create_stack.c mandatory/sort.c mandatory/algo_sort.c \
	mandatory/algo_sort1.c mandatory/algo_sort2.c mandatory/operation_swap.c mandatory/operation_push.c \
	mandatory/operation_rotate.c mandatory/operation_reverse_rotate.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C libft
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C libft
	rm -f $(OBJ)

fclean: clean
	$(MAKE) fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re