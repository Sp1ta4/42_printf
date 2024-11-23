/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specifier_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:16:30 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/23 16:21:04 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int ft_check_specifier(char c, va_list arguments, char *flags)
{
    int result = 0;

    if (c == '%')
        result += ft_printch('%');
    else if (c == 'c')
        result += ft_printch(va_arg(arguments, int));
    else if (c == 's')
        result += ft_prints(va_arg(arguments, char *));
    else if (c == 'i' || c == 'd')
        result += ft_printnbr(va_arg(arguments, int), flags);
    else if (c == 'u')
        result += ft_printunbr(va_arg(arguments, unsigned int));
    else if (c == 'x' || c == 'X')
        result += ft_printnbr_hex(va_arg(arguments, unsigned int), c, flags);
    else if (c == 'p')
        result += ft_printptr(va_arg(arguments, void *));
    
    return result;
}
