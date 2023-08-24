/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 23:16:16 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/17 23:51:30 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

int	ft_checkillegalws(char str)
{
	if (!(str >= 9 && str <= 13 && str == 32 || str > 32 && str < 127))
		return (1);
	else
		return (0);
}

int	ft_posbase(char str, char *base)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (str == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char	*str, char *base)
{
	int	nb;
	int	i;
	int	len;
	int	x;
	
	i = 0;
	x = 0;
	nb = 0;
	len = 0;
	while (base[len])
		len++;
	while (str[i] && nb == 0)
	{
		while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				x++;
			i++;
		}
		if (ft_checkillegalws(str[i]))
			return (0);
		while (str[i] > 32 && str[i] < 127)
		{
			nb = (nb * len) + ft_posbase(str[i], base);
			i++;
		}
		if ((x % 2) == 1)
			nb = nb * (-1);
	}
	return (nb);
}

int	main(int argc, char **argv)
{
	printf("%d", ft_atoi_base(argv[1], argv[2]));
}

