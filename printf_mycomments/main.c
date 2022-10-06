/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:05:32 by alejarod          #+#    #+#             */
/*   Updated: 2022/10/06 22:13:14 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int	main(void)
{
	int a;
	int b;
	
	char c = '9';
	char str[] = "";
	int j = 42;
	unsigned int k = 10000;
	unsigned int hex = 0x67;
	unsigned int hex2 = 6565;
	

	//me falla si me meten un numero o una letra no identificada despues del %
	//los numeros avanzan espacios
	//la funcion original mete espacios
	
	a = ft_printf("My: char is %c, my str is %s, percentage is %%home, final int is %d, \
	unsigned int is %u, hex lower is %x, upper hex is %X", c, str, j, k, hex, hex2);
	write(1, "\n", 1);
	b = printf("Or: char is %c, my str is %s, percentage is %%home, final int is %d, \
	unsigned int is %u, hex lower is %x, upper hex is %X", c, str, j, k, hex, hex2);
	printf("\n%d\n %d\n", a , b);
	return(0);
}
