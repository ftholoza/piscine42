/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:38:24 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/15 15:18:39 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*int	main(void)
{
	printf("%d",ft_iterative_factorial(0));
}*/
