/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 02:36:04 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/04 22:07:09 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_display(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' ;
	b = '1' ;
	c = '1' ;
	while (1)
	{
		if (a == '7' && b == '8' && c == '9')
			break ;
		if (c == '9')
		{
			b++;
			c = b;
		}
		if (b == '9')
		{
			a++;
			b = a + 1;
			c = b;
		}
		c++;
		ft_display(a, b, c);
	}	
}
