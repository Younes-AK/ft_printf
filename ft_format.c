/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakazdao <yakazdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:35:10 by yakazdao          #+#    #+#             */
/*   Updated: 2023/12/04 20:36:45 by yakazdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_format(va_list list, char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(list, int));
	else if (format == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (format == 'd' || format == 'i' || format == 'u')
		count += ft_putnbr(va_arg(list, int), format);
	else if (format == 'x' || format == 'X')
		count += ft_putnbr_hex(va_arg(list, int), format);
	else if (format == 'p')
	{
		count += ft_putstr("0x");
		count += ft_putptr_hex(va_arg(list, unsigned long));
	}
	else
		count += ft_putchar(format);
	return (count);
}
