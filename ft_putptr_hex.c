/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakazdao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:54:08 by yakazdao          #+#    #+#             */
/*   Updated: 2023/12/04 20:56:33 by yakazdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putptr_hex(unsigned long n)
{
	int		count;
	char	*x_lower;

	count = 0;
	x_lower = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_putptr_hex(n / 16);
		count += ft_putptr_hex(n % 16);
	}
	else
	{
		count += ft_putchar(x_lower[n]);
	}
	return (count);
}
