# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayidbelh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 21:40:52 by ayidbelh          #+#    #+#              #
#    Updated: 2021/11/28 21:48:36 by ayidbelh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = 	ft_printf.c ft_char.c \
	  	ft_decimal.c ft_hex.c \
		ft_pointer.c ft_printf.c \
		ft_string.c ft_printf_utils.c

OBJ = $(SRC:.c=.o)

$(NAME): ft_printf.h
	$(CC) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
