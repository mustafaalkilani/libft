# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/19 17:59:19 by malkilan          #+#    #+#              #
#    Updated: 2025/08/24 03:44:22 by mustafa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

FILENAME	= ft_*.c
OBJS 		= $(FILENAME:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
CFLAGS += -I libft.h

all: $(NAME)

$(NAME):
	$(CC) -c $(FILENAME)
	ar rc $(NAME) $(OBJS)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC -Wall -Wextra -Werror $(FILENAME)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)