/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:05:32 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/02 20:56:03 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int	main(void)
{
	char c = '9';
	char str[] = "Hello";
	int j = -433847;
	

	//me falla si me meten un numero o una letra no identificada despues del %
	//los numeros avanzan espacios
	//la funcion original mete espacios
	
	ft_printf("My: char is %c, my str is %s, percentage is %%home, final int is %d", c, str, j);
	write(1, "\n", 1);
	   printf("Or: char is %c, my str is %s, percentage is %%home, final int is %d", c, str, j);
	return(0);
}
