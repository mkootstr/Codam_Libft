NAME = libft.a
SRC_F = src/ft_memset.c \
 		src/ft_bzero.c \
		src/ft_memcpy.c \
   		src/ft_memccpy.c \
		src/ft_memmove.c \
		src/ft_memchr.c \
		src/ft_memcmp.c \
		src/ft_strlen.c \
		src/ft_strlcpy.c \
		src/ft_strchr.c \
		src/ft_strrchr.c \
		src/ft_strnstr.c \
		src/ft_strncmp.c \
		src/ft_isalpha.c \
		src/ft_isdigit.c \
		src/ft_isalnum.c \
		src/ft_isascii.c \
		src/ft_isprint.c \
		src/ft_toupper.c \
		src/ft_tolower.c \
		src/ft_atoi.c \
		src/ft_calloc.c \
		src/ft_strdup.c \
		src/ft_strlcat.c

SRC_F_PT2 = src/ft_substr.c \
			src/ft_strjoin.c \
			src/ft_strtrim.c \
			src/ft_itoa.c \
			src/ft_putchar_fd.c \
			src/ft_putstr_fd.c \
			src/ft_putendl_fd.c \
			src/ft_putnbr_fd.c \
			src/ft_strmapi.c \
			src/ft_split.c
SRC_F_PT3 = src/get_next_line.c \
			src/get_next_line_utils.c
CFLAGS = -Wall -Wextra -Werror
HEADER_FILES = libft.h get_next_line.h

OBJ_DIR = obj/
SRC_DIR = src/

SRC_FILES = $(SRC_F) $(SRC_F_PT2) $(SRC_F_PT3)
SRC = $(subst $(SRC_DIR),$(OBJ_DIR),$(SRC_FILES:.c=.o))
OBJ = $(SRC)

NAME = libft.a

all: $(NAME)
so: libft.so

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar -rc $@ $^

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

%.so: $(OBJ)
	$(CC) -shared -o $@ $^

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all

.PHONY: all clean fclean re
