# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 11:03:22 by adjoly            #+#    #+#              #
#    Updated: 2023/11/04 15:37:27 by adjoly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang

SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strdup.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlcat.c \
		ft_strjoin.c \
	
OBJS = $(SRCS:.c=.o)

FLAGS = -Werror -Wall -Wextra

HEADER = libft.h

$(NAME): $(OBJS)
	ar -rcs	$(NAME) $(OBJS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -I $(HEADER) $< -c -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean