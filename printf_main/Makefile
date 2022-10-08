# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 20:23:42 by alejarod          #+#    #+#              #
#    Updated: 2022/10/08 13:02:00 by alejarod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_check_format.c ft_printf.c ft_putchar.c ft_puthex_lower.c ft_puthex_upper.c ft_putnbr.c \
ft_putnbr_u.c ft_putstr.c ft_putptr.c 

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra 
AR = ar rcs 

#---flag rules---

%.o: %.c
	$(CC) -c $(CFLAGS) $(SRCS)

#---subject---

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
