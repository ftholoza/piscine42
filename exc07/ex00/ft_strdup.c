/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:50:44 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/24 16:15:44 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
#include "string.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copie;
	int		j;
	int		sizestring;

	j = 0;
	sizestring = ft_strlen(src);
	copie = malloc(sizeof(char) * (sizestring) + 1);
	if (!copie)
		return (copie);
	while (j < sizestring)
	{
		copie[j] = src[j];
		j++;
	}
	copie[j] = '\0';
	return (copie);
}

/*int	main(void)
{
	char *src = "lalalala";
	char *res;
	res = ft_strdup(src);
	printf("%s",res);
	free (res);
}*/
