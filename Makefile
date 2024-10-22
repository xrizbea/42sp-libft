NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_strlen.c ft_isascii.c # Verifique se todos os nomes estão corretos e completos
OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
