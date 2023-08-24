/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:40:35 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/24 16:14:13 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

int	ft_char_in_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c || c == '\0')
			return (1);
		i++;
	}
	return (0);
}

void	ft_filltab(char **res, char *str, char *sep, int wrdcount)
{
	int	indextab;
	int	nstring;
	int	i;

	indextab = 0;
	nstring = 0;
	i = 0;
	while (str[i])
	{
		while (ft_char_in_sep(str[i], sep))
			i++;
		while (!ft_char_in_sep(str[i], sep))
		{
			res[nstring][indextab] = str[i];
			indextab++;
			i++;
		}
		nstring++;
		indextab = 0;
	}
}		

int	ft_count_wrd(char *str, char *sep)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (ft_char_in_sep(str[i], sep) && str[i])
			i++;
		if (!ft_char_in_sep(str[i], sep))
			count++;
		while (!ft_char_in_sep(str[i], sep) && str[i])
			i++;
	}
	return (count);
}

/*void	ft_printab(char **res, int wrdcount)
{
	int nstring;

	nstring = 0;
	while (nstring < wrdcount)
	{
		printf("%s\n", res[nstring]);
		nstring++;
	}
}*/

char	**ft_split(char *str, char *sep)
{
	char	**res;
	int		si[3];

	si[0] = 0;
	si[1] = 0;
	si[2] = 0;
	res = malloc(sizeof (char *) * ft_count_wrd(str, sep));
	if (!res)
		return (res);
	while (str[si[0]])
	{
		while (ft_char_in_sep(str[si[0]], sep))
			si[0]++;
		while (!ft_char_in_sep(str[si[0]], sep))
		{
			si[0]++;
			si[1]++;
		}
		res [si[2]] = malloc(sizeof (char) * si[1]);
		si[1] = 0;
		si[2]++;
	}
	ft_filltab(res, str, sep, ft_count_wrd(str, sep));
	ft_printab(res, ft_count_wrd(str, sep));
}

/*int	main(int argc, char **argv)
{
	ft_split(argv[1], argv[2]);
}*/
