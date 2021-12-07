/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:13:12 by bschwitz          #+#    #+#             */
/*   Updated: 2021/12/06 15:57:12 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_ptrhex(void *ptr)
{
	int				i;
	int				j;
	char			hexa[100];
	unsigned long	nbr;
	char			*base;

	base = "0123456789abcdef";
	nbr = (unsigned long) ptr;
	j = 0;
	i = 0;
	i = i + write(1, "0x", 2);
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
