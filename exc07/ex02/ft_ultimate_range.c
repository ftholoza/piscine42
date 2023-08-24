/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:00:36 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/24 16:21:06 by ftholoza         ###   ########.fr       */
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

int	ft_strlen(int *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	sizelist;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	sizelist = max - min;
	*range = malloc(sizeof (int) * sizelist);
	if (!range)
		return (-1);
	while (i < sizelist)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	int i = 0;
	int	*range;
	int res = ft_ultimate_range(&range, 11, 10);
	printf("%d\n", res);
	if (range == NULL)
		return(1);
	while (i < 11)
	{
		printf("%d", range[i]);
		i++;
	}
	free (range);
}*/
