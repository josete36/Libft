NAME	= libft.a

SRCS	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strncmp.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

all: $(NAME)

$(NAME):	$(OBJS)
		ar crs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
			${RM} ${NAME}

re:		fclean all

.PHONY: all, clean, fclean, re