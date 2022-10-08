/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:55:08 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/08 12:55:21 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_check_format(char const *ptr, size_t len, va_list args)
{
	if (*ptr == 'c')
		len += ft_putchar(va_arg(args, int));
	if (*ptr == '%')
		len += ft_putchar('%');
	if (*ptr == 's')
		len += ft_putstr(va_arg(args, char *));
	if (*ptr == 'i' || *ptr == 'd')
		len += ft_putnbr(va_arg(args, int));
	if (*ptr == 'u')
		len += ft_putnbr_u(va_arg(args, unsigned int));
	if (*ptr == 'x')
		len += ft_puthex_lower(va_arg(args, unsigned int));
	if (*ptr == 'X')
		len += ft_puthex_upper(va_arg(args, unsigned int));
	if (*ptr == 'p')
		len += ft_putstr("0x") + ft_putptr(va_arg(args, size_t));
	return (len);
}
