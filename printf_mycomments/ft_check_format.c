/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:55:08 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/02 21:35:15 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

	size_t	ft_check_format(char const *ptr, size_t len, va_list args)	
	{
		if (*ptr == 'c')
			len += ft_putchar(va_arg(args, int));
		if(*ptr == '%')
		{
			//len++;
			write(1, "%", 1);
		}
		if (*ptr == 's')
			len += ft_strlen(va_arg(args, char *));
/* 		if(*ptr == 'p')
			len += ft_voidptr(va_arg(args, void *)); */
 	if (*ptr == 'i' || *ptr == 'd')		// d and i is the same, digit or integer
			len += ft_putnbr(va_arg(args, int));
			
/* 		if (*ptr == 'u')
			len += ft_putnbr */



		/* else
			ft_putchar(' ');
			len++; */
		
		return(len);
		
	}