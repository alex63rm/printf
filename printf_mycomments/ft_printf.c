/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:23:07 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/30 20:34:30 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;		//I am going to save the arguments in this variable
	unsigned int num_args;
	//int	i;

	va_start(args, 2);



	ft_printf("Hello", 1, 2);
	printf("Hello", 1, 2);

	return(0);

}
