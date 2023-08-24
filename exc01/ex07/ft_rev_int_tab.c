/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:58:24 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/06 04:03:54 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	sd;

	sd = size / 2;
	i = 0;
	size = size -1;
	while (i < sd)
	{
		temp = tab [i];
		tab [i] = tab [size];
		tab [size] = temp;
		i++;
		size--;
	}
}
