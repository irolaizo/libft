# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 14:21:00 by irolaizo          #+#    #+#              #
#    Updated: 2023/10/18 16:17:12 by irolaizo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_strlen.c ft_memmove.c ft_toupper.c \
	ft_tolower.c ft_strchr.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_memmove.c \
	ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_strncmp.c ft_putnbr_fd.c \
	ft_memchr.c ft_atoi.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_striteri.c ft_striteri.c ft_strmapi.c ft_strtrim.c \
	ft_itoa.c ft_split.c

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

OBJS = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@ $(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re
