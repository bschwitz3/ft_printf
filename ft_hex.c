/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:03:42 by bschwitz          #+#    #+#             */
/*   Updated: 2021/12/07 17:11:38 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_hex(unsigned int nbr, char *base)
{
	int		i;
	int		j;
	char	hexa[100];

	j = 0;
	i = 0;
	if (nbr == 0)
		i = i + write(1, base, 1);
	while (nbr != 0)
	{
		hexa[j++] = base[nbr % 16];
		nbr = nbr / 16;
	}
	while (j != 0)
	{
		i = i + write(1, &hexa[j - 1], 1);
		j--;
	}
	return (i);
}
