NAME = libft.a
#BONUS_NAME = .bonus

SOURCES =	ft_isalnum.c ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strncmp.c ft_strrchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			ft_split.c ft_itoa.c ft_strmapi.c

OBJECTS = $(SOURCES:.c=.o)

#BONUSS =		

#BONUS_OBJS = $(BONUSS:.c=.o)

CFLAGS = -Wall -Wextra -Werror
REMOVE = rm -f
CC = gcc

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

#bonus: $(BONUS_NAME)

clean:
	$(REMOVE) $(OBJECTS) 

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

#$(BONUS_NAME): $(OBJECTS) $(BONUS_OBJS)
#	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJS)
#	ar rcs $(BONUS_NAME) $(OBJECTS) $(BONUS_OBJS)

.PHONY: all clean fclean re