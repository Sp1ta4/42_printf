/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_flags_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:29:14 by ggevorgi          #+#    #+#             */
/*   Updated: 2025/01/19 17:48:59 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>

void	ft_add_flags(const char *s, char *flags)
{
	int	i;

	i = 0;
	while (i < 4)
		flags[i++] = '\0';
	while (*s && !ft_strchr(SPECIFIERS, *s))
	{
		if (ft_strchr(FLAGS, *s))
		{
			if (!ft_strchr(flags, *s))
			{
				*flags = *s;
				++flags;
			}
		}
		++s;
	}
	*flags = '\0';
}
