/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:19:02 by ggevorgi          #+#    #+#             */
/*   Updated: 2025/01/15 14:58:33 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_printnbr_recursive(int num)
{
	int	count;

	count = 0;
	if (num > 9)
		count += ft_printnbr_recursive(num / 10);
	count += ft_printch(num % 10 + '0');
	return (count);
}

int	ft_printnbr(int num, char *flags)
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
	else
	{
		if (ft_strchr(flags, '+'))
			count += ft_printch('+');
		else if (ft_strchr(flags, ' '))
			count += ft_printch(' ');
	}
	count += ft_printnbr_recursive(num);
	return (count);
}
