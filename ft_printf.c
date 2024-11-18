/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:38:38 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/18 21:16:51 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arguments;
	int		i;
	int		result;

	va_start(arguments, s);
	i = 0;
	result = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			result += ft_check_specifier(s[++i], arguments);
			++i;
		}
		else
			result += write(1, &s[i++], 1);
	}
	va_end(arguments);
	return (result);
}
