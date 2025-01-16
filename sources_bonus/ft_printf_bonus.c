/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:38:38 by ggevorgi          #+#    #+#             */
/*   Updated: 2025/01/16 16:25:24 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:38:38 by ggevorgi          #+#    #+#             */
/*   Updated: 2025/01/15 18:15:52 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>

static char	*initialize_flags(void)
{
	char	*flags;
	int		j;

	flags = malloc(sizeof(char) * 4);
	if (!flags)
		return (NULL);
	j = 0;
	while (j < 4)
		flags[j++] = '\0';
	return (flags);
}

static int	initialize_variables(int *i, int *result, char **flags)
{
	*i = 0;
	*result = 0;
	*flags = initialize_flags();
	return (*flags != NULL);
}

int	ft_printf(const char *s, ...)
{
	va_list	arguments;
	int		i;
	int		result;
	char	*flags;

	if (!initialize_variables(&i, &result, &flags))
		return (-1);
	va_start(arguments, s);
	while (s[i])
	{	
		if (s[i] == '%')
		{
			ft_add_flags(&s[i + 1], flags);
			while (s[i + 1] && ft_strchr(FLAGS, s[i + 1]))
				i++;
			// printf("1111 %c\n", s[i + 1]);
			result += ft_check_specifier(s[i + 1], arguments, flags);
			i += 2;
		}
		else
			result += write(1, &s[i++], 1);
	}
	free(flags);
	va_end(arguments);
	return (result);
}
