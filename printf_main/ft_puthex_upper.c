/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:21:59 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/08 12:59:16 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_len_hex(unsigned int hex)
{
	size_t	i;

	i = 1;
	while (hex >= 16)
	{
		hex = hex / 16;
		i++;
	}
	return (i);
}

size_t	ft_puthex_upper(unsigned int hex)
{
	size_t	len_hex;

	len_hex = 0;
	len_hex += ft_len_hex(hex);
	if (hex >= 16)
		ft_puthex_upper(hex / 16);
	ft_putchar("0123456789ABCDEF"[hex % 16]);
	return (len_hex);
}
