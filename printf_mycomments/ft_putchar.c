/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:48:15 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/07 22:34:16 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

size_t	ft_putchar(int c)
{
	write(1, &c, 1);	//this is to write in the screen
	return(1);			// this is the return value of printf
}
