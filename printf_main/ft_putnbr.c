/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:33:31 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/08 13:01:17 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_len_nbr(int n)
{
	size_t	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

size_t	ft_putnbr(int n)
{
	size_t	len_nbr;

	len_nbr = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11), 11);
	if (n < 0)
	{
		len_nbr += ft_putchar('-');
		n = n * -1;
	}
	len_nbr += ft_len_nbr(n);
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	return (len_nbr);
}
