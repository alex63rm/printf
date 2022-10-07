/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:35:07 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/07 22:41:10 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *str)
{
	size_t i;

	i = 0;
	if (!str)			// if I receive a null string I have to return (NULL), 6 chars.
	{
		ft_putstr("(null)");	//return (write(1, "(null)", 6));
		return(6);
	}
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return(i);
}
