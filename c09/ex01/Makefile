# Compiler and Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = srcs
INCDIR = includes

# Source and Object Files
SRC = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c \
      $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJ = $(SRC:.c=.o)

# Library Name
NAME = libft.a

# Default Rule
all: $(NAME)

# Compiling Objects
%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

# Create the Static Library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Remove Object Files
clean:
	rm -f $(OBJ)

# Remove Library and Object Files
fclean: clean
	rm -f $(NAME)

# Rebuild Everything
re: fclean all

.PHONY: all clean fclean re
