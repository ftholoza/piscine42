/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:39:02 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/15 14:53:45 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		res = nb * (ft_recursive_factorial(nb - 1));
	}
	return (res);
}
/*int	main(void)
{
	printf("%d", ft_recursive_factorial(-1));
}*/
