/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:34:12 by ftholoza          #+#    #+#             */
/*   Updated: 2023/08/09 23:13:42 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hexa;
	unsigned char	uc;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			uc = (unsigned char)str[i];
			write(1, "\\", 1);
			write(1, &hexa[uc / 16], 1);
			write(1, &hexa[uc % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i ++;
	}
}
/*int		main(void)
{
		char *str = "Coucou\ntu vas biâen \x81?";
		ft_putstr_non_printable(str);
}*/
