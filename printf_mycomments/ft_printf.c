/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:23:07 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/08 12:17:31 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)		//printf returns an int, all the bytes that will be printed
{
	va_list	args;		// create a va_list where the arguments will be stored
	size_t	len;		// counter of the lenght of str, which is the return value of printf
	int	i; 				// local counter in this function
	
	va_start(args, str);	// va_start(where I will save the varaiables, points to the last fixed argument)
	
	len = 0;
	i = 0;
	while(str[i])
	{
		if(str[i] != '%')
		{
			write(1, &str[i], 1);
			len++;
		}
		else if(str[i] == '%')
			len = ft_check_format(&str[++i], len, args);	// i need to pass the len and the args to the function
		i++;
	}
	va_end(args);		// end the list
	return((int)len);
}
