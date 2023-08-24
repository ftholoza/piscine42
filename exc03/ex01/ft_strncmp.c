/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 23:29:10 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/09 18:58:24 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "string.h"
#include "stdio.h"
#include "unistd.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char s1[] = "toutpareil9";
	char s2[] = "tout01";
	printf("%d\n",ft_strncmp(s1, s2, 1));
	printf("%d",strncmp(s1, s2, 1));
}*/
