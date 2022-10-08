/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:15:26 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/03 22:23:54 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_printf_H
# define ft_printf_H

# include <stdio.h>
# include <stdarg.h>	// This is the library for the variadic functions
# include <unistd.h>

int		ft_printf(char const *str, ...);
size_t	ft_check_format(char const *ptr, size_t len, va_list args);
size_t	ft_putchar(int c);
size_t	ft_putstr(char *str);
size_t	ft_putnbr(int j);
size_t	ft_putnbr_u(unsigned int k);
size_t	ft_puthex_lower(unsigned int hex);
size_t	ft_puthex_upper(unsigned int hex);
size_t	ft_putptr(size_t address);

#endif
