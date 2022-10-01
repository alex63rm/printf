/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkvar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:55:08 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/01 15:15:29 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

	size_t	ft_checkvar(char const *ptr, size_t len)	//void *ptr, int i
	{
		if(*ptr == 'c')
			write(1, "1", 1);
		len++;
		
		return(len);
		
	}
