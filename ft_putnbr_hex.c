/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakazdao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:50:10 by yakazdao          #+#    #+#             */
/*   Updated: 2023/12/04 20:53:36 by yakazdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int n, char format)
{
	int		count;
	char	*x_lower;
	char	*x_upper;

	count = 0;
	x_lower = "0123456789abcdef";
	x_upper = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_putnbr_hex(n / 16, format);
		count += ft_putnbr_hex(n % 16, format);
	}
	else
	{
		if (format == 'x')
			count += ft_putchar(x_lower[n]);
		else if (format == 'X')
			count += ft_putchar(x_upper[n]);
	}
	return (count);
}
