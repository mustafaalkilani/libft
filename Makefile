# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malkilan <malkilan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/19 17:59:19 by malkilan          #+#    #+#              #
#    Updated: 2025/08/23 14:11:54 by malkilan         ###   ########.fr        #
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

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)