# Project name
NAME = libft.a

# .c files
SRC = $(ft_*.c)

# .h files
DEPS = libft.h

# Object files
OBJ = $(SRC:.c = .o)

# Compilator
CC = gcc

# Flags
CFLAGS = -Wall -Wextra -Werror

# Compilation
all: $(NAME)

# Comp lib
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Comp all files
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

# Clean obj files
clean:
	rm -f $(OBJ)

# Clean obj files and lib
fclean: clean
	rm -f $(NAME)

# Clean all
re: fclean all

# Ghost files
.PHONY: all clean fclean re