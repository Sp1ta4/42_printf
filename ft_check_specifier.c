/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:16:30 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/18 21:26:08 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_specifier(char c, va_list arguments)
{
	int		result;

	result = 0;
	if (c == '%')
		result += ft_printch('%');
	else if (c == 'c')
		result += ft_printch(va_arg(arguments, int));
	else if (c == 's')
		result += ft_prints(va_arg(arguments, char *));
	else if (c == 'i' || c == 'd')
		result += ft_printnbr(va_arg(arguments, int));
	else if (c == 'u')
		result += ft_printunbr(va_arg(arguments, unsigned int));
	else if (c == 'x' || c == 'X')
		result += ft_printnbr_hex(va_arg(arguments, int), c);
	else if (c == 'p')
		result += ft_printptr(va_arg(arguments, void *));
	return (result);
}
