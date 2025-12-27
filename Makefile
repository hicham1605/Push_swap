NAME = push_swap
BONUS = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = mandatory/push_swap.c mandatory/ft_check.c mandatory/ft_help.c \
	mandatory/ft_help1.c mandatory/create_stack.c mandatory/sort.c \
	mandatory/algo_sort.c mandatory/algo_sort1.c mandatory/algo_sort2.c \
	mandatory/operation_swap.c mandatory/operation_push.c \
	mandatory/operation_rotate.c mandatory/operation_reverse_rotate.c

SRCB = bonus/push_swap_bonus.c bonus/ft_check.c bonus/create_stack.c \
    bonus/check_commands.c bonus/get_next_line.c bonus/get_next_line_utils.c \
    mandatory/ft_help.c mandatory/ft_help1.c \
    bonus/operation_swap.c bonus/operation_push.c \
    bonus/operation_rotate.c bonus/operation_reverse_rotate.c
OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

bonus: $(BONUS)

$(BONUS): $(OBJB)
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJB) $(LIBFT) -o $(BONUS)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -f $(OBJ) $(OBJB)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(NAME) $(BONUS)

re: fclean all

.PHONY: all bonus clean fclean re
