/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:33:31 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/02 21:33:09 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_putnbr(int n)
{
	if (n == -2147483648)
		write(1,"-2147483648", 11);
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	// recursive
	if (n > 9)
		ft_putnbr(n / 10);			// divide the number again by 10;
	ft_putchar((n % 10) + '0');		// write digit by digit n % 10;
	return (n);
}
