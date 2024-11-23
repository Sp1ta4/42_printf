/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:19:02 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/23 16:20:31 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_printnbr_recursive(int num)
{
	int count = 0;

	// Если число больше 9, продолжаем рекурсию
	if (num > 9)
		count += ft_printnbr_recursive(num / 10);

	// Печатаем текущую цифру
	count += ft_printch(num % 10 + '0');
	return count;
}

int ft_printnbr(int num, char *flags)
{
	int count = 0;

	// Обработка отрицательного числа
	if (num < 0)
	{
		// Если число -2147483648, выводим напрямую (это специальный случай)
		if (num == -2147483648)
			return ft_prints("-2147483648");

		// Печатаем минус и делаем число положительным
		count += ft_printch('-');
		num = -num;
	}
	else
	{
		// Обработка флага "+" или " "
		if (ft_strchr(flags, '+'))
			count += ft_printch('+');
		else if (ft_strchr(flags, ' '))
			count += ft_printch(' ');
	}

	// Печать числа с помощью рекурсии
	count += ft_printnbr_recursive(num);
	return count;
}
