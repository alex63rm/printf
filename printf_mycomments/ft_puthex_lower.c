/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:09:57 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/08 12:19:56 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_len_hex(unsigned int hex)
{
	size_t	i;

	i = 1;
	while (hex >= 16)
	{
		hex = hex / 16;		// divide by 16 to count the number of units received (100, 10, 1 etc)
		i++;
	}
	return(i);
}

size_t	ft_puthex_lower(unsigned int hex)
{
	size_t	len_hex;

	len_hex = 0;
	len_hex += ft_len_hex(hex);		// Step 2. Count the length of the hex number received
	if (hex >= 16)
		ft_puthex_lower(hex / 16);
	ft_putchar("0123456789abcdef"[hex % 16]); // this is needed to print in hex format
	return (len_hex);
}
