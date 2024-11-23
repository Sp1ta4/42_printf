/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:18:41 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/23 16:21:23 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_prints(char *s)
{
	int	res;

	res = 0;
	if (!s)
		s = "(null)";
	while (*s)
		res += ft_printch(*s++);
	return (res);
}
