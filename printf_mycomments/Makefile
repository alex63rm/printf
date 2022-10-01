# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 21:16:11 by alejarod          #+#    #+#              #
#    Updated: 2022/10/01 13:09:14 by alejarod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRCS) $(INCLUDES)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf *.o

fclean: clean			#it executes clean and then removes the .a file too
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

