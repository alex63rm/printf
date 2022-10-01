/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:05:32 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/01 14:55:30 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int	main(void)
{
	char c = 'a';
	
	//ft_printf("My: Hello");
	//printf("Or: Hello");
	
	ft_printf("My: char is %c", c);
	printf("Or: char is %c", c);

	return(0);
}
