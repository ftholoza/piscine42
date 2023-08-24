/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:27:18 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/24 16:17:19 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

/*void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb / 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0' );
}

void	ft_puttab(int *tab, int sizelist)
{
	int	i;

	i = 0;
	while (i < sizelist)
	{
		ft_putnbr(tab[i]);
		i++;
	}
}*/

int	*ft_range(int min, int max)
{
	int	sizelist;
	int	*list;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	sizelist = max - min;
	list = malloc(sizeof (int) * sizelist);
	if (list == NULL)
		return (list);
	while (i < sizelist)
	{
		list[i] = min;
		min ++;
		i++;
	}
	return (list);
}

/*int	main(void)
{
	int	*list = ft_range(0, 10);
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", list[i]);
		i++;
	}
	free (list);
}*/
