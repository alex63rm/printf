/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:35:07 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/06 22:15:05 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	if (!str)			// if I receive a null string I have to return (NULL), 6 chars.
	{
		write(1, "(null)", 6);
		return (6);
	}
		//return (write(1, "(null)", 6));
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return(i);
}
