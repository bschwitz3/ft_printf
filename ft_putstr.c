/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:41:55 by bschwitz          #+#    #+#             */
/*   Updated: 2021/12/07 15:34:10 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (ft_putstr("(null)"));
	while (str[i] != 0)
		write(1, &str[i++], 1);
	return (ft_strlen(str));
}
