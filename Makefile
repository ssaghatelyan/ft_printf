NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -Ilibft

SRC = ft_printf.c \
      ft_print_char.c \
      ft_print_string.c \
      ft_print_int.c \
      ft_print_unsigned_int.c \
      ft_print_hex.c \
      ft_print_pointer.c \
	  ft_conversion.c

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	make -C libft clean

fclean: clean
	$(RM) $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re
