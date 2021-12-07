/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:00:23 by bschwitz          #+#    #+#             */
/*   Updated: 2021/12/06 18:02:25 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putunsignednbr(unsigned int nb)
{
	int	total;

	total = 0;
	if (nb > 9)
	{
		total += ft_putunsignednbr(nb / 10);
		total += ft_putunsignednbr(nb % 10);
	}
	else
		total += ft_putchar(nb + '0');
	return (total);
}
