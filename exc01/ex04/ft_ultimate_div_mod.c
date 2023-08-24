/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:36:15 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/05 22:42:24 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = (temp / *b);
	*b = (temp % *b);
}

/*int	main(void)
{
	int	a = 10;
	int	b = 5;
	ft_ultimate_div_mod(&a , &b);
	printf("%i , %i", a, b);
}*/
