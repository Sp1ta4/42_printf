/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_hex_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:19:39 by ggevorgi          #+#    #+#             */
/*   Updated: 2025/01/15 20:03:17 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_printnbr_hex_recursive(unsigned int num, char *hex)
{
	int	count;

	count = 0;
	if (num > 15)
		count += ft_printnbr_hex_recursive(num / 16, hex);
	count += ft_printch(hex[num % 16]);
	return (count);
}

int	ft_printnbr_hex(unsigned int num, char x, char *flags)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789ABCDEF";
	if (x == 'x')
		hex = "0123456789abcdef";
	if (ft_strchr(flags, '#') && num != 0)
	{
		count += ft_printch('0');
		if (x == 'x')
			count += ft_printch('x');
		else
			count += ft_printch('X');
	}
	if (num != 0 || ft_strchr(flags, '#'))
		count += ft_printnbr_hex_recursive(num, hex);
	return (count);
}
