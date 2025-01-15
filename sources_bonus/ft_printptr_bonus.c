/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:15:34 by ggevorgi          #+#    #+#             */
/*   Updated: 2025/01/15 19:40:55 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_printptr_helper(void *ptr)
{
	unsigned long	num;
	char			*hex;
	int				count;

	num = (unsigned long)ptr;
	count = 0;
	hex = "0123456789abcdef";
	if (num >= 16)
	{
		count += ft_printptr_helper((void *)(num / 16));
		count += ft_printch(hex[num % 16]);
	}
	else
		count += ft_printch(hex[num]);
	return (count);
}

int	ft_printptr(void *prt)
{
	int	result;

	result = 0;
	if (prt == 0)
		result += ft_prints("0x0");
	else
	{
		result += ft_prints("0x");
		result += ft_printptr_helper(prt);
	}
	return (result);
}
