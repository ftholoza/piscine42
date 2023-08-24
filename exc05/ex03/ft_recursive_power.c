/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 04:52:31 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/15 05:15:22 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		res = nb * (ft_recursive_power(nb, power -1));
	return (res);
}
/*int	main(void)
{
	printf("%d", ft_recursive_power(2, 5));
}*/
