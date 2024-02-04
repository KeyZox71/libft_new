# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 11:03:22 by adjoly            #+#    #+#              #
#    Updated: 2024/02/04 15:15:14 by adjoly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

SRCS = is/ft_isalnum.c \
		is/ft_isalpha.c \
		is/ft_isascii.c \
		is/ft_isdigit.c \
		is/ft_isprint.c \
		lst/ft_lstadd_back.c \
		lst/ft_lstadd_front.c \
		lst/ft_lstclear.c \
		lst/ft_lstdelone.c \
		lst/ft_lstiter.c \
		lst/ft_lstlast.c \
		lst/ft_lstmap.c \
		lst/ft_lstnew.c \
		lst/ft_lstsize.c \
		mem/ft_bzero.c \
		mem/ft_calloc.c \
		mem/ft_memchr.c \
		mem/ft_memcmp.c \
		mem/ft_memcpy.c \
		mem/ft_memmove.c \
		mem/ft_memset.c \
		print/ft_putchar.c \
		print/ft_putchar_fd.c \
		print/ft_putendl_fd.c \
		print/ft_putnbrbase.c \
		print/ft_putnbrbase_fd.c \
		print/ft_putnbr.c \
		print/ft_putnbr_fd.c \
		print/ft_putstr.c \
		print/ft_putstr_fd.c \
		str/ft_atoi.c \
		str/ft_itoa.c \
		str/ft_split.c \
		str/ft_strchr.c \
		str/ft_strdup.c \
		str/ft_striteri.c \
		str/ft_strjoin.c \
		str/ft_strlcat.c \
		str/ft_strlcpy.c \
		str/ft_strlen.c \
		str/ft_strmapi.c \
		str/ft_strncmp.c \
		str/ft_strnstr.c \
		str/ft_strrchr.c \
		str/ft_strtrim.c \
		str/ft_substr.c \
		str/ft_tolower.c \
		str/ft_toupper.c \

OBJS = $(SRCS:.c=.o)

FLAGS = -Werror -Wall -Wextra -g

HEADERS = libft.h

LIB = print/printf/libftprintf.a \
		io/get_next_line/get_next_line.a

$(NAME): $(OBJS)
	make -C io/get_next_line/
	make -C print/printf/
	ar -rcs	$(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -I $(HEADERS) $< -c -o $@

all: $(NAME)

clean:
	make -C io/get_next_line/ clean
	make -C print/printf clean
	rm -f $(OBJS)

fclean: clean
	make -C io/get_next_line/ fclean
	make -C print/printf/ fclean
	rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
