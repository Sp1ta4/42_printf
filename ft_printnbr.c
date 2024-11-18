/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:19:02 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/18 21:26:46 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		if (num == -2147483648)
			return (ft_prints("-2147483648"));
		count += ft_printch('-');
		num = -num;
	}
	if (num > 9)
	{
		count += ft_printnbr(num / 10);
		count += ft_printch(num % 10 + '0');
	}
	else
		count += ft_printch(num + '0');
	return (count);
}
