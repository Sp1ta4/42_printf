/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:19:22 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/18 21:25:55 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunbr(unsigned int num)
{
	int	count;

	count = 0;
	if (num > 9)
	{
		count += ft_printunbr(num / 10);
		count += ft_printch(num % 10 + '0');
	}
	else
		count += ft_printch(num + '0');
	return (count);
}
