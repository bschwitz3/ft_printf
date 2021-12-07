/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:02:21 by bschwitz          #+#    #+#             */
/*   Updated: 2021/12/07 17:12:12 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int	ft_strlen(char *str);
int	ft_putunsignednbr(unsigned int nb);
int	ft_hex(unsigned int nbr, char *base);
int	ft_ptrhex(void *ptr);

#endif
