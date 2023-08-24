/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:41:21 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/09 14:47:35 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "string.h"
#include "stdio.h"
#include "unistd.h"

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str)
	{
		l++;
		str++;
	}
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int	lendest;
	int	i;	

	i = 0;
	lendest = ft_strlen(dest);
	while (src[i])
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	src[30] = "aaaaaaaeergerf";
	char	dest[30] = "wffwfwfwefwfa";
	char	dest2[30] = "wffwfwfwefwfa";
	printf("%s\n", ft_strcat(dest, src));
	printf("%s",strcat(dest2, src));
}*/
