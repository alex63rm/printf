/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:21:59 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/06 20:50:50 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_puthex_upper(unsigned int hex)
{
	if (hex > 16)
		ft_puthex_upper(hex / 16);
	ft_putchar("0123456789ABCDEF"[hex % 16]);
	return(hex);
}
