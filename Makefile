NAME = libft.a
OBJ_F = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c\
 ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c\
  ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_isalpha.c\
   ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c\
   ft_tolower.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strlcat.c
OBJ_F_PT2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c\
 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c\
 ft_split.c
CFLAGS = -Wall -Wextra -Werror
HEADER_FILES = libft.h

OBJ = $(OBJ_F:.c=.o) $(OBJ_F_PT2:.c=.o)

NAME = libft.a

all: $(NAME)
so: libft.so

$(NAME): $(OBJ)
	ar -rc $@ $^

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

%.so: $(OBJ)
	$(CC) -shared -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all

.PHONY: all clean fclean re