/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:24:26 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/24 16:22:17 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

int	ft_count_char(char **strs, int size, char *sep)
{
	int	nstring;
	int	indextab;
	int	count;
	int	lensep;

	count = 0;
	nstring = 0;
	indextab = 0;
	lensep = 0;
	while (sep[lensep])
		lensep++;
	lensep = lensep * (size -1);
	while (nstring < size)
	{
		while (strs[nstring][indextab])
		{
			count++;
			indextab++;
		}
		nstring++;
		indextab = 0;
	}
	return (count + lensep);
}

void	ft_fill_string(char **strs, char *sep, int size, char *res)
{
	int	si[4];

	si[0] = 0;
	si[1] = 0;
	si[2] = 0;
	si[3] = 0;
	while (si[0] < size)
	{
		while (strs[si[0]][si[1]])
		{
			res[si[2]] = strs[si[0]][si[1]];
			si[2]++;
			si[1]++;
		}
		si[1] = 0;
		si[0]++;
		while (sep[si[3]] && si[0] < size)
		{
			res[si[2]] = sep[si[3]];
			si[2]++;
			si[3]++;
		}
		si[3] = 0;
	}
	res[si[2]] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		lenstring;
	int		nstring;

	nstring = 0;
	if (size <= 0)
	{
		res = malloc(sizeof (char) * 1);
		res[0] = '\0';
	}
	else
	{
		lenstring = ft_count_char(strs, size, sep);
		res = malloc(sizeof(char) * lenstring + 1);
		if (!res)
			return (res);
		res[0] = '\0';
		ft_fill_string(strs, sep, size, res);
	}
	return (res);
}

/*int	main(int argc, char **argv)
{
	printf("%s",ft_strjoin(argc -2, &argv[1], argv[argc - 1]));
}*/
