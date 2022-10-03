/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:09:57 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/03 22:31:21 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_puthex_lower(unsigned int hex)
{
	if (hex > 16)
		ft_puthex_lower(hex / 16);
	ft_putchar("0123456789abcdef"[hex % 16]); //pte entender esta nomenclatura??
	return(hex);
}
