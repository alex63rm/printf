/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:00:55 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/07 20:18:12 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_len_nbr(unsigned int n)
{
	size_t	i;
	
	i = 1;
	while(n > 9)
	{
		n = n /10;
		i++;
	}
	return (i);
}

size_t ft_putnbr_u(unsigned int n)
{
	size_t	len_nbr;

	len_nbr = 0;
	len_nbr += ft_len_nbr(n);
	if (n > 9)
		ft_putnbr_u(n / 10);
	ft_putchar((n % 10) + '0');
	return (len_nbr);
}

