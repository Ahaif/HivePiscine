# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -Werror

# Executable Name
NAME = rush-02

# Source Files
SRCS = main.c parser.c utils.c

# Object Files
OBJS = $(SRCS:.c=.o)

# Compile the program
all: $(NAME)

# Link the object files to create the executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Compile .c files into .o files and include the header file
%.o: %.c rush02.h
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -f $(OBJS)

# Remove everything (object files + executable)
fclean: clean
	rm -f $(NAME)

# Recompile everything from scratch
re: fclean all
