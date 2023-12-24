/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakazdao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:46:35 by yakazdao          #+#    #+#             */
/*   Updated: 2023/12/04 20:49:48 by yakazdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int n, char format)
{
	long	nbr;
	int		count;

	nbr = n;
	count = 0;
	if (format == 'u')
		nbr = (unsigned int)nbr;
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		count += ft_putnbr(nbr / 10, format);
		count += ft_putnbr(nbr % 10, format);
	}
	else
		count += ft_putchar(nbr + 48);
	return (count);
}
