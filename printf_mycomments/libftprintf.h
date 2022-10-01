/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:15:26 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/01 15:13:50 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <stdarg.h>	// Añadir la librería para la gestión de las variádicas
# include <unistd.h>

int	ft_printf(char const *str, ...);
size_t	ft_checkvar(char const *ptr, size_t len);

#endif
