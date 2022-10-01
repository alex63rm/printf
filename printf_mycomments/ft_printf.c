/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:23:07 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/01 15:23:52 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* Logic approach of this project
1. start reading the string until you find a % character
2. When the % character is found, we have to determine the type of the variable of the next char
3. Seguir en la lista de variables va_arg, ver como cargarlas

*/

int	ft_printf(char const *str, ...)		//printf returns an int, all the bytes that will be printed
{
	va_list	args;		// I am going to save the variable arguments in this variable of type va_list
	size_t	len;		// counter of the lenght of str, which is the return value in bytes of printf
	int	i; 				// local counter in this function
	
	len = 0;
	i = 0;
	while(str[i])
	{
		if(str[i] != '%')
			write(1, &str[i], 1);
		if(str[i] == '%')
			ft_checkvar(&str[++i], len);	
		i++;
	}
	write(1, "\n", 1);
	
	va_start(args, str);	// va_start(where I will save them, last fixed argument)

	va_arg(args, char);
	va_arg(args, int);

	va_end(args);
	
	return(len);

}
