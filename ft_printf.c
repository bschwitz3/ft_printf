/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:21:27 by bschwitz          #+#    #+#             */
/*   Updated: 2021/12/07 17:16:11 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

int	ft_type(int i, va_list args)
{
	if (i == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (i == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (i == 'p')
		return (ft_ptrhex(va_arg(args, void *)));
	else if (i == 'i' || i == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (i == 'u')
		return (ft_putunsignednbr(va_arg(args, unsigned int)));
	else if (i == 'x')
		return (ft_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (i == 'X')
		return (ft_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (i == '%')
		return (write(1, "%", 1));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	args;

	va_start(args, format);
	i = 0;
	ret = 0;
	while (format[i] != 0)
	{
		if (format[i] == '%' && format[i + 1] != 0)
		{
			i++;
			ret += ft_type(format[i], args);
		}
		else
			ret += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (ret);
}
