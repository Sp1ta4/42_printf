/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:19:39 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/18 21:26:25 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_hex(unsigned int num, char x)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789ABCDEF";
	if (x == 'x')
		hex = "0123456789abcdef";
	if (num > 15)
	{
		count += ft_printnbr_hex(num / 16, x);
		count += ft_printch(hex[num % 16]);
	}
	else
		count += ft_printch(hex[num]);
	return (count);
}
