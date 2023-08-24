/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:10:19 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/05 22:40:53 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main (void)
{
	int	div;
	int	mod;
	int	a = 10;
	int	b = 5;
	ft_div_mod(a ,b , &div, &mod);
	printf ("%d , %d", div, mod);
}*/
