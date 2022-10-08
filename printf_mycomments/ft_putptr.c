/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:13:55 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/08 12:21:29 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_address_len(size_t address)
{
	size_t	i;

	i = 1;	
	while (address >= 16)
	{
		address = address / 16;
		i++;
	}
	return(i);
}

size_t ft_putptr(size_t address)
{
	size_t	address_len;
	
	address_len = 0;
	address_len += ft_address_len(address);
	if(address >= 16)
		ft_putptr(address / 16);
	ft_putchar("0123456789abcdef"[address % 16]);
	return(address_len);
}
