/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 03:21:36 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/10 04:53:09 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{
	long long int	lc;

	lc = (long long int) nb;
	if (lc < 0)
	{
		lc = lc * (-1);
		write (1, "-", 1);
	}
	if (lc / 10)
		ft_putnbr(lc / 10);
	ft_putchar((lc % 10) + 48);
}
/*int	main(void)
{
	ft_putnbr(-2147483648);
}*/
