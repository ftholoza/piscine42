/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:17:41 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/06 01:11:48 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
/*int     main(void)
{

        char * str = "salut";
	int	l = ft_strlen(str);
	printf("%d", l);
}*/
