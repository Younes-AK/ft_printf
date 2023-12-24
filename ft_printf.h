/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakazdao <yakazdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:41:04 by yakazdao          #+#    #+#             */
/*   Updated: 2023/12/07 09:28:39 by yakazdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_format(va_list list, char format);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n, char format);
int	ft_putnbr_hex(unsigned int n, char format);
int	ft_putptr_hex(unsigned long n);
#endif