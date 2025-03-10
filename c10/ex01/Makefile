# Makefile for ft_cat

NAME = ft_cat
SRC = ft_cat.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Rule to create the binary
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

# Rule to clean object files
clean:
	rm -f $(OBJ)

# Rule to clean both object files and the binary
fclean: clean
	rm -f $(NAME)

# Rule to recompile the program
re: fclean all
