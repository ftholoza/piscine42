/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:13:26 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/10 02:56:05 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"
#include "string.h"

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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	lentofind;

	i = 0;
	j = 0;
	lentofind = ft_strlen(to_find);
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		if (str[i] != to_find[j])
			j = 0;
		else
			j++;
		i++;
		if (j == lentofind)
			return (&(str[i - lentofind]));
	}
	return (NULL);
}
/*int	main(void)
{
	char	str[200] = "";
	char	to_find[100] = "";
	printf("%s\n",ft_strstr(str, to_find));
	printf("%s",strstr(str, to_find));
}*/
