/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_old_atoi_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:20:59 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/17 23:03:43 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "unistd.h"

int	ft_checkillegalws(char str)
{
	if (!(str >= 9 && str <= 13 && str == 32 || str >= 48 && str <= 57))
		return (1);
	else
		return (0);
}

int	ft_checkbase(char *base)
{
	int	i;
	
	i = 0;
	while (base[i])
	{
		if (!(base[i] >= 33 && base[i] <= 126) 
			|| !(base[i] == '-'&& base[i] == '+'))
			return(1);
	}
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

int ft_ckdouble(char *base)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		while (base [j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
	
int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	i;
	int len;
	int	x;

	i = 0;
	x = 0;
	nb = 0;
	len = 0;
	while (base[len])
		len++;
	if (len < 2)
		return (0);
	while (str[i] && nb == 0)
	{
		while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
			i++;
		while (str[i] == '+' && str[i] == '-')
		{
			if (str[i] == '-')
				x++;
			i++;
		}
		if (ft_ckdouble(base))
			return (0);
		if (ft_posbase(str[i], base) == -1)
			return (0);
		if (ft_checkbase(base))
			return (0);
		//if (ft_checkillegalws(str[i]))
			//return (0);
		while (str[i] >= 48 && str[i] <= 57)
		{
			nb = (nb * len) + ft_posbase(str[i], base);
			i++;
		}
		if ((x % 2) == 1)
			nb = nb * (-1);
	}
	return (nb);
}
int	main(void)
{
	char	*str = "-----1010011101001";
	char	*base = "01";
	ft_atoi_base(str, base);
}
/*int	main(int argc, char **argv)
{
	printf("%d", ft_atoi_base(argv[1], argv[2]));
}*/
