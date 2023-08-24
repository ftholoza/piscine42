/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:20:22 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/17 17:19:36 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"
int	ft_checkillegal(char str)
{
	if (str != '+' && (str != '-') && (str != 32)
		&& !(str >= 48 && str <= 57) && !(str >= 9 && str <= 13))
		return (1);
	else
		return (0);
}
int	ft_checkillegalws(char str)
{
	if (!(str >= 9 && str <= 13 && str == 32 || str >= 48 && str <= 57))
		return (1);
	else
		return (0);
}
	
int	ft_atoi(char *str)
{
	int	x;
	int	nb;
	int	i;

	x = 0;
	i = 0;
	nb = 0;
	while (str[i] && nb == 0)
	{
		if(ft_checkillegal(str[i]))
			return (0);
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
		while (str[i] >= 48 && str[i] <= 57)
		{
			nb = (nb * 10) + str[i] - 48;
			i++;
		}
		if ((x % 2) == 1)
			nb = nb * (-1);
	}
	return (nb);
}

int	main(int argc, char **argv)
{
	int	nb;

	(void) argc;
	nb = ft_atoi(argv[1]);
	printf("%d",nb);
}
/*int main(void)
{
	char str[] = "\n  \t \f  \r \v -----2255wfwf";
	printf("%d",ft_atoi(str));
}*/
