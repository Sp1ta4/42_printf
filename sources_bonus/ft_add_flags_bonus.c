/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_flags_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:29:14 by ggevorgi          #+#    #+#             */
/*   Updated: 2025/01/15 14:57:43 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_add_flags(const char *s, char *flags)
{
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
