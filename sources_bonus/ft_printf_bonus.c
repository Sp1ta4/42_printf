/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:38:38 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/23 16:23:56 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int ft_printf(const char *s, ...)
{
    va_list arguments;
    int i = 0;
    int result = 0;
    char flags[4];  // Массив для флагов (поскольку мы обрабатываем только 3 флага, размер 4)

    va_start(arguments, s);
    while (s[i])
    {
        if (s[i] == '%')
        {
            ft_add_flags(&s[i + 1], flags); 
            while (s[i + 1] && ft_strchr(FLAGS, s[i + 1]))
            {
                i++; 
            }
            result += ft_check_specifier(s[i + 1], arguments, flags);
            ++i;
        }
        else
        {
            result += write(1, &s[i++], 1);
        }
    }
    va_end(arguments);
    return result;
}

