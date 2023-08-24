/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:01:09 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/04 22:08:13 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb / 10)
		ft_putnbr(nb / 10);
	if (nb % 10)
		ft_putchar((nb % 10) + 48);
	else
		ft_putchar(48);
}

void	ft_print_comb2(void)
{
	int	numb1;
	int	numb2;

	numb1 = 0;
	numb2 = 1;
	while (numb1 <= 98)
	{
		numb2 = numb1 +1;
		while (numb2 <= 99)
		{
			if (numb1 <= 9)
				ft_putchar(48);
			ft_putnbr(numb1);
			ft_putchar(' ');
			if (numb2 <= 9)
				ft_putchar(48);
			ft_putnbr(numb2);
			if (numb1 != 98 || numb2 != 99)
				write(1, ", ", 2);
			numb2++;
		}	
		numb1++;
	}
}
