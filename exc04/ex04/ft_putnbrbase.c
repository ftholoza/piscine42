/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:18:52 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/17 18:18:26 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"
#include "unistd.h"
#include "stdio.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_checkintru(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (!(base[i] > 32 && base[i] < 127))
			return (1);
		i++;
	}
	return (0);
}

int	ft_ckdouble(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putbase(int nbr, int basec, char *base )
{
	long long int	nb;

	nb = (long long int) nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb *(-1);
	}
	if (nb / basec)
	{
		ft_putbase(nb / basec, basec, base);
	}
	write(1, &base[nb % basec], 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	basec;
	int	i;

	if (ft_ckdouble(base))
		return ;
	if (ft_checkintru(base))
		return ;
	i = 0;
	while (base[i])
		i++;
	basec = i;
	ft_putbase(nb, basec, base);
}
/*int	main(void)
{
	int nbr;

	nbr = 57;
	char	base[] = "013456789abcdef";
	ft_putnbr_base(nbr, base);
}*/
int	main(int argc, char **argv)
{		
	int nbr;
	
	(void) argc;
	nbr = atoi(argv[1]);
	ft_putnbr_base(nbr, argv[2]);
}
