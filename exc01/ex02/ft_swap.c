/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 03:54:06 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/05 22:38:01 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

void	ft_swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
/*int	main(void)
{
	int	a;
	int	b;
	a = 9;
	b = 6;
	ft_swap(&a, &b);
	printf ("%d %d",a , b);
}*/	
