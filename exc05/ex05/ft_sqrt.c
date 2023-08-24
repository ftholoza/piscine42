/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 07:04:46 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/16 10:03:36 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "unistd.h"

int	ft_sqrt(int nb)
{
	int	testr;
	int	res;

	testr = 1;
	res = 0;
	while (testr < 50000)
	{
		if (res > nb)
			return (0);
		res = testr * testr;
		if (res == nb)
			return (testr);
		testr++;
	}
	return (0);
}
/*int	main(void)
{
	printf("%d", ft_sqrt(2500000000));
}*/
