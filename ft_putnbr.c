/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:38:15 by bschwitz          #+#    #+#             */
/*   Updated: 2021/12/06 18:04:31 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr(int nb)
{
	unsigned int	nb_unsigned;
	int				total;

	total = 0;
	if (nb < 0)
	{
		nb_unsigned = (unsigned int)(-1 * nb);
		total += ft_putchar('-');
	}
	else
		nb_unsigned = (unsigned int)nb;
	if (nb_unsigned > 9)
	{
		total += ft_putnbr(nb_unsigned / 10);
		total += ft_putnbr(nb_unsigned % 10);
	}
	else
		total += ft_putchar(nb_unsigned + '0');
	return (total);
}
