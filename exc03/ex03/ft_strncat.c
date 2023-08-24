/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:43:03 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/14 16:37:31 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	return (l);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb )
{
	int unsigned	i;
	int unsigned	lendest;

	i = 0;
	lendest = ft_strlen(dest);
	while (src[i] && nb > 0)
	{
		dest[lendest + i] = src[i];
		i++;
		nb --;
	}
	dest[lendest + i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	src[30] = "salut les coco";
    char    idest[200] = "loulou";
	char	dest2[200] = "loulou";
    printf("%s\n", ft_strncat(idest, src, 1));
	printf("%s", strncat(dest2, src, 1));
}*/
