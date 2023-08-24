/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 01:53:04 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/09 23:15:12 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "unistd.h"

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (!((str[i - 1] >= 'a') && (str[i - 1] <= 'z'))
				&& (!((str[i - 1] >= 'A') && (str[i - 1] <= 'Z')))
				&& (!((str[i - 1] >= '0') && (str[i - 1] <= '9')))))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char str[200] = "$x:#^(egr@/znr+zs:df:z]";
	ft_strcapitalize(str);
	printf("%s", str);
}*/
