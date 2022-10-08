/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:48:15 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/08 12:18:39 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

size_t	ft_putchar(int c)
{
	write(1, &c, 1);	// Step 1. Write on screen
	return(1);			// Step 2. Return the length value
}
