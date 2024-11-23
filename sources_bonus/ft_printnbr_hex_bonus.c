/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_hex_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:19:39 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/23 16:19:56 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int ft_printnbr_hex_recursive(unsigned int num, char *hex)
{
    int count = 0;

    // Если число больше 15 (т.е. больше одной цифры в шестнадцатеричной системе)
    if (num > 15)
        count += ft_printnbr_hex_recursive(num / 16, hex);

    // Печатаем текущую цифру в шестнадцатеричной системе
    count += ft_printch(hex[num % 16]);
    return count;
}

int ft_printnbr_hex(unsigned int num, char x, char *flags)
{
    int count = 0;
    char *hex = U_HEX; // Используем строку для заглавных букв по умолчанию

    // Выбираем строку символов в зависимости от спецификатора 'x' или 'X'
    if (x == 'x')
        hex = L_HEX;

    // Обработка флага '#', добавляем префикс "0x" или "0X" если нужно
    if (ft_strchr(flags, '#') && num != 0)
    {
        count += ft_printch('0');
        if (x == 'x')
            count += ft_printch('x');
        else
            count += ft_printch('X');
    }

    // Если число не равно нулю, печатаем его в шестнадцатеричном формате
    if (num != 0 || ft_strchr(flags, '#'))  // Добавлено условие, чтобы не выводить префикс на ноль
        count += ft_printnbr_hex_recursive(num, hex);

    return count;
}
