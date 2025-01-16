/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:18:41 by ggevorgi          #+#    #+#             */
/*   Updated: 2025/01/16 16:23:36 by ggevorgi         ###   ########.fr       */
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
