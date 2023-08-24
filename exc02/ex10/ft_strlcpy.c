/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:13:11 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/14 20:54:20 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "unistd.h"

char	ft_counter(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_counter(src));
	i = 0;
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (ft_counter(src));
}

/*#include <bsd/string.h>
int	main(void)
{
	char src[200] ="eff";
	char dest[220]="ddd";
	char dest1[45]="ddd";
	int x = ft_strlcpy(dest, src, 1);
	int y = strlcpy(dest1, src, 1);
	printf("%d\n%d%s%s", x, y,dest,dest1);
}*/
