/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:56:07 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/18 21:25:14 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printch(char ch);
int	ft_prints(char *s);
int	ft_printnbr(int num);
int	ft_printunbr(unsigned int num);
int	ft_printnbr_hex(unsigned int num, char x);
int	ft_printptr(void *ptr);
int	ft_printf(const char *s, ...);
int	ft_check_specifier(char c, va_list arguments);
int	ft_printptr_helper(void *ptr);

#endif