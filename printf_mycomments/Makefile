# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 21:16:11 by alejarod          #+#    #+#              #
#    Updated: 2022/09/30 20:18:47 by alejarod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

INCLUDES = libftprint.h

CC = gcc
CFLAGS = -Wall -Werror -Wextra

%.o: %.c
	$(CC) -c $(CFLAGS) $^	#it means take what is on both sides, .o and .c

all: $(NAME)

$(NAME): $(SRCS) $(INCLUDES)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf *.o

fclean: clean			#it executes clean and then removes the .a file too
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:

