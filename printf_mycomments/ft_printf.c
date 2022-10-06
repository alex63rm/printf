/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:23:07 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/06 21:21:10 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* Logic approach of this project
1. start reading the string until you find a % character
2. When the % character is found, we have to determine the type of the variable of the next char
3.

*/

int	ft_printf(char const *str, ...)		//printf returns an int, all the bytes that will be printed
{
	va_list	args;		// create a va_list where the arguments will be stored
	size_t	len;		// counter of the lenght of str, which is the return value in bytes of printf
	int	i; 				// local counter in this function
	
	va_start(args, str);	// va_start(where I will save them, last fixed argument)
	
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
		{
			len = ft_check_format(&str[++i], len, args);	// i nee to pass the len and the args to the function
			//control de espacios?
	
		}
		i++;
	}
	va_end(args);		// end the list
	return(len);
}
